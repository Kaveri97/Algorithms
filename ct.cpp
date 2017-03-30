#include<bits/stdc++.h>
using namespace std;
 
int main(){

int t,i;
cin>>t;
for(i=0;i<t;i++){
	long long int a;
	cin>>a;
	long long int b = 2*a;
	long long int c = sqrt(b);
	while(c>0){
		if(c*(c+1)<=b){
			cout<<c<<"\n";
			break;
		}
		else
			c--;
	}
}
}