#include<bits/stdc++.h>
using namespace std;
 
int main(){

int a,b;
cin>>a>>b;
int c = a-b;
int n = c%10;
c = c/10;
if(n==9)
	n--;
else
	n++;
c = c*10 +n;
cout<<c;
}