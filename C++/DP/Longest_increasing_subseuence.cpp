#include<bits/stdc++.h>

using namespace std;

int lis(int arr[], int n){
    int dp[n];
    int max = 1;
    for (int i=0;i<n;i++)
        dp[i]=1;
    for(int i=1;i<n;i++){
        for(int j=0;j<i;j++){
            if (arr[i]>arr[j] && dp[i]<dp[j]+1)
                dp[i] = dp[j]+1;
        }
        if (dp[i]>max)
            max = dp[i];
    }
    return max;
}

int main(){
    int arr[] = { 10, 22, 9, 33, 21, 50, 41, 60 }; 
    int n = sizeof(arr)/sizeof(arr[0]); 
    printf("Length of lis is %d\n", lis( arr, n )); 
    return 0; 
}