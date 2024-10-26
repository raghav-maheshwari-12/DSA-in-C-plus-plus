#include<iostream>
using namespace std;
int factorial(int n){
   int fact=1;
   int i=1;
    for(i=1;i<=n;i++){
        fact=fact*i;
       
    }
    return fact;
    }
int ncr(int n,int r){
        int num=factorial(n);
        int den=factorial(n-r) * factorial(r);
        return num/den;
}
 int main()
{
    int n, r;
    cin>>n>>r;
    cout<<"value of ncr is "<< ncr(n,r)<<endl;
return 0;
}