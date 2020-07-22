#include<bits/stdc++.h>
int max_balance(int n)
{using namespace std;
    if(n>=0)
    return n;
    int l=n%10;
    int sl=(n/10)%10;
    // cout<<sl<<endl;
    if(sl<l)
    return ((n/10)-sl+l);
    else return n/10;
}
int main()
{
    using namespace std;
    int x;
    cin>>x;
    cout<<max_balance(x)<<endl;
    return 0;
}