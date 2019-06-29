//============================================================================
// Name        : CheckBinaryDiv3.cpp
// Author      : Mohish Nemade
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
#define ll long long int
using namespace std;

int main()
{
	int t=0;


	cin>>t;

	while(t--)
	{



	string s="";

	cin>>s;
	ll odd=0,even=0;

ll len=s.length();
	for(ll i=len-1;i>=0;i--)
	{
		if(i%2==0)
		{
			if(s[i]=='1')
				odd++;
		}
		else
		{
			if(s[i]=='1')
				even++;
		}
	}

	if(((abs(odd-even))%3)==0)
		cout<<1<<endl;
	else
		cout<<0<<endl;
	}


	return 0;
}
