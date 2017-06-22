#include "bits/stdc++.h"
using namespace std;
 
int main()
{
	int t; 
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int u=0;
		int d=0;
		int i=0;
		while(i<s.size()){
			if(s[i]=='U') 
				u++;
			else
			    d++;
			int j=i+1;
			while(j<s.size() && s[j]==s[i]) 
				j++;
			i=j;
		}
		cout<<min(u,d)<<endl;
	}
} 