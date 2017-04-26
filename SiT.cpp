#include<bits/stdc++.h>
using namespace std;
int main() {
	long long int  n,p=0;
	cin>>n;
	for (int i = 0; i < n; ++i)
	{
		long long int l;
		cin>>l;
		long long int en[l][l];
		for (int j = 0; j < l; ++j)
		{
			for (int k = 0; k < j+1; ++k)
			{
				
				cin>>en[j][k];
			}
		}
		for (int j = 0; j < l-1; ++j)
		{
			for (int k = 0; k < l-1-j; ++k)
			{
				
				en[l-2-j][k]+=max(en[l-1-j][k],en[l-1-j][k+1]);
			}
		}
		
		cout<<en[0][0]<<endl;
	}
}