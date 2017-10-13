    #include <iostream>
    using namespace std;
     
    int main() {
    	
    	long long t,n,k,i;
    	cin>>t;
    	while(t--){
    		cin>>n>>k;
    		int c=0,d=0,a[1000];
    		for (i=0;i<n;i++){
    			cin>>a[i];
    			if (a[i]%2==0)
    			c++;
    			else
    			d++;
    		}
    		if (c<k || d==0 && k==0)
    		cout<<"NO";
    		else
    		cout<<"YES";
    		cout<<endl;
    	}
    	return 0;
    } 