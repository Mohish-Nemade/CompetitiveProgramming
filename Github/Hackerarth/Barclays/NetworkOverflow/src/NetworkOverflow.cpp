

#include <iostream>
#define ll long long int
using namespace std;

int main()
{
	 ios_base::sync_with_stdio(false);
		    cin.tie(NULL);
		   int n=0,m=0;
		    cin>>n;
		    ll a=0;

		    	ll remain=0;
		    	cin>>m;
		    	ll rem[m];

				ll arr[m+1]={0};
				for(int i=1;i<=m;i++)
				{
					cin>>arr[i];
				}

				ll count=0;
				for(int i=1;i<=m;i++)
				{
					if(i==1)
					{
						if(arr[i]<n)
						{
						remain=n-arr[i];
						rem[i]=remain;
						count=arr[i];
						}
						else
						{
							count=n;
							break;

						}
					}
					else
					{
						if(i%2==0)
						{
							//cout<<"L "<<endl;

							if(rem[i/2]==0)
							{
								continue;
							}
							a=rem[i/2];

							if(a%2==1)
							{
								//cout<<"aasdasdsda";
								a=a/2+1;
							}
							else
								a=a/2;
							if(arr[i]<=a)
							{
								remain=a-arr[i];
								rem[i]=remain;
								count=count+arr[i];
							}
							else
							{
								count=count+a;
								rem[i]=0;
							}
						}
						else
						{
							//cout<<"R "<<endl;
							if(rem[i/2]==0)
							{
								continue;
							}
							a=rem[i/2];
							if(a%2==1)
							{
								//cout<<"bbbbbbbbbb";
								a=a/2;
							}
							else
								a=a/2;

							if(arr[i]<=a)
							{
								remain=a-arr[i];
								//cout<<"a="<<remain;
								rem[i]=remain;
								count=count+arr[i];
							}
							else
							{
								rem[i]=0;
								count=count+a;
							}

						}
					}
					//cout<<remain<<endl;
				}

				cout<<(n-count)<<endl;


	return 0;
}
