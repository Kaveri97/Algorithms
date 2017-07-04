#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    for (int i = 0; i < t; ++i)
    {
    	int k;
    	cin>>k;
    	int r = k%25;
    	int q = k/25;
    	if(r>0){
    		for (; r >= 0; r--)
    		{
    			cout<<(char)('a'+r);
    		}
    	}
    	for(int j=1;j<=q;j++)
		{
			cout<<"zyxwvutsrqponmlkjihgfedcba";
		}
	cout<<endl;
    }

}