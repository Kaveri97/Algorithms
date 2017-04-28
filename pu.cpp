    #include <iostream>
    #include <algorithm>
    using namespace std;
     
    int main() {
    int t;
    cin >> t;
    while(t--)
    {
    int n,k,b;
    cin >>n >> k;
    vector<bool> a(20001,false);
    a[0]=true;
    for (int i=0;i<n;++i)
    {
    cin >> b;
    for(int j=k; j>=0 ; --j)
    {
    if(a[j]) a[j+b] = true;
    }
    }
    if (a[k]) cout << "Yes" << endl;
    else cout << "No" << endl;
    }
    return 0;
    }