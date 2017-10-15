    #include <bits/stdc++.h>
    using namespace std;
    int main()
    {
    	int t;
    	cin>>t;
    	while(t--)
    	{
    		int n;
    		cin>>n;
    		string str,s;
    		cin>>str;
    		for(int i=0;i<n;i++)
    		{
    			if(str[i]!='.')
    				s+=str[i];
    		} 
    		if(s.length()==0)
    		{
    			cout<<"Valid"<<endl;
    			goto end;
    		}
    		if(s[0]=='T' || s.length()%2!=0)
    		{
    			cout<<"Invalid"<<endl;
    			goto end;
    		}
    		for(int i=1;i<s.length();i=i+2)
    		{
    			if(s[i]!='T')
    			{
    				cout<<"Invalid"<<endl;
    				goto end;
    			}
    			else if(s[i-1]!='H')
    			{
    				cout<<"Invalid"<<endl;
    				goto end;
    			}
    		}
    		cout<<"Valid"<<endl;
    		end: ;
    	}
    } 