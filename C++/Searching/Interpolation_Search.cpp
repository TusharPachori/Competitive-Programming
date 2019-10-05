#include<bits/stdc++.h>
using namespace std;

int interpolation_search(int arr[], int n, int k){

    int lo = 0, hi = (n - 1); 
  
    while (lo <= hi && x >= arr[lo] && x <= arr[hi]) { 
        if (lo == hi){ 
            if (arr[lo] == x)
                return lo; 
            return -1; 
        } 

        int pos = lo + (((double)(hi - lo) / (arr[hi] - arr[lo])) * (x - arr[lo])); 
  
        if (arr[pos] == x) 
            return pos; 
  
        if (arr[pos] < x) 
            lo = pos + 1; 
  
        else
            hi = pos - 1; 
    } 
    return -1; 
}

int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int x = 10;
    int n = sizeof(arr)/sizeof(arr[0]);
    int result = interpolation_search(arr,n,x);
    if (result==-1)
        cout<<"Element not found";
    else
        cout<<"Element Present at index "<<result<<"\n";
}