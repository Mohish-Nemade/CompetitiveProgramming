//============================================================================
// Name        : KS2.cpp
// Author      : Mohish Nemade
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

using namespace std;
#define ll unsigned long long int
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	 int t;
	 cin>>t;

	 while(t--)
	 {
		 ll n=0;
		 cin>>n;
		// cout<<"aa";
        ll res=0;
		 ll i=n*10,k=0,sum=0;
		 while(1)
		 {

			// cout<<"aa"<<endl;
			 sum=0;
			 k=i;
			 while(k>0)
			 {
				 sum=sum+k%10;
				 k=k/10;
			 }
			 if(sum%10==0)
			 {
				 res=i;
				 break;
			 }
			 i++;

		 }

		 cout<<res<<endl;


	 }


	return 0;
}
