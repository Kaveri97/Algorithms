#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,sum1=0,sum2=0;
    cin>>n;
    for(long long i=1;i<=n;i++)
    {
        long long x;
        cin>>x;
        sum1+=x;
        sum2+=i;
 
 
    } if(sum1==sum2)
        cout<<"YES"<<endl;
      else 
        cout<<"NO"<<endl;
return 0; 
}
 