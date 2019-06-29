//============================================================================
// Name        : REDONE.cpp
// Author      : Mohish Nemade
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#define ll long long int
using namespace std;

int main()
{

	 ios_base::sync_with_stdio(false);
	    cin.tie(NULL);


	    const unsigned int M = 1000000007;

	    ll cntn=1;
	    ll arr[1000002]={0};
	    arr[0]=0;
	    arr[1]=1;
	    for (int i=2; i<=1000000; i++)
	    {
	    				cntn=(cntn*i+(cntn+i))%M;
	    				arr[i]=cntn;
	    }

	  //  cout<<arr[2]<<arr[3]<<endl;

	    int n, t;
	    cin>>t;
	    while(t--)
	    {
	    	 unsigned long long cnt = 1;
			cin >> n;


			cout << arr[n]<< "\n";
	    }
	    return 0;
}
