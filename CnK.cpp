#include<bits/stdc++.h>
#include<iostream>
using namespace std;
     
int main(){
     
 int t;
 cin>>t;
 while(t--){
  int n,m,c;
  cin>>n>>m>>c;
  int p=0;
  for(int i=1;i<=n;i++)
   for(int j=1;j<=m;j++){
       if(i*j>c)
        break;
       if(i*j==c)
        p++;
    }
  cout<<p<<"\n";
  }
  return 0;
} 