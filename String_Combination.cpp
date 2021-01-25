#include<bits/stdc++.h>
using namespace std;
// int main()
// {
//     string s,a;
//     cin>>s>>a;
//     int c=0,b=0;
//     int j=0,l=0;
//     for(int i=0;i<s.length();i++)
//     {
//         c=0,l=0;
//         for(j=0;j<a.length();j++)
//         {
//             if(a[j]==s[i+j])
//             {
//                 c++;
//                 continue;
//             }
//             else
//             {
//                 break;
//             }
//         }
//         if(c==a.length())
//           b++;
//     }
//     cout<<b;
//     return 0;
// }

void compute_table(int table[],string a,int l)
{
    int len=0,i=1;
    table[0]=0;
    while(i<l)
    {
       if(a[i]==a[len])
       {
           table[i]=len+1;
           i++,len++;
       }
       else
       {
           if(len!=0)
           {
                len=table[len-1];
           }
           else
           {
               table[i]=0;
               i++;
           }
       }
    }
}

void solve(string a,string b)
{

    int l1=a.length();
    int l2=b.length();
    if(l1==1 && l2==1)
    {
        if(a[0]==b[0])
        {
            cout<<"1";
        }
        else
        {
            cout<<"0";
        }
        exit(0);
    }
    int table[l2];
    compute_table(table,b,l2);
    int i=0,j=0,c=1;
    while((l1)>i)
    {
         if(j==l2)
        {
            c++;
            j=table[j-1];
        }

        if(a[i]==b[j])
        {
           i++;
           j++;
        }
        else
        {
             if(j!=0)
             {
                 j=table[j-1];
             }
             else
             {
                 i++;
             }
        }
       
    }
    cout<<c;
}
int main()
{
    string s,a;
    cin>>s>>a;
    solve(s,a);
    return 0;
}