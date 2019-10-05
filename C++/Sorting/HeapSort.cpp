#include<bits/stdc++.h>

using namespace std;

void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

void Heapify(int *arr, int n, int i){
    int largest = i;
    int l = 2*i+1;
    int r = 2*i+2;

    if (l<n && arr[l]>arr[largest]){
        largest=l;
    }

    if (r<n && arr[r]>arr[largest]){
        largest=r;
    }

    if(largest!=i){
        swap(arr[i], arr[largest]);
        Heapify(arr, n, largest);
    }

}

void HeapSort(int *arr, int n){
    for(int i=n/2-1;i>=0;i--){
        Heapify(arr, n, i);
    }
    for(int i=n-1;i>=0;i--){
        swap(arr[0], arr[i]);
        Heapify(arr, i, 0);
    }

}

int main(){
    int arr[10] = {9,8,7,6,5,4,3,2,1,0};

    HeapSort(arr, 10);

    for(int i=0;i<10;i++){
        cout<<arr[i]<<endl;
    }
}