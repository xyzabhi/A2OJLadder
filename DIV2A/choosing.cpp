#include<bits/stdc++.h>
int main()
{
    using namespace std;
    int n,k;
    cin>>n>>k;
    int total=0;
    int x;
    while(n--)
    {
        cin>>x;
        if((5-x)>=k)
        total++;
    }
    cout<<total/3<<endl;
}