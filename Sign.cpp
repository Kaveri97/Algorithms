#include <bits/stdc++.h>
using namespace std;

int main(){
	long int t;
	cin>>t;
	for (int i = 0; i < t; ++i)
	{
		string s,s1;
		cin>>s;
		long long int l = s.length();
		long long int n=0,m=0,a=0,b=0;
		for (int j = 0; j < l; ++j)
		{
			if(s[j]=='<')
			{
				n++;
				m=0;
				a=max(n,a);
			}
			else if(s[j]=='>')
			{
				m++;
				n=0;
				b=max(m,b);
			}
		}
		
		cout<<max(a,b)+1<<endl;
	}
	return 0;
}