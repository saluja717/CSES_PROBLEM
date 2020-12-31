//JUMP SEARCH
#include<bits/stdc++.h>
using namespace std;
int jump(int a[],int n,int x)
{
   int i=0,j,c,k;
   c=sqrt(n);
   j=c;
   while(a[min(j,n)-1]<x)
   {
       i=j;
       j+=c;
       if(i>=n)
       {
           return -1;
       }
   }
  
   for(k=i;k<min(j,n);k++)
   {
       if(a[k]==x)
       {
           return k;
       }
   }
   return 0;
}
int main()
{
    int n;
   // cout<<"Enter the No.of element";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    int search;
    //cout<<"SEARCHING ELEMENT";
    cin>>search;
  int res=jump(a,n,search);
  res?cout<<"Element found at index "<<res:cout<<"Element not found";
  return 0;
}
