#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
	    int n;
	    cin>>n;
        int arr[n];
        for(int j=0;j<n;j++){
            cin>>arr[j];
        }
        int tmp[7]={0},flag=0;
        for(int j=0;j<=(n/2);j++){
            if((arr[j]!=arr[n-j-1])|| (arr[j]>=8)){
                flag=1;
            }
			//if((n%2)==1){
			// if(arr[n/2]>=8){
			//	flag=1;
    		//	}
			//}
            tmp[arr[j]-1]++;
            //cout<<tmp[arr[j]-1];
            if(flag)
                break;
        }
        sort(tmp,tmp+7);
        if(tmp[0]==0){
            flag=1;
        }
		if(flag==1){
			cout<<"no"<<endl;
		}
        else{
            cout<<"yes"<<endl;
        }
	}
	return 0;
}
