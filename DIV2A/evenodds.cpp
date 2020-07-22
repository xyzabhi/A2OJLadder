#include<bits/stdc++.h>
int main(){
    using namespace std;
    long long n,k;
    cin>>n>>k;
    long long mid;
    if(n%2==0)
    mid=n/2;
    else
    {
        mid=n/2+1;
    }
    if(k<=mid)
    cout<<2*k-1<<endl;
    else cout<<2*(k-mid)<<endl;
    return 0;
}