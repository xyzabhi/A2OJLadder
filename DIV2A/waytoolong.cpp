#include<bits/stdc++.h>
int main()
{
    using namespace std;
    string s;
    int t;
    cin>>t;
    while(t--)
    {
        cin>>s;
        if(s.size()>10)
        cout<<s[0]<<s.size()-2<<s[s.size()-1]<<endl;
        else
        {
            cout<<s<<endl;
        }
        
    }
}