#include<iostream>
int main()
{
    using namespace std;
    int n; //number of teams
    cin>>n; 
    int home_dress[n];
    int guest_dress[n];
    for(int i=0;i<n;i++)
    {
        cin>>home_dress[i];
        cin>>guest_dress[i];
    }
    int answer=0;
    for(int j=0;j<n;j++)
    {
        for(int i=0;i<n;i++)
        {
            if(i!=j)
            {
                if(home_dress[j]==guest_dress[i])
                answer++;
            }
        }
    }
    cout<<answer<<endl;

}