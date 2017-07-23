#include <bits/stdc++.h>
using namespace std;

int main(){
	long int t;
	cin>>t;
	for (int i = 0; i < t; ++i)
	{
		int n;
		cin>>n;
		if(((n%8)!=7) && ((n%8)!=0)){
			if((n%8)<4)
				cout<<n+3;
			else
				cout<<n-3;
			if((n%8)==1 || (n%8)==4)
				cout<<"LB"<<endl;
			if((n%8)==3 || (n%8)==6)
				cout<<"UB"<<endl;
			if((n%8)==2 || (n%8)==5)
				cout<<"MB"<<endl;
		}else{
			if((n%8)==7)
				cout<<n+1<<"SU"<<endl;
			else
				cout<<n-1<<"SL"<<endl;
		}
	}
	return 0;
}
