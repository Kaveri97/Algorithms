#include<bits/stdc++.h>
using namespace std;
int main(){
	long int t;
	cin>>t;
	for (int i = 0; i < t; ++i)
	{
		long int n;
		cin>>n;
		int c=0,s1=0,e=0,m=0,h=0;
		for (int j = 0; j < n; ++j)
		{
			string s;
			cin>>s;
			if(s=="cakewalk")
				c++;
			if(s=="simple")
				s1++;
			if(s=="easy")
				e++;
			if((s=="easy-medium")||(s=="medium"))
				m++;
			if((s=="medium-hard")||(s=="hard"))
				h++;

		}
		if(c>0&&s1>0&&e>0&&m>0&&h>0)
			cout<<"Yes"<<endl;
		else
			cout<<"No"<<endl;
	}
}