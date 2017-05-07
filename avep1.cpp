    #include<bits/stdc++.h>
    using namespace std;
    string s="";
    void rec(int n)
    {
    if(n==1)
    {
    s+="2(0)";
    return;
    }
    if(n==2)
    {
    s+="2";
    return;
    }
    int j=0;
    while((1<<j)<=n)
    j++;
    j--;
    if((1<<j)==n)
    {
    s+="2(";
    rec(j);
    s+=")";
    }
    else
    {
    rec(1<<j);
    s+="+";
    rec(n-(1<<j));
    }
    }
    int main()
    {
    int arr[]={137,1315,73,136,255,1384,16385},i;
    for(i=0;i<7;i++)
    {
    rec(arr[i]);
    cout <<arr[i] << "=" << s << endl;;
    s="";
    }
    return 0;
    } 
