//============================================================================
// Name        : ProblemA.cpp
// Author      : Mohish Nemade
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#define ll long long int
using namespace std;

int main() {
		ll a,b,c;

		cin>>a>>b>>c;

		ll ans=0;
		if(c>0)
			ans=2*c;

		if(a==b)
		{
			ans=ans+(2*a);
		}
		else
			if(a>b)
				ans=ans+b+(b+1);
			else
				ans=ans+a+(a+1);


		cout<<ans;

	return 0;
}
