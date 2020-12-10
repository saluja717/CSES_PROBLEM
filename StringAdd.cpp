#include<bits/stdc++.h>
using namespace std;
string add(string s1,string s2)
{
    int l1=s1.length();
    int l2=s2.length();
    int i=0,j=0;
    int z,c,carry=0;
    reverse(s1.begin(),s1.end());
    reverse(s2.begin(),s2.end());
    string ans="";
    while(i<l1 && j<l2)
    {
         int x=s1[i]-'0';
         int y=s2[j]-'0';
         z=x+y+carry;
         c=z%10;
         carry/=10;
        ans.push_back(c+'0');
         i++;
         j++;
    }
    while(i<l1)
    {
        int x=s1[i]-'0';
        
         z=x+carry;
         c=z%10;
         carry/=10;
        ans.push_back(c+'0');
         i++;
         
    }
    while(j<l2)
    {
        
         int y=s2[j]-'0';
         z=y+carry;
         c=z%10;
         carry/=10;
        ans.push_back(c+'0');
         j++;
    }
    if(carry)
    {
        ans.push_back(carry+'0');
    }
    reverse(ans.begin(),ans.end());
    return ans;
}
int main()
{
    string s1,s2;
    cin>>s1>>s2;
    cout<<add(s1,s2);
    return 0;
}