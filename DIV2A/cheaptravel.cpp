#include<bits/stdc++.h>
int main()
{
    using namespace std;
    int n,m,a,b;
    cin>>n>>m>>a>>b;
    int x,y,z;
    x=n*a;
    if(n%m==0)
    {
        y=(n/m)*b;
        z=x;
    }
    else {y=((n/m)+1)*b;
    z=(n/m)*b +(n-((n/m)*m))*a;
    }
    // cout<<x<<y<<z<<endl;
    cout<<std::min({x,y,z})<<endl;
    return 0;
}