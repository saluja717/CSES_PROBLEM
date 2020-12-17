#include <bits/stdc++.h>
using namespace std;
#define  u unsigned 
void make_prime(vector<int> &v,int a,int b)
{
  for(int i=a;i<=b;i++)
    {
       bool f=true;
       for(int j=2;j<=sqrt(i);j++)
       {
         if(i%j==0)
         {
           f=false;
           break;
         }
       }
       if(f)
       {
         v.push_back(i);
       }
    }
    for(int i=0;i<v.size();i++)
    {
      cout<<v[i]<<" ";
    }
    cout<<endl;
}
void join(set<int>&s,vector<int>&v)
{
  for(int i=0;i<v.size();i++)
    {
         for(int j=0;j<v.size();j++)
         {
           if(i!=j)
           {
             if(v[j]<10)
             {
               int k = v[i]*10+v[j];
               s.insert(k);
             }
             else if(v[j]>10)
            {
              int k = v[i]*100+v[j];
               s.insert(k);
            }
         }
        }
    }
   
    cout<<endl;
}
void answer(set<int>&s,vector<int>&ans)
{
    for(auto i : s)
    {
      bool g=true;
      for(int j=2;j<=sqrt(i);j++)
      {
        if(i%j==0)
        {
          g=false;
          break;
        }
      }
      if(g)
      {
        ans.push_back(i);
      }
    }
    for(auto i: ans)
    {
      cout<<i<<" ";
    }
    cout<<endl;
}
long long int fibo(long long int n, long long int min,long long int max)
{
   u long long int c=0,i;
   cout<<endl;
for(i=3;i<=n;i++)
{    c= max+min;
      min=max;
      max=c;
      cout<<c<<" ";
}

return c;
}
int main()
{
    int a,b;
    cin>>a>>b;
    vector<int>v;
    make_prime(v,a,b);
    set<int> s;
    join(s,v);
    vector<int>ans;
    answer(s,ans);
    long long int min = ans[0];
    long long int max = ans[ans.size()-1];
    cout<<min<<" "<<max<<endl;
    long long int c=0;
    c=fibo(ans.size(),min,max);
    cout<<endl;
    cout<<c;
    
    return 0;
}