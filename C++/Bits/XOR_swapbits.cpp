#include <iostream>
using namespace std;

int swap_bits(unsigned int x, unsigned int p1, unsigned int p2, unsigned int n){
    unsigned int set1 = (x >> p1) & ((1U << n) - 1);
    unsigned int set2 = (x >> p2) & ((1U << n) - 1);

    unsigned int Xor = (set1 ^ set2);

    Xor = (Xor << p1) | (Xor << p2);

    unsigned int result = x ^ Xor;

    return result;
}

int main(){
    cout <<swap_bits(28,0,3,2)<<endl;
}