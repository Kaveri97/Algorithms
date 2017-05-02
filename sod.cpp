#include<math.h>
#include<iostream>
using namespace std;
     
int main() {
	long int t,n;
	cin>>t;
	for (int i = 0; i < t; ++i)
	{
		cin>>n;
		long int m = n;
		long int sum = 0,r;
		while(m>0){
			r = m%10;
			sum += r;
			m /= 10;
		}
		cout<<sum<<endl;
	}
}