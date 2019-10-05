#include<bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int l, int r, int x) { 
    if (r >= l){ 
        int mid = l + (r - l)/2; 
        if (arr[mid] == x) 
            return mid; 
  
        if (arr[mid] > x) 
            return binarySearch(arr, l, mid-1, x); 
  
        return binarySearch(arr, mid+1, r, x); 
    } 

    return -1; 
} 

int exponential_search(int arr[], int n, int k){ 

    if (arr[0] == x) 
        return 0; 
  
    int i = 1; 
    while (i < n && arr[i] <= x) 
        i = i*2; 
    return binarySearch(arr, i/2, min(i, n), x); 
} 

int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int x = 10;
    int n = sizeof(arr)/sizeof(arr[0]);
    int result = exponential_search(arr,n,x);
    if (result==-1)
        cout<<"Element not found";
    else
        cout<<"Element Present at index "<<result<<"\n";
}