#include <iostream>
#include<cmath>
using namespace std;
 
int main()
{
  int t,j;
  cin>>t;
  for(int i=0;i<t;i++)
  {
  	long int n;
  	cin>>n;
  	int flag = 0;
  	if(n%2!=0)
  		flag = 1;
  	if(!flag){
  		for(j=2; j<=n; j+=2){
  			cout<<j<<" "<<j-1<<" ";
  		}
  	}else{
  		for(j=2; j<n-1; j+=2){
  			cout<<j<<" "<<j-1<<" ";
  		}
  		cout<<j<<" "<<n<<" "<<j-1;
  	}
  	cout<<endl;
  }
}
