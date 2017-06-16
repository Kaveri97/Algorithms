#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    for (int i = 0; i < t; ++i)
    {
    	int c=0,flag=0;
    	string s1[4];
    	string s2[4];
    	for (int i = 0; i < 4; ++i)
    	{
    		cin>>s1[i];
    	}
    	for (int i = 0; i < 4; ++i)
    	{
    		cin>>s2[i];
    	}
    	for (int i = 0; i < 4; ++i)
    	{
    		for (int j = 0; j < 4; ++j)
    		{
    			if(s1[i]==s2[j]){
    				c++;
    			}
    			if(c==2){
    				flag = 1;
    				i=4;
    				break;
    			}
    		}
    	}
    	if(flag==1)
    		cout<<"similar"<<endl;
    	else
    		cout<<"dissimilar"<<endl;
    }
    return 0;
}