#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    for (int i = 0; i < t; ++i)
    {
    		int n,k;
			cin>>n>>k;
			int a[n];
			float sum=0,temp=0;
			for(int i=0;i<n;i++)
			{
				cin>>a[i];
			}
			sort(a,a+n);
			for(int i=k;i<n-k;i++)
			{
				sum=sum+a[i];
			}
			sum=(sum/(n-(2*k)));
			std::cout<<std::setprecision(6)<<std::fixed<<sum<<endl;
			
	}
} 