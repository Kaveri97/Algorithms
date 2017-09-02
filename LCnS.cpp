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
  	long int a[n];
  	for(j=0;j<n;j++){
  		cin>>a[j];
  	}
  	long long int ps[n], ss[n],ms[n];
  	ps[0] = a[0];
  	for( j=1;j<n;j++){
  		ps[j] = ps[j-1] + a[j];
  	}
  	ss[0] = ps[n-1];
  	ms[0] = ps[0] + ss[0];
  	for( j=1;j<n;j++){
  		ss[j] = ss[j-1] - a[j-1];
  		ms[j] = ps[j] + ss[j];
  		//cout<<ps[j]<<" "<<ss[j]<<"\n";
  	}
  	long long int min = a[0];
  	for (j = 0; j < n; j++)
    {
      if (a[j] < min)
        {
          min = a[j];
        }
    }
  	for( j=0;j<n;j++){
  		if(min==a[j])
  			break;
  	}
  	cout<<j+1<<endl;
  }
}
