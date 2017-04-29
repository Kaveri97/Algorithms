    #include<math.h>
    #include <iostream>
    using namespace std;
     
    int main() {
    long long int a;
    int n,k,i;
    cin>>a>>n>>k;
    for(i=0;i<k;i++)
    {
        int x = pow(n+1,i);
        long long int y = a/x;
        cout<<y%(n+1)<<" ";
    }
    return 0;
    } 