#include<bits/stdc++.h>
using namespace std;
int main() {
	long long int s,n,m;
	cin>>s>>n>>m;
	long long int k[n], u[m];
	for (int i = 0; i < n; ++i)
	{
		cin>>k[i];
	}
	for (int i = 0; i < m; ++i)
	{
		cin>>u[i];
	}
	sort(k,k+n);
	sort(u,u+m);
	long long int c1=-1;
	for(int i = n-1, j = 0; i >=0; i--){
            for(; j < m; j++){
                if(k[i]+u[j] > s)
                 break; 
                if(k[i]+u[j] > c1)
                    c1 = k[i]+u[j];
            }
        }
	
		cout<<c1<<endl;
}
