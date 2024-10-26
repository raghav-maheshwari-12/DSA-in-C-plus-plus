#include<iostream>
using namespace std;
int getpivot(int arr[],int n){
    int s=0;
    int e=n-1;
    int mid= s+(e-s)/2;
    while(s<e){
           if(arr[mid] >= arr[0])
        {
            s = mid+1;
        }
        else{
            e = mid;
        }
        mid = s + (e-s)/2;
    }
    return s;
    }
    int binarySearch(int arr[],  int s , int e ,int key) {

    int start = s;
    int end = e;

    int mid = start + (end-start)/2;

    while(start <= end) {

        if(arr[mid] == key) {
            return mid;
        }

        //go to right wala part
        if(key > arr[mid]) {
            start = mid + 1;
        }
        else{ //key < arr[mid]
            end = mid - 1;
        }

        mid = start + (end-start)/2;
    }
    
    return -1;
}
 int main()
{ 
    int arr[5]={4,5,1,2,3};
    int n =5;
    int key =3;
    int pivot = getpivot(arr, 5);
    if( key >= arr[pivot] && key <= arr[n-1])
    {//BS on second line
        cout<<"key is present at " << binarySearch(arr, pivot, n-1, key)<< endl;
    }
    else
    {//BS on first line
        cout<<"key is present at"<<binarySearch(arr, 0, pivot - 1, key)<<endl;
    }
return 0;
}