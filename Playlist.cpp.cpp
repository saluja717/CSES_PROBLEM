#include <bits/stdc++.h>
using namespace std;
#define l long long int
#define f for(int i=0;i<n;i++)
#define m map<int,int>
#define o cout<<
#define in cin>>
int main() {
      
     l n;
     in n;
     l a[n];
     f{ in a[i];}
     m p;
     l ans=0,j=0;
     f{
         while(j<n && p[a[j]]<1)
         {
             p[a[j]]++;
             j++;
         }
         ans=max(j-i,ans);
         p[a[i]]--;
      }
      cout<<ans;
     return 0;
}
