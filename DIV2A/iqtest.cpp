#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int even=0;
    int odd=0 ;
    int index;
    int x;//0 for even 1 for odd
    int lasteven;
    int lastodd;
for(int i=0;i<n;i++)    
    {
        cin>>x;
        if(x%2==0)
        {
 even++;
 lasteven=i+1;
        }
       
        else {
            odd++;
            lastodd=i+1;
        }
        if(odd==1 && even>1){        index=i+1;
        cout<<lastodd<<endl;
        return 0;
}
        if(odd>1 && even==1)
        {
                    index=i+1;
cout<<lasteven<<endl;
return 0;
        }
    }
}