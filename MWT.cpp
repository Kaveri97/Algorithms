#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    long long int n,c,p,q;
    cin>>n>>c;
    long long int a[c],b[c];
    for(int i=0;i<c;i++){
        cin>>a[i]>>b[i];
    }
    for (int i = 0; i < c; ++i)
    {
    	for (int j = 0; j < c-i-1; ++j)
    	{
    		if(b[j]<b[j+1]){
    			p=b[j];
    			b[j]=b[j+1];
    			b[j+1]=p;
    			q=a[j];
    			a[j]=a[j+1];
    			a[j+1]=q;
    		}
    	}
    }
    long long int w=n;
    long long int f=0;
    for (int i = 0; i < c; ++i)
    {
    	if(w<=0)
    		break;
    	if(w>=a[i]){
    		f += (a[i]*b[i]);
    		w -= a[i];
    	}
    	else{
    		f += (b[i]*w);
    		w = 0;
    	}
    }
    cout<<f<<endl;
    return 0;
}
