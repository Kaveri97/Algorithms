#include <iostream>
#include<cmath>
using namespace std;
 
int main()
{
  int t;
  cin>>t;
  for(int i=0;i<t;i++)
  {
     int n; 
     double v1,v2;
     cin>>n>>v1>>v2;
     double t1=(n*sqrt(2))/v1;
     double t2=(n*2)/v2;
     if(t1<t2)
         cout<<"Stairs"<<endl;
     else
         cout<<"Elevator"<<endl;
      
  }
   
   return 0;
}
 