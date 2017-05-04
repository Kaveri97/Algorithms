#include<bits/stdc++.h>
using namespace std;

int main()
{
int t;
cin>>t;
	while(t--){
		string s;
		cin>>s;
		int a[26]={0},b[26]={0},l;
		l=s.length();
		for(int i=0;i<(l/2);i++)
			a[s[i]-'a']++;
		for(int i=l-1;i>=(l/2);i--){
			if(l%2 && (i==(l/2))) continue;
			b[s[i]-'a']++;
		}
		int f=0;
		for(int i=0;i<26;i++){
			if(a[i]!=b[i])
		{
			f=1;break;
		}
		}
		if(f)
			cout<<"NO"<<endl;
		else
			cout<<"YES"<<endl;
	}
	return 0;
}
