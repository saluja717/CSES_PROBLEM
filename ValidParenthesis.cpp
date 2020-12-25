#include<bits/stdc++.h>
using namespace std;
bool check(string s)
{
    stack<char>s1;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='(' || s[i]=='{' || s[i]=='[')
        {
            s1.push(s[i]);
        }
        else
        {
            if(s1.empty())
            {
                return false;
            }   
            else if(s1.top()==s[i]-1 || s1.top()==s[i]-2)
            {         
            s1.pop();
            }
            else
            {
                return false;
            }
        }
    }
    if(s1.empty())
    {
        return true;
    }
    return false;
}
int main()
{
    string s;
    cin>>s;
    if(check(s))
    {
        cout<<"Balanced";
    }
    else
    {
        cout<<"UnBalanced";
    }
    return 0;
}
