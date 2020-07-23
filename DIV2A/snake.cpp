#include<bits/stdc++.h>
int main()
{
    using namespace std;
    int n,m;
    cin>>n>>m;
    int flag=1;
    for(int i=0;i<n;i++)
    {
        if(i%2==0)
        {
            for(int j=0;j<m;j++)
            cout<<"#";
        }
        else{
            if(flag==1)
            {
                for(int k=0;k<m-1;k++)
                {
                    cout<<".";
                }
                cout<<"#";
                flag=-1;
            }
            else{
                cout<<"#";
                for(int l=0;l<m-1;l++)
                cout<<".";
                flag=1;

            }
        }
        cout<<endl;
    }
}