#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a = n & (n-1);
    if ( a == 0)
        cout << "yes\n";
    else
        cout << "no\n";
}