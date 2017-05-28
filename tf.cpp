#include<bits/stdc++.h>
using namespace std;
//Team Formation For Snackdown
int main(){
	int t;
	cin>>t;
	for (int i = 0; i < t; ++i)
	{
		int n,m;
		cin>>n>>m;
		int a[m][2];
		for (int j = 0; j < m; ++j)
		{
			cin>>a[j][0]>>a[j][1];
		}
		if((n-(2*m))%2==0)
			cout<<"yes"<<endl;
		else
			cout<<"no"<<endl;
	}
	return 0;
}