#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
    	string str;
    	cin>>str;
    	int l = str.length();
    	int s=0,m=0;
    	for(int j=0; j<l;j++){
    		if(str[j]=='s')
    			s++;
    		else
    			m++;
    	}
    	if(l==1){
    		if((str[1]=='m' && str[0]=='s') || (str[0]=='m' && str[1]=='s')){
    			s--;
    		}
    	}
    	else{
    		if(str[0]=='m' && str[1]=='s'){
    			s--;
    			str[1] = 'e';
    		}
    	}

    	for(int j=1; j<l-1;j++){
    		if(str[j]=='m'){
    			if(str[j-1]=='s' || str[j+1]=='s'){
    				if(str[j-1]=='s'){
    					s--;
    					str[j-1] = 'e';
    				}else{
    					s--;
    					str[j+1] = 'e';
    				}
    			}
    		}
    		//cout<<str<<s<<m<<endl;
    	}
    	if(str[l-1]=='m' && str[l-2]=='s')
    		s--;
    	if(s>m)
    		cout<<"snakes"<<endl;
    	else if(m>s)
    		cout<<"mongooses"<<endl;
    	else
    		cout<<"tie"<<endl;

    }
}