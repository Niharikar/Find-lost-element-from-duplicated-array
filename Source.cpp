#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int fun(int a,int b,int n)
{
  if(a[0]!=b[0])
    return a[0];
  if(n==1)
    return a[0];
    
  int l = 0;
  int h = n-1;
  
  while(l<h)
  {
      int mid = (l+h)/2;
      if(a[mid] == b[mid])
      {
        l = mid;
      }

      else
      {
        h = mid;
      }

      if(l == h-1)
        return a[h];
  
}

int main()
{
  int a = {1,4,5,7,9};
  int b = {1,4,7,9};
  int na = sizeof(a)/sizeof(a[0]);
  int nb = sizeof(b)/sizeof(b[0]);
  if(na > nb)
  {
      cout << fun(a,b,na);   
  }  
  else
  {
    cout << fun(b,a,nb);
  }
}
