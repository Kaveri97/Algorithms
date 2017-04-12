#include<bits/stdc++.h>
using namespace std;
int main() {
	//The Lead Game
	int n,i=0,m=0,l=0,k,max=0;
	cin>>n;
	int count[n];
	int lead[n] ;
	while(n--){
		int a,b;
		cin>>a>>b;
		a=a+m;
		b=b+l;
		if(a>b)
		{
			lead[i]=a-b;
			count[i]=1;
		}
		else if(a<b)
		{
			lead[i]=b-a;
			count[i]=2;
		}
		 
		if(lead[i]>max)
		{
			max=lead[i];
			k=i;
		}
		m=a;
		l=b;
		i++;
	}
	 
	cout<<count[k]<<" "<<max;
	
	}