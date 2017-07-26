    #include <iostream>
    using namespace std;
    int main()
    {
        int t,n;
        cin>>t;
        while(t--)
        {
            cin>>n;
            int a[n],sum=0;
            bool e=false,f=false,s=false;
            for(int i=0;i<n;i++)
            {
                cin>>a[i];
                sum+=a[i];
                if(a[i]==2)
                f=true;
                if(a[i]==5)
                e=true;
            }
            if(sum*1.0/n>=4)
                s=true;
             
            if(e&&!f&&s)
                cout<<"Yes";
            else
                cout<<"No";
            cout<<endl;
        }
        return 0;
    } 