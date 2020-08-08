#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
  int N,K;
  cin >> N >> K;
  long long int a[N];
  for(int i3=0;i3<N;i3++)
  {
    cin >> a[i3];
  }
  int answer = 0;
  for(int i1=0;i1<N;i1++)
  {
    int flag = 0;
    for(int i2=0;i2<N;i2++)
    {
      if(i2==i1)
        continue;
      else
        if(a[i1]<=(a[i2]+K)&&a[i1]>=(a[i2]-K))
        {
          flag = 1;
        }
    }
    if(flag==1)
    {
      answer++;
    }
  }
  cout << answer ;
  return 0;
}
