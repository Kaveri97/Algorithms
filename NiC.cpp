#include <iostream>
using namespace std;
long int MOD=1000000007;
typedef long long int ll;
#define T int t; cin>>t; while(t--)
  
int main()
   {
   int t;
   cin>>t;
   while(t--){
   long N, M;
   cin>>N>>M;
   bool a[1000001] = {0};
   long x;
   for(long i = 0; i<N; ++i)
   {
   cin>>x;
   a[x] = 1;
   }
   long cnt = 0;
   for(long i = 0; i<M; ++i)
   {
   cin>>x;
    if (a[x]==1) ++cnt;
   }
   cout << cnt<<endl;
   }
   return 0;
   }
