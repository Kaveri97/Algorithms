#include <bits/stdc++.h>
using namespace std;
     
    int main()
    {
        string a,b,G,S;
        int t;
        cin>>t;
        while(t--)
        {
            cin>>a>>b;
            int c=0;
            if(a.size()>b.size())
            {
                G=a;
                S=b;
            }
            else
            {
                G=b;
                S=a;
            }
            for(int i=0;i<G.size();i++)
            {
                if(G[i]==S[c])
                {
                c++;
                }
            }
            if(c==S.size())
            {
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
        return 0;
    }
