#include<iostream>
using namespace std;
 int main()
{ int n;
bool isprime=1;
cout<<"enter the value of n"<<endl;
cin>>n;
for(int i=2; i<n; i++){
    if(n%i==0){
        // cout<<"not a prime no"<<endl;
        isprime=0;
        break;
    }
   
}
if(isprime==0){
    cout<<"not a prime no"<<endl;
}
else{
    cout<<"prime no"<<endl;
}
return 0;
}