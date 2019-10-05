#include<iostream>
using namespace std;

int countSetBits(int n){
    int count=0;
    while(n){
        count+=n&1;
        n>>=1;
    }
    return count;
}

int flipCount(int x, int y){
    return countSetBits(x^y);
}

int main(){
    cout<< flipCount(10,20) <<endl;
}