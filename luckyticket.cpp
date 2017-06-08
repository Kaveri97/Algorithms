#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    string s;
    cin>>s;
    int sum1 = 0, sum2 = 0,flag=0;
    for (int i = 0; i < n/2; ++i)
    {
    	if((s[i] == '4') || (s[i] == '7')){
    		sum1 += (int)s[i];
    	}else{
    		cout<<"NO"<<endl;
    		flag=1;
    		break;
    	}
    	if((s[n-i-1] == '4')||(s[n-i-1] == '7')){
    		sum2 += (int)s[n-1-i];
    	}else{
    		cout<<"NO"<<endl;
    		flag =1;
    		break;
    	}
    }
    if(flag==0){
	    if(sum1==sum2)
	    	cout<<"YES"<<endl;
	   	else
	   		cout<<"NO"<<endl;
	}
}