#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    int b,m,e,r;
    for (int i = 0; i < t; i++)
    {	string s1;
    	int p;
    	for (int j = 0; j < 4; ++j)
    	{
    		cin>>s1>>p;
    	if(s1=="Barcelona")
    		b=p;
    	else if(s1=="Malaga")
    		m=p;
    	else if(s1=="RealMadrid")
    		r=p;
    	else
    		e=p;
   		}
   		if(b>e && r<m)
			cout<<"Barcelona"<<endl;
		else
			cout<<"RealMadrid"<<endl;
	}
}
    	

