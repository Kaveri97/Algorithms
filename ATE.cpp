#include <bits/stdc++.h>
using namespace std;

int main(){
	long int t;
	cin>>t;

	for (int i = 0; i < t; ++i)
	{
		string s;
		int flag;
		cin>>s;
		long long int c = 0, n = s.length(),k,j,l;
		for (j=0;j<n;j++)
		{
			flag = 0;
			l = j+1;
			for(k=j+1; k<n;k++){
				if(s[j]==s[k]){
					l=k;
					flag = 1;
				}
			}
			if(!flag && l!=n){
				c += (int)s[l]- (int)s[j];
			}
			j = l-1;
		}
		cout<<c<<endl;
	}
	return 0;
}