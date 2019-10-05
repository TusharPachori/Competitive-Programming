#include<bits/stdc++.h>
using namespace std;

int binary_search(int arr[], int l, int r, int k){
    while(l<=r){
        int m = l + (r-l)/2;

        if (arr[m]==k)
            return m;
        else if(arr[m]<k)
            l = m + 1;
        else
            r = m - 1;
    }
    return -1;
}

int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int x = 8;
    int n = sizeof(arr)/sizeof(arr[0]);
    int result = binary_search(arr,0,n,x);
    if (result==-1)
        cout<<"Element not found";
    else
        cout<<"Element Present at index "<<result<<"\n";
}