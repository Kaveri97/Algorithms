#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,i;
	while(cin>>n){
		int a[n+1];
		if(n!=0){
			for ( i = 1; i <= n; ++i)
			{
				cin>>a[i];
			}
			for ( i = 1; i <= n; ++i)
			{
				if(a[a[i]]!=i)
					break;
			}
			if(i==n+1)
				cout<<"ambiguous"<<endl;
			else
				cout<<"not ambiguous"<<endl;
		}
		else
			return 0;
	}
}










