//============================================================================
// Name        : insertFormPalindrome.cpp
// Author      : Mohish Nemade
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#include <stdio.h>
#include <string.h>
#include <iostream>
using namespace std;

int min(int a, int b)
{   return a < b ? a : b;  }

int findMinInsertionsDP(char str[], int n)
{

    int table[n][n], l, h, gap;

    // Initialize all table entries as 0
    memset(table, 0, sizeof(table));

    // Fill the table
    for (gap = 1; gap < n; ++gap)
        for (l = 0, h = gap; h < n; ++l, ++h)
            table[l][h] = (str[l] == str[h])?
                          table[l+1][h-1] :
                          (min(table[l][h-1],
                           table[l+1][h]) + 1);


    return table[0][n-1];
}



int main() {

	int t;
		cin>>t;
		while(t!=0)
		{
			char str[1001],res;
			cin>>str;
		   // res = findMinInsertionsDP(str,strlen(str));
		    printf("%d", findMinInsertionsDP(str, strlen(str)));

		   cout<<endl;
		    t--;
		}
	return 0;
}
