#include <bits/stdc++.h>
using namespace std;
 
int main() {
 int t;
	cin>>t;
	for (int i = 0; i < t; ++i)
	{
		string s;
		cin>>s;
		long long int c=0,l = s.length();
		if(l>10){
			for (int j = 1; j < l-1 ; ++j)
			{
				c++;
			}
			cout<<s[0]<<c<<s[l-1]<<endl;
		}else{
			cout<<s<<endl;
		}
	}
	return 0;
}