#include<iostream>
int main()
{
    using namespace std;
    int n;
    cin>>n;
    int x[n];
    int y[n];
    int z[n];
    int tx=0;
    int ty=0;int tz=0;
    for(int i=0;i<n;i++)
    {
        cin>>x[i]>>y[i]>>z[i];
        tx+=x[i];
        ty+=y[i];
        tz+=z[i];
    }
    if(tx==0 && ty==0 && tz==0)
    cout<<"YES"<<endl;
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}