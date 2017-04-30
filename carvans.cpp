    #include <iostream>
    using namespace std;
     
     
    int main(){
    long long int t,n,a,p,c=1;
    cin>>t;
    while(t--){
    cin>>n;
    long long int arr[n];
    for (int i = 0; i < n; ++i){
    cin>>arr[i];
    }
    for (int i = 1; i < n; ++i){
    if(arr[i] < arr[i-1]){
    c++;
    }
    else{
    arr[i] = arr[i-1];
    }
    }
    cout<<c<<endl;
    c = 1;
    }
    return 0;
    }
