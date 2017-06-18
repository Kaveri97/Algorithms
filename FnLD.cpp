#include <bits/stdc++.h>
using namespace std;

int main() {
 int t,ans;
 string s;
 cin>>t;
 while(t--){
  cin>>s;
  int len=s.length();
  ans=(s[0]-'0')+(s[len-1]-'0');
  printf("%d\n",ans);
 }
 return 0;
} 
