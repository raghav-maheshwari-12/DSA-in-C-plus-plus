#include<iostream>
using namespace std;
int mountainElement(int arr[], int n ){
    int s =0;
    int e =n-1;
    int mid= s+(e-s)/2;
    while(s<e){
        if(arr[mid]<arr[mid +1]){
            s= mid +1;
        }
        else if (arr[mid]>arr[mid +1]){
            e =mid;
        }
        mid = s +(e-s)/2;
    }
    return s;
}
 int main()
{
    int arr[4]={3,4,5,1};
    cout<<"the peak elment in array at index is "<< mountainElement(arr,4)<<endl;
return 0;
}