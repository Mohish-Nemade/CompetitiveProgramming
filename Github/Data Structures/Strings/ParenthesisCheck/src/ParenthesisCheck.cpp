//============================================================================
// Name        : ParenthesisCheck.cpp
// Author      : Mohish Nemade
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <bits/stdc++.h>
#include <stack>
using namespace std;


bool parenthesisCheck(string str)
{
    int i=0;
    stack<char> s;
    char ch;
    for(int i=0;i<str.length();i++)
    {
    	if(str[i]=='{' || str[i]=='(' || str[i]=='[')
    	{
    		s.push(str[i]);
    		continue;
    	}


    	if(s.empty() && (str[i]=='}' || str[i]==')' || str[i]==']'))
    	{
    		return false;

    	}

    	switch(str[i])
    	{
    	case ']':
    		ch=s.top();
    		s.pop();
    		if(ch=='{' || ch=='(')
    		{
    			return false;
    		}
    		break;

    	case '}':
    		ch=s.top();
    		    		s.pop();
    		    		if(ch=='[' || ch=='(')
    		    		{
    		    			return false;
    		    		}
    		    		break;
    	case ')':
    		ch=s.top();
    		    		s.pop();
    		    		if(ch=='{' || ch=='[')
    		    		{
    		    			return false;
    		    		}
    	                break;
    	}


    }
    if(s.empty())
    {
        return true;
    }
    else
        return false;

}




int main() {
    int test=0;
    //cout<<"dsa";
    string str="";
    cin>>test;

    while(test!=0)
    {

    	getline(cin, str);


        if(parenthesisCheck(str))
        {
            cout<<"balanced"<<endl;
        }
        else
        {
            cout<<"not balanced"<<endl;

        }

        test--;
    }
	return 0;
}
