#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin>>t;  
    for (int j = 0; j < t; ++j)
    {
    string s;
    cin>>s;
    int bal=0,mabal=0;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='(')
            bal+=1;
        else
            bal-=1;
        mabal=max(bal,mabal);
    }
    int temp=mabal;
    string ans="";
    for(int i=0;i<temp;i++)
    {
        ans+='(';
    }
    for(int i=0;i<temp;i++)
    {
        ans+=')';
    }
    cout<<ans<<"\n";
    }
}