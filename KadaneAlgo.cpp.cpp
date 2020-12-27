#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int max=a[0],m=0;
    for(int i=0;i<n;i++)
    {
        m+=a[i];
        if(max<m)
        {
            max=m;
        }
        if(m<0)
        {
            m=0;
        }
        
    }
    cout<<max;
    return 0;
}