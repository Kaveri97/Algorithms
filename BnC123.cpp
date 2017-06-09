    #include <iostream>
    using namespace std;
    int main()
    {
        int t;
        cin>>t;
        while(t--)
        {
            int a,b;
            cin>>a>>b;
            bool lturn=true;
            bool bturn=false;
            int i=1;
            while(true)
            {
                if(lturn)
                {
                if(a-i<0)
                break;
                a-=i;
                lturn=false;
                bturn=true;
                i++;
                }
                else if(bturn)
                {
                    if(b-i<0)
                        break;
                    b-=i;
                    lturn=true;
                    bturn=false;
                    i++;
                }
            }
            if(lturn)
                cout<<"Bob"<<endl;
            else
                cout<<"Limak"<<endl;
            }
        return 0;
    }
