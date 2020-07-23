#include<bits/stdc++.h>
int main()
{
    using namespace std;
    int n;
    cin>>n;
    int x;
    vector<int>t1,t2,t3;
   for(int i=0;i<n;i++)
    {
        /* code */
        cin>>x;
        if(x==1)
        {
            t1.push_back(i+1);
        }
        else if(x==2)
        {
            t2.push_back(i+1);
        }
        else
        {
            t3.push_back(i+1);
        }
        
    }
    int max=min({t1.size(),t2.size(),t3.size()});
    cout<<max<<endl;
    for(int i=0;i<max;i++)
    {
        cout<<t1[i]<<" "<<t2[i]<<" "<<t3[i]<<endl;
    }
    
}