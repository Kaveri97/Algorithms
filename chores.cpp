#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int n,k,x;
	cin>>n>>k>>x;
	int a[n];
	long sum = 0;
	for(int i=0;i<n;i++){
		cin>>a[i];
		if(i<(n-k))
			sum+=a[i];
	}
	sum += (k*x);
	cout<<sum<<endl;
}