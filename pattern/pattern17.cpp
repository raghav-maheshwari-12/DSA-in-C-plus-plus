#include<iostream>
using namespace std;
 int main()
{int n;
cin>>n;
int i=1;
while(i<=n){
    int j=1;
    char startingcharacter='A'+n-i;
    while(j<=i){
          
          cout<<startingcharacter;
          startingcharacter++;
          j++;
    }
    cout<<endl;
    i++;
}
return 0;
}