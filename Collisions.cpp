#include<iostream>
using namespace std;
 
int main() {
	int t,n,m;
	cin>>t;
	while(t--)
	{
	    cin>>n>>m;
	    int c=0;
	    string a[20];
	    for(int i=0;i<n;i++)
	    {
	            cin>>a[i];
	        
	    }
	    for(int i=0;i<n;i++)
	    {
	        for(int j=i+1;j<n;j++)
	        {
	            for(int k=0;k<m;k++)
	            {
	                if(a[i][k]=='1' && a[j][k]=='1')
	                {
	                    c++;
	                }
	            }
	        }
	    }
	    cout<<c<<"\n";
	}
	return 0;
}