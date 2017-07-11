#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,j;
	cin>>t;
	for (int i = 0; i < t; ++i)
	{
		int h,ts;
		float c;
		cin>>h>>c>>ts;
		int c1=0,c2=0,c3=0;
		if(h>50)
			c1 = 1;
		if(c<0.7)
			c2 = 1;
		if(ts>5600)
			c3 =1;
		if(c1&&c2&&c3)
			cout<<10<<endl;
		else if(c1&&c2)
			cout<<9<<endl;
		else if(c2&&c3)
			cout<<8<<endl;
		else if(c3&&c1)
			cout<<7<<endl;
		else if(c1&&(!c2)&&(!c3) || c2&&(!c1)&&(!c3) || c3&&(!c2)&&(!c1))
			cout<<6<<endl;
		else if (!(c1&&c2&&c3))
			cout<<5<<endl;

	}
	return 0;
}