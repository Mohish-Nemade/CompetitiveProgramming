//============================================================================
// Name        : ReverseWords.cpp
// Author      : Mohish Nemade
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string.h>
#include <bits/stdc++.h>

#include <stdlib.h>
using namespace std;


void reverseWords(char *str)
{
	int i=0,flag=0;

	int start=0;
	int len=strlen(str);

	for(int k=0;k<len;k++)
	{

		if(str[k]=='.')
		{
		//	cout<<" start="<<start;
			//return;
			//cout<<"-"<<start<<"-";

			//cout<<k-1<<"-";

			for(int i=start,j=k-1;i<((start+(k-1))/2)+1;i++,j--)
			{
					char temp=*(str+i);
					*(str+i)=*(str+j);
					//cout<<"="<<i<<"=";
					*(str+j)=temp;

			}



			flag=0;
		}
		else
		{

			if(flag==0)
			{
				start=k;
				flag=1;
			}
		}
		if(k==len-1)
				{
							//cout<<"yooo";
							//return;
							//cout<<" s="<<start<<" k="<<k<<" ";
							for(int i=start,j=k;i<((start+k)/2)+1;i++,j--)
								{
								//cout<<"yooo"<<i;

									char temp=*(str+i);
									*(str+i)=*(str+j);
									*(str+j)=temp;

								}

				}

	}
	char *begin=str,*end=str+len-1;
		char temp;
		    while (begin < end) {
		        temp = *begin;
		        *begin++ = *end;
		        *end-- = temp;
		    }
	for(int j=0;j<len;j++)
	{
		cout<<str[j];
	}
}






int main() {
	int tc;
		cin>>tc;
		while(tc--)
		{
			char s[2001];
			char *str=s;
cin>>s;

			reverseWords(str);

			cout<<endl;



		}

	return 0;
}
