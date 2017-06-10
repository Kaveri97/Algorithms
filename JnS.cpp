#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    for (int i = 0; i < t; ++i)
    {	
    	string j,s;
    	int c=0;
    	cin>>j>>s;
    	for (int l = 0; l < s.size(); ++l)
    	{
    		for (int k = 0; k < j.size(); ++k)
    		{
    			if (s[l]==j[k]){
    				c++;
    				break;
    			}
    		}
    	}
    	cout<<c<<endl;
    }
    return 0;
}