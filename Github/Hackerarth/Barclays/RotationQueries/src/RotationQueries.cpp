//============================================================================
// Name        : RotationQueries.cpp
// Author      : Mohish Nemade
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n, k;
    cin>>n>>k;
    ll a[n],prefix[n + 1];
    prefix[0] = 0;
    for(ll i = 0; i < n; i++)
    {
        cin>>a[i];
        prefix[i + 1] = a[i] + prefix[i];
      //  cout<<prefix[i + 1]<<endl;
    }
    for(ll i = 0; i < n; i++)
    {
        ll x;
        for(ll j = n; j >= i + 1; j--)
        {
            if(prefix[j] - prefix[i] <= k)
            {
                x = prefix[j] - prefix[i];
               // cout<<x<<" "<<prefix[j]<<" "<< prefix[i]<<endl;
                break;
            }

        }
        ll temp = a[(i + x) % n];
        for(int j = (i + x+1) % n; j <=n; j++)
        {
            prefix[j] -= temp + x;
        }
        a[(i + x) % n] = k ^ x;
    }
    	ll sum = 0;
			for(ll i = 0; i < n; i++)
			{
				sum += a[i];
			}
    cout<<sum;
return 0;
}
