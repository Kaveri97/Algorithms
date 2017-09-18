#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	for (int i = 0; i < t; ++i)
	{	
		int flag = 0, c=0;
		string s;
		cin>>s;
		int l = s.length();
		for (int j = 0; j < l; ++j)
		{
			for (int k = j+1; k < l; ++k)
			{
				if(s[j]==s[k]){
					c++;
					flag=1;
					break;
				}
			}
			if(flag&&(c==2))
				break;
		}
		if(flag)
			cout<<"yes"<<endl;
		else
			cout<<"no"<<endl;
	}
	return 0;
}