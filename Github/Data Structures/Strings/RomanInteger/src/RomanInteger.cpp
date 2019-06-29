//============================================================================
// Name        : RomanInteger.cpp
// Author      : Mohish Nemade
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <map>
#include <iterator>
using namespace std;


int func(string s)
{
	map<char,int> m={{'I', 1}, {'V', 5},{'X', 10},{'L', 50},{'C', 100},{'D', 500},{'M', 1000}};;

	int total = 0;
	        for(int i = 0; i < s.length(); i++)
	        {
	            if(m[s[i+1]] <= m[s[i]])
	            	total += m[s[i]];
	            else
	            	total -= m[s[i]];
	        }
	        return total;


}


int main() {
	int tc;
		cin>>tc;
		while(tc--)
		{
			string str;
			cin>>str;
			int ans=func(str);
cout<<ans<<endl;



		}

	return 0;
}
