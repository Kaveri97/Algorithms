#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    for (int i = 0; i < t; ++i)
    {
    	string s;
    	cin>>s;
    	char flag =1;
    	for (int i = 1; i < s.length(); ++i)
    	{
    		if (((s[i] == 'C') && (s[i-1] == 'E'))||((s[i] == 'C') && (s[i-1] == 'S'))||((s[i] == 'E') && (s[i-1] == 'S')))
    			flag = 0;
    	}
    		if (flag) {
    			cout<<"yes"<<endl;
			} else {
				cout<<"no"<<endl;
			}
		}
		return 0;
	}
