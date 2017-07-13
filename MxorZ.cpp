#include <bits/stdc++.h>
using namespace std;
   
int main() {
    int t, c, n;
    cin>>t;
    while(t--){
        cin>>n;
        int a[n];
        for(int i = 0; i<n; i++)
            cin>>a[i];
        c = 0;
        for(int i = 0; i<n; i++)
            if(a[i]==1)
                c++;
        if(c%2==1)
          cout<<c<<endl;
        else
          cout<<(n-c)<<endl;
    }
    return 0;
}
