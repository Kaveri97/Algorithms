#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    for (int i = 0; i < t; ++i)
    {
    	float p,q;
    	cin>>q>>p;
    	if(q>1000){
    		p = p-(p*0.1);
    	}
    	cout<<fixed<<setprecision(6)<<q*p<<endl;
    }
    return 0;
}