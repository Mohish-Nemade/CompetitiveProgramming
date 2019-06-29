//============================================================================
// Name        : KIRLAB.cpp
// Author      : Mohish Nemade
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include<stdlib.h>
#include<stdio.h>
#include<iostream>
#include<math.h>
#include<map>
#include<vector>

using namespace std;

typedef long long ll;

int v[100001]={0};
int max_place[10000005]={0};

int main()
{
    vector<int> smallest_fac(10000005,0);

for(int i=2;i*i<=10000005;i++)
{
    if(smallest_fac[i]==0)
    {
        for(int j=i*i;j<=10000005;j+=i)
            if(smallest_fac[j]==0)
            smallest_fac[j]=i;
    }
}

for(int i=0;i<=1000;i++)
{
   cout<<i<<" "<<smallest_fac[i]<<endl;;
}

int t;
    scanf("%d",&t);

    while(t--)
    {
        int n;
    scanf("%d",&n);

    int i=0;
    while(i<n)
        scanf("%d",&v[i++]);

    for(int k=2;k<=10000001;k++)
     max_place[k]=0;

int temp[100001]={0};

    int maxx=1;

    for(int i=0;i<n;i++)
    {
        int maxc=0;

        int s=0;

        while(smallest_fac[v[i]]>0 && v[i]%smallest_fac[v[i]]==0)
        {
        	cout<<"fact="<<smallest_fac[v[i]]<<" v[i]="<<v[i]<<endl;
        temp[s++]=smallest_fac[v[i]];

            if(max_place[smallest_fac[v[i]]]>maxc)
            maxc=max_place[smallest_fac[v[i]]];

            int fac=smallest_fac[v[i]];
             while(v[i]%fac==0)
                v[i]/=fac;
        }

        if(v[i]>1)
        {
        	cout<<"v[i]="<<v[i]<<endl;
            temp[s++]=v[i];
            if(max_place[v[i]]>maxc)
                maxc=max_place[v[i]];
        }

    for(int u=0;u<s;u++)
    max_place[temp[u]]=maxc+1;

    if(maxx<maxc+1)
        maxx=maxc+1;
    }
    printf("%d\n",maxx);
    }
    return 0;
}
