#include <bits/stdc++.h>
using namespace std;
int gcd(int a,int b)
{
	if(a==0)
	return b;
	gcd(b%a,a);
}
 
int main() {
	int t,n;
	cin>>t;
	while(t--)
	{	long long int m,k,ans;
		cin>>n;
		long long int a[n];
		for (int i = 0; i < n; ++i)
		{
			cin>>a[i];
		}
		ans = 1e20;
		for (int i = 0; i < n; ++i)
		{	
			for (int j = i+1; j < n; ++j)
			{
				k = a[i]*a[j]/gcd(a[i],a[j]);
				if(k<ans)
					ans = k;
			}
		}
		cout<<ans<<endl;
	}
}