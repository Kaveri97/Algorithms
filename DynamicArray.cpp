#include<bits/stdc++.h>
using namespace std;
int main() {
	long long int n,q;
	cin>>n>>q;
	long long int lastAns = 0,j,k=0;
	vector <long long int> seq[n+1];
	for (long long int i = 0; i < q; ++i)
	{
		long long int s,x,y;
		cin>>s>>x>>y;
		if(s==1){
			j = (x^lastAns)%n;
			seq[j].push_back(y);
		}
		else{
			j = (x^lastAns)%n;
			lastAns = seq[j][y%seq[j].size()];
			cout<<lastAns<<endl;
		}
	}
	return 0;
}