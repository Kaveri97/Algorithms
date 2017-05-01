    #include <bits/stdc++.h>
    using namespace std;
    int main() {
    int t,s;
    cin>>t;
    int a[t];
    s=t;
    while(s--){
    cin>>a[s];
    }
    sort(a,a+t);
    while(++s<t){
    cout<<a[s]<<endl;
    }
    return 0;
    } 
