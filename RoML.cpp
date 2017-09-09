    #include<iostream>
    #include<math.h>
    using namespace std;
    int main()
    {
        int t;
        string s;
        cin>>t;
        for(int j=0;j<t;j++)
        {   
            cin>>s;
            int a[26],sum=0,count=0;
            for(int i=0;i<26;i++){
                a[i] = 0;
            }
            for (int i = 0; i < s.length(); ++i)
            {
                if(s[i]>='A' && s[i]<='Z'){
                    a[s[i]-'A']=1;
                }
                else{
                    a[s[i]-'a']=1;
                }
            }
            for(int i=0;i<26;i++){
                if(!a[i])
                    sum += i+1;
                else
                    count++;
            }
            char c = (sum%26)+'a'-1;
            if(count == 26){
                cout<<"Nothing is missing"<<endl;
            }else{
                cout<<"String "<<j+1<<" Representative is = "<<c<<endl;
            }
        }
    } 