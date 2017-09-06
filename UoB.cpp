#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int q;
    cin>>q;
    for(int i=0; i<q;i++){
        long int n;
        cin>>n;
        int flag=0,flag1=0;
        long long int a[n], b[n];
        for(int j=0; j<n; j++){
            cin>>a[j];
            b[j] = a[j];
        }
        sort(b,b+n);
        if(b[0]<1 || b[n-1]>n)
            flag=1;
        for(int j=0;j<n-1;j++){
            if(b[j]==b[j+1]){
                flag=1;
                break;
            }
        }
        for(int j=0;j<n-1;j++){
            if(b[j]!=a[j])
                flag1=1;
        }
        if(flag==0 && flag1==1){
            cout<<"Beautiful"<<endl;
        }else{
            cout<<"Ugly"<<endl;
        }
    }
    return 0;
}

