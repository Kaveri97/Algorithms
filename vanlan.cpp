#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int n;
    float l;
    cin>>n>>l;
    float a[n];
    for (int i = 0; i < n; ++i)
    {
    	cin>>a[i];
    }
    float b[n+1];
    sort(a,a+n);
    b[0] = a[0];
    b[n] = l - a[n-1];
    for (int i = 0; i < n-1; ++i)
    {
    	b[i+1] = (a[i+1]-a[i])/2.0;
    }
    sort(b,b+(n+1));
    cout<<b[n]<<endl;
}