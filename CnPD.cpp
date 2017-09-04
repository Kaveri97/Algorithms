#include <iostream>
#include<cmath>
using namespace std;
 
int main()
{
  int t,j;
  cin>>t;
  for(int i=0;i<t;i++)
  {
  	string s;
  	cin>>s;
  	int a[10],b[10];
  	for(j=0;j<10;j++)
  		a[j]=0;
  	for(j=0;j<s.length();j++){
  		a[s[j]-'0']++;
  	}
  	for(j=0;j<26;j++){
  		int flag=0;
  		int m = (int)'A' + j;
  		for( int q=0;q<10;q++)
  			b[q]=a[q];
  		int k = m;
  		while(m>0){
  			int l = m%10;
  			if(!b[l]){
  				flag = 1;
  				break;
  			}else{
  				b[l]--;
  			}
  			m = m/10;
  		}
  		if(!flag)
  			cout<<(char)k;
  	}
  	cout<<endl;
  }
}