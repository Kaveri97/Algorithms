#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    for (int i = 0; i < t; ++i)
    {	
    	long long int C,D,L;
    	cin>>C>>D>>L;
    	int flag =0;
    	long long int tot = (C+D)*4;
    	long long int tot1 = tot;
    	if(C>=(2*D)){
			C=C-(2*D);
			tot = (C+D)*4;
			}
			else
			{
			tot=D*4;
			}
    	if((L>=tot)&&(L<=tot1)&&(L%4==0)){
    		flag = 1;
    	}
    	if(flag)
    		cout<<"yes"<<endl;
    	else
    		cout<<"no"<<endl;
    }
}
