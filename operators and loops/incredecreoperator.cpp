#include<iostream>
using namespace std;
 int main()
{ 
    // i++: post increment
    // ++i: pre increment
    // i--: post decrement
    // --i: pre decrement
    int n;
    cin>>n;
    cout<<"printing the count froom 1 to n"<<endl;
    for(int i=1; i<=n; i++){
        cout<<i<<endl;
    }
return 0;
}