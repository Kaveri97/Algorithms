#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,j;
	cin>>t;
	int n= t;
	cin.ignore(256, '\n');
	for (int i = 0; i < n; ++i)
	{	
		string s,s1 = " ";
		getline(cin, s);
		int sp=0;
		for ( j = 0; j < s.length(); ++j)
		{
			if(s[j]==' '){
				sp++;
			}
		}
		//cout<<sp;
		if(sp==0){
			s1 = toupper(s[0]);
			int j=1;
			while(s[j]){
				s1 += tolower(s[j]);
    			j++;
			}
		}else if(sp==1){
			s1 = toupper(s[0]);
			s1 += ". ";
			for(j = 0; j < s.length(); ++j){
				if(s[j]==' '){
				j++;
				break;
			}
			}
			s1 += toupper(s[j]);
			j++;
			while(s[j]){
				s1 += tolower(s[j]);
    			j++;
			}
		}else{
			s1 = toupper(s[0]);
			s1 += ". ";
			for( j = 0; j < s.length(); ++j){
				if(s[j]==' '){
				j++;
				break;
			}
			}
			s1 += toupper(s[j]);
			s1 += ". ";
			for(; j < s.length(); ++j){
				if(s[j]==' '){
				j++;
				break;
			}
			}
			s1 += toupper(s[j]);
			j++;
			while(s[j]){
				s1 += tolower(s[j]);
    			j++;
			}
		}
		
		cout<<s1<<endl;
	}
}