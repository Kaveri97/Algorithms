#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    for (int i = 0; i < t; ++i)
    {	
        long long int n,k;
        cin>>n>>k;
        long long int c=0;
        while(k>=2){
            if(n%k>c){
               c = n%k;
            }
        k--;
        }
        cout<<c<<endl;
    }
}