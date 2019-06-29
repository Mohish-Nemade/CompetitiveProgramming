//============================================================================
// Name        : LongestSubstring.cpp
// Author      : Mohish Nemade
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <bits/stdc++.h>
#include <stack>
using namespace std;
void longestPalSubstr(string str)
{
    int maxLength = 1;
    int start = 0;
    int len = str.length();

    int low, high;


    for (int i = 1; i < len; ++i)
    {

        low = i - 1;
        high = i;
        while (low >= 0 && high < len && str[low] == str[high])
        {
            if (high - low + 1 > maxLength)
            {
                start = low;
                maxLength = high - low + 1;
            }
            --low;
            ++high;
        }


        low = i - 1;
        high = i + 1;
        while (low >= 0 && high < len && str[low] == str[high])
        {
            if (high - low + 1 > maxLength)
            {
                start = low;
                maxLength = high - low + 1;
            }
            --low;
            ++high;
        }
    }

  for( int i = start; i <=(start + maxLength - 1); ++i )
        cout<<str[i];


}
1
int main() {
	  int test=0;
    //cout<<"dsa";

    string str="";
    cin>>test;

    while(test!=0)
    {

    	cin>>str;
        longestPalSubstr(str);


        test--;
    }
	return 0;
}
