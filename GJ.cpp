#include <iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,a,b;
		cin>>n;
		for(int i=0;i<n;i++)
			cin>>a>>b;
		int ans=0;
		for(int i=1;i<=n;i++)
			ans=ans^i;
		cout<<ans<<endl;
	}
	return 0;
}