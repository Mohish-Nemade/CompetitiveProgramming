//============================================================================
// Name        : CV.cpp
// Author      : Mohish Nemade
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	    cin.tie(NULL);
	int t=0,n=0;

	string str;
	cin>>t;

	while(t--)
	{
		cin>>n;
		cin>>str;

		int i=0,count=0;
		while(i!=n)
		{
			if(i+1<n)
			{
				if ((str[i] == 'a')|| (str[i] == 'e')|| (str[i] == 'i')|| (str[i] == 'o')|| (str[i] == 'u')){
					i++;
                    continue;
        		}
				else
				{
				    if ((str[i+1] == 'a')|| (str[i+1] == 'e')|| (str[i+1] == 'i')|| (str[i+1] == 'o')|| (str[i+1] == 'u'))
				        count++;

				}

			}

			i++;
		}
		cout<<count<<endl;

	}


	return 0;
}
