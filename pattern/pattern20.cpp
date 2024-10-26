#include<iostream>
using namespace std;
 int main()
{int n;
cin>>n;
int i=1;

int star=n-i;
while(i<=n){
    int space=1;
    while(space<=i-1){
        cout<<" ";
        space++;
    }
    int j=1;
    while(j<=n-i+1){
        cout<<"*";
        j++;
    }
    cout<<endl;
    i++;
}

return 0;
}