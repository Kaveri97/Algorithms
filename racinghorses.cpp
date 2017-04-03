#include<bits/stdc++.h>
using namespace std;
 
int main(){

int N,t;
cin>>t;
for (int i = 0; i < t; ++i)
{
	cin>>N;
	int arr[N];
	for (int j = 0; j < N; ++j)
	{
		cin>>arr[j];
	}
 	sort(arr, arr+N);
 	long long int min = 1000000001;
 	for (int m = 0; m < N-1; ++m){
 		for (int o = m+1; o < N; ++o)
 		{
 			if((arr[o]-arr[m])<min){
 				min = arr[o] - arr[m];
 			}
 		}
 	}
 	cout<<min<<endl;
}
}