#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        long long S[n],R[n],count=0;
        S[0]=0;
        for(int i=1;i<=n;++i)
            cin>>S[i];
        for(int i=1;i<=n;++i){
            cin>>R[i];
            if(R[i]<=S[i]-S[i-1]){
                ++count;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}