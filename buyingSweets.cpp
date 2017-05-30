#include <iostream>
using namespace std;
 
int main() {
int t,temp;
cin>>t;
int n,x;
while(t--)
{
cin>>n>>x;
int a[n];
int sum=0,flag=0;
for(int i=0;i<n;i++)
{
cin>>a[i];
sum+=a[i];
}
if(sum%x==0)
cout<<sum/x<<endl;
else
{
temp=sum%x;
for(int i=0;i<n;i++)
{
if(a[i]<=temp)
{
cout<<-1<<endl;
flag=1;
break;
}
}
if(flag==0)
cout<<sum/x<<endl;
}
}
return 0;
}
