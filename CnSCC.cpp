#include <bits/stdc++.h>
using namespace std;
 
int main() 
{
	std::ios::sync_with_stdio(false);
	int c=0,h=0,e=0,f=0;
	string str;
	cin>>str;
	for(int i=0;i<str.length();i++)
	{
	    if(str[i]=='C')
	    c++;
	    else if(str[i]=='H'&&h<c)
	    h++;
	    else if(str[i]=='E'&&e<h)
	    e++;
	    else if(str[i]=='F'&&f<e)
	    f++;
	}
	cout<<f<<endl;
	return 0;
}