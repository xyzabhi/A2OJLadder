#include<bits/stdc++.h>
int main()
{   using namespace std;
    int n,d;
    cin>>n>>d;
    int sum=0;
    int x;
for(int i=0;i<n;i++)
    {
        cin>>x;
        sum+=x;
    }
    if((sum+((n-1)*10))>d)
    cout<<-1<<endl;
    else {
        cout<<(d-sum)/5<<endl;
    }

}