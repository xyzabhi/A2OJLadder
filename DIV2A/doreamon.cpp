#include<bits/stdc++.h>
int main()
{
    using namespace std;
    int n,m;
    cin>>n>>m;
    int x;
       if(n<m)
    {cout<<-1<<endl;
    return 0;
    }
    if(n%2==0)
    x=n/2;
 
    
    else
    {
        x=n/2+1;
    }
    // cout<<x<<endl;
    if(x%m==0)
    cout<<x<<endl;
    else
    {
        cout<<((x/m)+1)*m<<endl;
    }
    

}