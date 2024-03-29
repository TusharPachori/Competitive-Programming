#include<bits/stdc++.h>
using namespace std;

void swap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}

void selectionSort(int arr[], int n){
    int min;
    for (int i=0;i<n-1;i++){
        min= i;
        for(int j=i+1;i<n;j++){
            if (arr[j]<arr[min]){
                min = j;
            }
        }
        swap(&arr[min], &arr[i]);
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
    selectionSort(arr, n);  
    cout << "Sorted array: \n";  
    printArray(arr, n);  
    return 0;  
}  