#include<iostream>
#include<cmath>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int b,l;
		cin>>b>>l;
		double min = sqrt(abs(pow(b,2) - pow(l,2)));
		double max = sqrt(pow(b,2)+pow(l,2));
		cout<<min<<" "<<max<<endl;
	}
	return 0;
}