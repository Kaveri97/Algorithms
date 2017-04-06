#include<bits/stdc++.h>
using namespace std;

int main(){
	int T;
	cin>>T;
	for (int i = 0; i < T; ++i)
	{
		int N;
		cin>>N;
		long long int A[N];
		for (int j = 0; j < N; ++j)
		{
			cin>>A[j];
		}
		int K;
		cin>>K;
		long long int n = A[K-1];
		sort(A, A+N);
		int k;
		for( k=0; k<N; k++){
			if(A[k]==n)
				break;
		}
		cout<<k+1<<endl;
	}
}