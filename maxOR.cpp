#include <bits/stdc++.h>
using namespace std;

int main(){
	long int t;
	cin>>t;

	for (int i = 0; i < t; ++i)
	{
		long long int n;
		cin>>n;
		long long int a[n];
		for (int j = 0; j < n; ++j)
		{
			cin>>a[j];
		}
		long long int c=0;
		for (int j = 0; j < n-1; ++j)
		{
			for (int k = j+1; k < n; ++k)
		{
			if((a[j]|a[k])<=max(a[j],a[k])){
				c++;
			}
		}
		}
		cout<<c<<endl;
	}
}
