#include <iostream>
#include<string.h>
#include<algorithm>
#include<string>
using namespace std;
void swapy(char *ch1,char *ch2)
{
    char ch=*ch1;
    *ch1=*ch2;
    *ch2=ch;
}

void permutations(char *ch,int l,int r)
{
    if(l==r)
    {
        cout<<ch<<" ";

    }

    else
    {
        for(int i=l;i<=r;i++)
        {
            swapy(ch+i,ch+l);
            sort(ch+l+1,ch+r+1);
            permutations(ch,l+1,r);
             sort(ch+l+1,ch+r+1);
            swapy(ch+i,ch+l);
        }
    }
}

int main() {
	//code
	int tc;
	cin>>tc;
	while(tc--)
	{
	    char ch[5];
	    cin>>ch;
	    int len=strlen(ch)-1;
	    sort(ch,ch+len+1);
	    permutations(ch,0,len);


	    cout<<endl;
	}
	return 0;
}
