#include <iostream>
using namespace std;

int main(){
    int n,m=1;
    cin>>n;

    for (int i=1;i<=n;i++)
    {
        for(int k=1;k<=i;k++)
        {
            cout<<m<<" ";
            m++;
        }
        cout<<endl;
    }
    return 0;
}