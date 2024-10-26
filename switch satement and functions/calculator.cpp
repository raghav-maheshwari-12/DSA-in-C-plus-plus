#include<iostream>
using namespace std;
 int main()
{
    int a ;
    int b;
     cout<<"enter the value of a and b "<<endl;
cin >> a >> b;
char ch;
cout <<"enter the operation you want"<<endl;
cin>>ch;

switch(ch){
   
    case '+': cout<<"va;ue of (a+b) is "<< (a+b)<<endl;
    break;
     case '-': cout<<"va;ue of (a-b) is "<< (a-b)<<endl;
    break;
     case '*': cout<<"va;ue of (a*b) is "<< (a*b)<<endl;
    break;
     case '/': cout<<"va;ue of (a/b) is "<< (a/b)<<endl;
    break;
     case '%': cout<<"va;ue of (a%b) is "<< (a%b)<<endl;
    break;
     case '~': cout<<"va;ue of ~a is "<< ~a <<endl;
    break;
    }

return 0;
}