#include<iostream>
#include<cmath>
using namespace std;
 
int main()
{
int t,b,ls;
cin>>t;
for(int i=0;i<t;i++)
{
cin>>b>>ls;
double rsmax=sqrt(b*b+ls*ls);
double rsmin=sqrt(ls*ls-b*b);
cout<<rsmin<<" "<<rsmax<<endl;
}
}
