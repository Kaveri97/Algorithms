#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    for (int i = 0; i < t; i++)
    {	
    	int n;
    	cin>>n;
    	int a[n];
    	for(int j=0;j<n;j++){
    		cin>>a[j];
    	}
    	if(n%2==0){
    		cout<<"no"<<endl;
       	}else{
       		int flag =1;
       		if((a[0]==a[n-1])&&(a[0]==1)){
	       		for (int j = 1; j < n/2; ++j)
	       		{
	       			if((a[j]!=(a[j-1]+1))||(a[j]!=a[n-j-1])){
	       				flag = 0 ;
	       				break;
	       			}
	       		}
	       		if(flag==0)
	       			cout<<"no"<<endl;
	       		else
	       			cout<<"yes"<<endl;
       		}
       		else
       			cout<<"no"<<endl;
       	}
       }
   }
