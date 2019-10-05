#include<bits/stdc++.h>
using namespace std;

int jump_search(int arr[], int n, int k){
    int step = sqrt(n);
    int prev = 0; 
    while (arr[min(step, n)-1] < x) { 
        prev = step; 
        step += sqrt(n); 
        if (prev >= n) 
            return -1; 
    } 
    while (arr[prev] < x) { 
        prev++; 
        if (prev == min(step, n)) 
            return -1; 
    } 
    if (arr[prev] == x) 
        return prev; 
        
    return -1; 
}

int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int x = 10;
    int n = sizeof(arr)/sizeof(arr[0]);
    int result = jump_search(arr,n,x);
    if (result==-1)
        cout<<"Element not found";
    else
        cout<<"Element Present at index "<<result<<"\n";
}
