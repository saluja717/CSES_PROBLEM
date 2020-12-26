#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cout<<"Enter the range from 2 to";
    cin>>a;
    bool check[a];
    memset(check,true,sizeof(check));
    for(int i=2;i*i<=a;i++)
    {
        if(check[i]==true)
        {
            for(int k=i*i;k<=a;k+=i)
            {
                check[k]=false;
            }
        }
    }
    cout<<"Prime No. are:"<<endl;
    for(int i=2;i<a;i++)
    {
        if(check[i]==true)
        {
            cout<<i<<" ";
        }
    }
  return 0;        
}