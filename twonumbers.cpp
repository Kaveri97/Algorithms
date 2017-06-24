#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    for (int i = 0; i < t; ++i)
    {	long long int a,b,n;
    	cin>>a>>b>>n;
    	for (int j = 0; j < n; ++j)
    	{
    		if(j%2==0){
    			a *= 2;
    		}else{
    			b *= 2;
    		}
    	}
    	if(a>b)
    		cout<<a/b<<endl;
    	else
    		cout<<b/a<<endl;
    }
    return 0;
}