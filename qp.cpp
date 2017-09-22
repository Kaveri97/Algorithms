#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	cin>>s;
	long long int i = s.length()-1;
	while(s[i]=='0'){
		i--;
	}
	long long int j = 0;
	int flag =0;
	for(;j<=i/2;j++){
		if(s[j]!=s[i-j]){
			flag=1;
			//cout<<s[j]<<s[i-j]<<" "<<i<<j;
			break;
		}
	}
	if(!flag)
		cout<<"YES";
	else
		cout<<"NO";
}