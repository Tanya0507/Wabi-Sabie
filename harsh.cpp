#include <iostream>
using namespace std;

int main() {
    int i,n,t,f=1,j;
    cin>>t;
    if(f==0)
    {
        cout<<"1"<<endl;
    }
    else
    {
        for(i=0; i<t; i++){
         cin>>n;
        for(j=1; j<=n; j++)
        {
            f=j*f;
        }
    
        cout<<f<<endl;
        f=1;
        }
    }
    

    
  return 0;
}