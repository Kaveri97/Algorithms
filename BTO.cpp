#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int xt,yt;
    cin>>xt>>yt;
    long int n;
    cin>>n;
    long long int xf=0,yf=0;
    long long int xd,yd;
    for (int i = 0; i < n; ++i)
    {
    	cin>>xd>>yd;
    	xf += xd;
    	yf += yd;
    }
    cout<<(xt-xf)<<" "<<(yt-yf);
    return 0;
}