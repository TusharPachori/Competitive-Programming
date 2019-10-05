#include <iostream>
using namespace std;

int main(){
    float num= 365;
    float denom = 365;
    float p = 1;
    int n=0;
    while(p>0.001){
        n++;
        p=p*(num/denom);
        num=num-1;
    }
    cout<< n<< endl;
}