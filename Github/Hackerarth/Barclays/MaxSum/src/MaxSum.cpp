#include<bits/stdc++.h>
#define ll long long int
using namespace std;

// Function to find maximum product pair in arr[0..n-1]
void maxProduct(ll arr[], int n)
{

    if (n == 2)
    {
        cout << arr[0]*arr[1] << endl;
        return;
    }

    long long int posa = INT_MIN, posb = INT_MIN;

    long long int nega = INT_MIN, negb = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > posa)
        {
            posb = posa;
            posa = arr[i];
        }
        else if (arr[i] > posb)
            posb = arr[i];

        if (arr[i] < 0 && abs(arr[i]) > abs(nega))
        {
            negb = nega;
            nega = arr[i];
        }
        else if(arr[i] < 0 && abs(arr[i]) > abs(negb))
            negb = arr[i];
    }

    if (nega*negb > posa*posb)
        cout << nega*negb<<endl;
    else
        cout <<posa*posb<<endl;
}

int main()
{
	 ios_base::sync_with_stdio(false);
	    cin.tie(NULL);
	   int t,n=0;
	    cin>>t;
	    while(t--)
	    {

			cin>>n;
			ll arr[n]={0};
			for(int i=0;i<n;i++)
			{
				cin>>arr[i];
			}

			maxProduct(arr, n);
	    }
    return 0;
}
