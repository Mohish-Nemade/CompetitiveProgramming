//============================================================================
// Name        : LongestCommonSub.cpp
// Author      : Mohish Nemade
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int func(char str1[],char str2[],int len1,int len2)
{
	int mat[len1+1][len2+1];
	int result=0;

	for(int i=0;i<=len1;i++)
	{
		for(int j=0;j<=len2;j++)
		{

			if(i==0 || j==0)
			     mat[i][j]=0;
			else
				if(str1[i-1]==str2[j-1])
				{
				mat[i][j]=mat[i-1][j-1]+1;

					if(result<mat[i][j])
						result=mat[i][j];
				}
				else
				     mat[i][j]=0;

		}


	}
   return result;

}


int main() {
	int tc;
			cin>>tc;
			while(tc--)
			{
				char a [1001];
				        char b [1001];
				        int m, n;
				        cin>>m>>n;
				        cin>>a>>b;
				int ans=func(a,b,m,n);
				cout<<ans<<endl;



			}

		return 0;

}
