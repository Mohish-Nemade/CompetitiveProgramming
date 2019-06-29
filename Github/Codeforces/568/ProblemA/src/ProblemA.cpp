#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);



/*
 * Complete the 'smallestString' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts LONG_INTEGER weight as parameter.
 */

string smallestString(long weight)
{
    long long int arr[26]={0};
    char arrc[26];
    for(int i=0;i<26;i++)
    {
        arrc[i]='A'+i;
        //cout<<arrc[i];
    }
    string s="";
    arr[0]=1;
    long long int max=0;
    for(int i=1;i<26;i++)
    {
        arr[i]=(i+1)*arr[i-1]+arr[i-1];
        if(arr[max]<=weight)
            max=i;
        cout<<arr[i]<<endl;
    }
    cout<<arr[25]<<endl;
     long long int w=0;
        int i = max;
        while(weight > 0)
        {
            while(weight >= arr[i])
            {
               // w=w/arr[i];

                if(weight!=0)
                {
                    weight=weight-arr[i];
                    s=s+arrc[i];

                }
            }
            i--;

        }
string s1="";
     for(int i=s.length()-1;i>=0;i--)
     {
         s1=s1+s[i];
     }


return s1;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string weight_temp;
    getline(cin, weight_temp);

    long weight = stol(ltrim(rtrim(weight_temp)));

    string result = smallestString(weight);

    fout << result << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
