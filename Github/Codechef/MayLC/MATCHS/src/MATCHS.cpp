//============================================================================
// Name        : MATCHS.cpp
// Author      : Mohish Nemade
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<bits/stdc++.h>
#include<cstdlib>
using namespace std;


int checkBest( long long a1, long long a11, long long b)
{
	//cout<<"in="<<a1<<" in="<<a11<<endl;
	/*if(a1%b!=0 && b%a1!=0)
	{
		return a1;
	}*/

	{
		if(a11%b==0 || b%a11==0)
			return a1;
		else
			return a11;
	}
}

void playGame( long long a, long long b)
{
	 long long temp=0,a1,b1,a11,b11;
	int i=0;

	while(a!=0 && b!=0)
	{
		i++;
		//cout<<"a="<<a<<" b="<<b<<endl;
		a1=a;
		b1=b;
		if(a%b==0 || b%a==0)
		{
			break;
		}
		temp=a/b;
		//cout<<"temp="<<temp<<endl;
		if(a>b)
		{
			while(a1>b)
			{
				a11=a1;
				a1=a1-b;
			}
			//cout<<"a1a11"<<a1<<a11<<endl;

			if(a11==a)
			{
				a=a1;
			continue;
			}
			if(a1<0)
				a=a11;
			else
			{
				//cout<<b<<endl;
				//cout<<abs(a1-b)<<" "<<(a11-b)<<endl;
				if(abs(b-a1)==abs(a11-b))
				{
					a=checkBest(a1,a11,b);
				}
				else
				{

						if((a11-b)<(b-a1))
						{
							a=a11;
						}
						else
							a=a1;

				}
			}
			//cout<<a<<b;
			//break;
		}
		else
		{
			while(b1>a)
						{
							b11=b1;
							b1=b1-a;
						}
						//cout<<"b1b11"<<b1<<b11<<endl;
						if(b11==b)
						{
							b=b1;
						continue;
						}
						if(b1<0)
							b=b11;
						else
						{
							//cout<<a<<endl;
							//cout<<abs(b1-a)<<" "<<(b11-a)<<endl;
							if(abs(a-b1)==abs(b11-a))
							{
								b=checkBest(b1,b11,a);
							}
							else
							{

									if((b11-a)<(a-b1))
									{
										b=b11;
									}
									else
										b=b1;
							}
						}
		}

	}
	//cout<<i<<endl;
	if(i%2==0)
		cout<<"Rich"<<endl;
	else
		cout<<"Ari"<<endl;
}



int main()
{
	 	 	ios_base::sync_with_stdio(false);
		    cin.tie(NULL);
		//    const unsigned int M = 1000000007;

		     long long t=0,a=0,b=0;
		    cin>>t;
		    while(t--)
		    {

				cin >> a>>b;

				playGame(a,b);
		    }
	    return 0;
}
