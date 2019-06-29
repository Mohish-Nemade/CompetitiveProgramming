#include <iostream>
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        ll n, k, x;

        cin>>n;
        ll a[n];

        ll totone = 0, totzero = 0;

        for(ll i = 0; i < n; i++)
        {
            cin>>a[i];
            if(a[i] == 1)
           {
            	totone++;
           }

            else
            	totzero++;
        }
        cin>>k>>x;
        if(x == 0)
        {
            cout<<totone<<endl;
            continue;
        }
        if(n%2==1 && k%2==1)
        {
        	cout<<n<<endl;
        	continue;
        }
        if(n%2==0 && k%2==0)
        {
              	cout<<n<<endl;
              	continue;
        }

        ll i = totone;
        while(i <= n)
        {
            i += k;
        }
        cout<<max(n*2 - i, i - k)<<endl;
    }
    return 0;
}
