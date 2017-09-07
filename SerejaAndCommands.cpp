#include <bits/stdc++.h>
using namespace std;
void operation(long long int a[],long long int op[][3], long long int t,long long int l, long long int r){
  if(t==1){
    for(long long int j=l;j<=r;j++){
      a[j]++;
    }
    return;
  }
  else{
    for(long long int j=l;j<=r;j++){
    operation(a,op,op[j][0],op[j][1]-1,op[j][2]-1);
   }
  }
  //return ;
}
int main(){
  int t;
  cin>>t;
  while(t--){
    long long int n,m;
    cin>>n>>m;
    long long int p = (1*10e9) +7;
    long long int a[n];
    for(long long int i=0;i<n;i++){
      a[i]=0;
    }
    long long int op[m][3];
    for(long long int i=0;i<m;i++){
      cin>>op[i][0]>>op[i][1]>>op[i][2];
    }
    for(long long int j=0;j<m;j++){

    operation(a,op,op[j][0],op[j][1]-1,op[j][2]-1);
   }
   for(long long int i=0;i<n;i++){
     cout<<a[i]%p<<" ";
   }
   cout<<endl;
 }
  return 0;
}
