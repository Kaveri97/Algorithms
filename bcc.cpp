#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    long int n;
    cin>>n;
    long long int a[n],c=0;
    long long int i,t=0;
    for (i=0;i<n;i++){
        cin>>a[i];
        if(t<=a[i]){
            t = a[i];
        }
    }
    for (i=0;i<n;i++){
        if(t==a[i]){
            c++;
        }
    }
    cout<<c<<endl;
    return 0;
}
