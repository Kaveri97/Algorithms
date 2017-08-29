#include <bits/stdc++.h>
using namespace std;
 
int main(){
 
int n[26];
long int sum;
string s;
int t;
cin>>t;
for(int i=0;i<t;i++){
	int a[26];
	sum = 0;
	for(int j=0;j<26;j++){
		cin>>n[j];
		a[j]=0;
	}
	cin>>s;
	for(int j=0;j<s.length();j++){
		a[(s[j]-'a')] = 1;
	}
	for(int j=0;j<26;j++){
		if(a[j]==0){
			sum+=n[j];
		}	
	}
	cout<<sum<<endl;
}
}
