#include <bits/stdc++.h>
using namespace std;
 
int main() {
 int t,i;
	cin>>t;
	for(i=0;i<t;i++){
	    int n,j,k,count=0;
	    cin>>n;
	    int a[n];
	    for(j=0;j<n;j++)
	    cin>>a[j];
	    for(j=1;j<=n;j++){
		    for(k=0;k<n;k++){
			     if(j==a[k]){
			     count++;
			     break;
			     }
		    }
	    }
	    if(count!=n)
	    cout<<"no"<<endl;
	    else{
	    count=0;
	    for(j=1;j<=n;j++)
	         if(j==a[j-1])
	        	count++;
	    if(count==n)
	    cout<<"no"<<endl;
	    else 
	    cout<<"yes"<<endl;
	    }	    
	}
	return 0;
}
 