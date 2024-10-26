#include<iostream>
using namespace std;
 int main()
{ 
    int n;
    int arr[n]={0,1,1,2,1,0,0,1};
    int low = 0;
   int mid = 0;
   int high = n-1;
   while(mid<=high){
      if(arr[mid] == 0){
         swap(arr[low],arr[mid]);
         low++;
         mid++;
      }
      else if(arr[mid] == 1){
         mid++;
      }
      else if(arr[mid] == 2){
         swap(arr[mid],arr[high]);
         high--;
      }
   }
   
  
   for(int i=0;  i<n;i++){
    cout<<arr[i];
     }
return 0;
}