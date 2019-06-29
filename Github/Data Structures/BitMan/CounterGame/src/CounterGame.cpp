//============================================================================
// Name        : CounterGame.cpp
// Author      : Mohish Nemade
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#include<stdio.h>
#include <iostream>
using namespace std;


	int setBits(unsigned long long int n) {
	    int count = 0 ;
	    while(n) {
	    	n &= (n-1) ;
	        count ++ ;
	        cout<<n<<" ";
	    }
	    cout<<count;
	    return count ;
	}

	int main() {
	    int t ;
	    cin>>t ;
	    while(t--) {
	        unsigned long long int n ;
	        cin>>n;
	        int res=setBits(n-1) & 1;
	        cout<<"res"<<res;
	        if (res)
	        	cout<<"Louise";
	        else
	        	cout<<"Richard";
	    }
	    return 0;




}
