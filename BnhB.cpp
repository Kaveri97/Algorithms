#include <bits/stdc++.h>
using namespace std;

int main(){
	long int t;
	cin>>t;

	for (int i = 0; i < t; ++i)
	{
		long long int n,m,l;
		cin>>n>>m;
		long long int k = 2*m;
		l=1;
		while((l*(l+1)!=k) && (l*(l+1)<=k)){
			l++;
		}
		if(l>n)
			cout<<-1<<endl;
		else
			cout<<l<<endl;
	}
}