#include<iostream>
using namespace std;
  int lastOccurence(int arr[], int n, int key){
    int s =0;
    int e =n-1;
    int mid = s + (e-s)/2;
    int ans =-1;
    while(s<=e){
        if (arr[mid]== key){
            ans =mid;
            s =mid +1;
        }
        else if(arr[mid]> key){
            e =mid -1;
        }
        else{
            s = mid +1;
        }
        mid = s +(e-s)/2;
    }
    return ans;
 }
 int firstOccurence(int arr[], int n, int key){
    int s =0;
    int e =n-1;
    int mid = s + (e-s)/2;
    int ans =-1;
    while(s<=e){
        if (arr[mid]== key){
            ans =mid;
            e =mid -1;
        }
        else if(arr[mid]> key){
            e =mid -1;
        }
        else{
            s = mid +1;
        }
        mid = s +(e-s)/2;
    }
    return ans;
 }

 int main()
{ 
    int rat[7]={ 1,3,3,4,7,7,9,};
    int key = 3;
  
    cout<<"the first occurence of"<<key<<" is  "<<firstOccurence(rat,7,key)<<endl;
     cout<<"the last occurence of"<<key<<" is  "<<lastOccurence(rat,7,key)<<endl;
return 0;
}

