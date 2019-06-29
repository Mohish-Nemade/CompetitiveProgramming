//============================================================================
// Name        : LonelyInteger.cpp
// Author      : Mohish Nemade
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <math.h>
using namespace std;

/*
int fun(int arr[],int n)
{
	int res=0;
	for(int i=0;i<n;i++)
	{
		res=res^arr[i];
	}

	return res;
}
*/

int main() {
  int n;
  cin >> n;

  int arr[n] = {0};

  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  int count[8] = {0},res[8]={0};

  for (int i = 0; i < 8; i++) {
    for (int j = 0; j < n; j++) {
      if (arr[j] & (1 << i)) {
        count[i]++;
      }
    }
  }

  for(int k=0;k<8;k++)
  {
	  if(count[k]%2==0)
		  res[k]=0;
	  else
		  res[k]=1;
  }


  int ans = 0;
  for (int i = 0; i <8; i++) {
	  //  cout<<res[i]<<endl;

    ans = ans + res[i] * pow(2 , i);
  }

  cout << ans;
  return 0;
}
