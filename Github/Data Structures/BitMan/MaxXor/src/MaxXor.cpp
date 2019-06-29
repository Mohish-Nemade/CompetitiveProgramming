//============================================================================
// Name        : MaxXor.cpp
// Author      : Mohish Nemade
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <math.h>
using namespace std;

int main() {
	int l=0,r=0;
	cin>>l>>r;


	int res=l^r;
	//cout<<res;

	int count=0;
	for(int i=0;i<32;i++)
	{
		if(res & (1<<i))
		{
			count=i;

		}
		//cout<<"h";
	}
	//cout<<count;

	res=(pow(2,count+1)-1);




	cout<<res;


	return 0;
}
