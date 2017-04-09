    #include<bits/stdc++.h>
    using namespace std;
    int main(){
    int T;
    cin>>T;
    for(int i=0;i<T;i++){
        long int n;
        cin>>n;
        long int count = 0;
        while(n>0){
            count += n/5;
            n /= 5;
        }
    cout<<count<<endl;
    }
}
     