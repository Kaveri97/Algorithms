#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	while(n>0)
	{
		string x,y,z;
		cin>>x>>y;
		z = "";
		for(int i=0;i<x.size();i++)
		{
			if(x[i]== 'W' && y[i]== 'W')
			{
				z+="B";
			}
			else if(x[i]=='B' && y[i]=='B')
			{
				z+="W";
			}
			else
			{
				z+="B";
			}
		}
		cout<<z<<"\n";
		n--;
	}
	return 0;
}