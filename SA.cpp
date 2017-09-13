#include <bits/stdc++.h>
using namespace std;
 
int main() {
	
	string s;
	cin>>s;
	int a[26]={0};
	for(int i=0;s[i]!='\0';i++){
	    a[s[i]-'a']++;
	}
	int n;
	cin>>n;
	while(n--){
	    string t;
	    cin>>t;
	    int j;
	    for(j=0;t[j]!='\0';j++){
	        if(!a[t[j]-'a']){
	            break;
	        }
	    }
	    if(j==t.size()) cout<<"Yes"<<endl;
	    else cout<<"No"<<endl;
	}
 
	
	return 0;
}