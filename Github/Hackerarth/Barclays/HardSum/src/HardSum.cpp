#include <bits/stdc++.h>
#include <iostream>
using namespace std;


int pairAndSum( int n)
{
    int ans = 0;

    for (int i = 0; i < 32; i++)
    {
               int k = 0;
        for (int j = 0; j < n; j++)
            if ( !((j+1) & (1 << i)) )
                k++;


        ans += (1<<i) * (n*(n-1)/2 -k*(k-1)/2);
    }

    ans=ans*2;
    ans=ans+((n*(2+(n-1)))/2);

    return ans;
}


int main()
{

    int n = 0;
    cin>>n;
    cout << pairAndSum( n) << endl;
    return 0;
}
