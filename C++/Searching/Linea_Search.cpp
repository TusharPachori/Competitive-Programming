#include<bits/stdc++.h>

using namespace std;

int linear_search(int arr[], int n, int k){
    int result = -1;
    for(int i=0;i<n;i++){
        if(arr[i]==k)
            result=i;
    }
    return result;
}

int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int x = 10;
    int n = sizeof(arr)/sizeof(arr[0]);
    int result = linear_search(arr,n,x);
    if (result==-1)
        cout<<"Element not found";
    else
        cout<<"Element Present at index "<<result<<"\n";
}