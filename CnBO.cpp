    #include<bits/stdc++.h>
     
    using namespace std;
     
    int main(){
        int t;
        cin>>t;
        while(t--){
            int n;
            cin>>n;
            int a[n];
            int min=INT_MAX;
            int temp;
            temp=0;
            for(int i=0;i<n;i++)cin>>a[i];
            temp=a[0];
            for(int i=1;i<n;i++){
            	temp=temp|a[i];
            }    
            
            cout<<temp<<"\n";
        }
        return 0;
    } 
