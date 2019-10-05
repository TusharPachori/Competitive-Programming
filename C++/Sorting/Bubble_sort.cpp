#include<bits/stdc++.h>
using namespace std;

void swap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}

void bubbleSort(int arr[], int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if (arr[j]>arr[j+1])
                swap(&arr[j], &arr[j+1]);
        }
    }
}

void printArray(int arr[], int n){
    for (int i=0;i<n;i++){
        cout<< arr[i]<<" ";
    }
    cout<<endl;
}

int main()  
{  
    int arr[] = {64, 25, 12, 22, 11};  
    int n = sizeof(arr)/sizeof(arr[0]);  
    bubbleSort(arr, n);  
    cout << "Sorted array: \n";  
    printArray(arr, n);  
    return 0;  
}  