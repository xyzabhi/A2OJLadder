#include<iostream>
bool isWanna(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==0)
        return false;
    }
    return true;
}
int main()
{
    using namespace std;
    int n;
    cin>>n;
    int arr[n]={0,};
    int p,q;
    cin>>p;
    int x;
    while(p--)
    {
        cin>>x;
        arr[x-1]=1;
    }
    cin>>q;
    while(q--)
    {
        cin>>x;
        arr[x-1]=1;
    }
    if(isWanna(arr,n))
    cout<<"I become the guy."<<endl;
    else
    {
        cout<<"Oh, my keyboard!"<<endl;
    }
    
return 0;
}