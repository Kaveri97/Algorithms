#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	for (int i = 0; i < t; ++i)
	{
		int n,sq=0;
		cin>>n;
		while(n>2){
			sq += (n-2)/2;
			n = n-2;
		}
		cout<<sq<<endl;
	}
	return 0;
}