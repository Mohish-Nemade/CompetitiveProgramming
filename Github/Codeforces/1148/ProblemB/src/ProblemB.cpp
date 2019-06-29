//============================================================================
// Name        : ProblemB.cpp
// Author      : Mohish Nemade
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#define ll long long int
#include <iterator>
#include <map>
using namespace std;

ll fun(ll a,ll arr[],ll m)
{
	ll count=0;
	for(ll i=0;i<m;i++)
	{
		if(arr[i]<a)
		{
			count++;
		}
		else
			break;
	}
	return m-count;

}


int main() {
	ll n,m,ta,tb,k;

	cin>>n>m>>ta>>tb>>k;

	ll ab[n]={0};
	ll bc[m]={0};
	ll abadv[n]={0};
	ll abI[n]={0};

	for(ll i=0;i<n;i++)
		cin>>ab[i];

	for(ll j=0;j<m;j++)
			cin>>bc[j];

	if(n<=k || m<=k)
	{
		cout<<"-1";
		return 0;
	}

	for(ll i=0;i<n;i++)
		abadv[i]=ab[i]+ta;

	for(ll i=0;i<n;i++)
		abI[i]=fun(abadv[i],bc,m);

    map<ll, ll> gquiz1;


	for(ll i=0;i<n;i++)





	return 0;
}
