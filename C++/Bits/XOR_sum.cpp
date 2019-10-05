#include<iostream>

using namespace std;

int ADD(int x, int y){
    while(y!=0){
        int carry = x&y;
        x=x^y;
        y = carry<<1;
    }
    return x;
}

int main(){
    cout<< ADD(10,20) <<endl;
}