#include <bits/stdc++.h>
using namespace std;

int main(){

vector<string> s;    
string line;
while(getline(cin,line))
{
    if (line.empty())
       break;
    s.push_back(line);
}

long long int l = s.size();
for(long long int i=l/2;i<l;i++){
	cout<<s[i]<<endl;
}
for(long long int i=0;i<l/2;i++){
	cout<<s[i]<<endl;
}
}