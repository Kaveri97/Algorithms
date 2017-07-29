#include <bits/stdc++.h>
using namespace std;

int main(){
	long int t,p=1;
	cin>>t;
	cin.ignore();
	for (int i = 0; i < t; ++i)
	{
		vector <long long int> a; 
		
		do
    	{
        int input ;
        if ( std::cin >> input )
            a.push_back(input) ;
    	} while ( std::cin && std::cin.peek() != '\n' ) ;

		int m = a.size();
		sort(a.begin(),a.end());
		if(a[m-1]==m-1)
			cout<<a[m-2]<<endl;
		else
			cout<<a[m-1]<<endl;

	}
}
