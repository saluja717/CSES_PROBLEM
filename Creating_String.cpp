#include <bits/stdc++.h>
using namespace std;
#define  l long long 
int main() {
    int n=0;
    string s;
   vector<string>s1;
    cin>>s;
    sort(s.begin(),s.end());
   do{
       s1.push_back(s);
   }while(next_permutation(s.begin(),s.end()));
   
  cout<<s1.size()<<endl;
  for(auto i:s1)
  {
      cout<<i<<endl;
  }
	return 0;
}
