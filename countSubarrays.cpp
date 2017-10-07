    #include <iostream>
    using namespace std;
     
    int main() {
    	int t;
    	cin>>t;
    	while(t--)
    	{
    	unsigned long long n,i,c=1,s=1;
    	cin>>n;
        int  a[n];
    	for(i=0;i<n;i++)
    	cin>>a[i];
    	for(i=1;i<n;i++)
    	{
    		if(a[i]<a[i-1])
    		c=1;
    		else
    		c++;
    		s+=c;
    	}
    	cout<<s<<endl;
    	}
    	return 0;
    } 