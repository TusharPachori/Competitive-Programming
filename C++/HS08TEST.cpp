#include<bits/stdc++.h>

using namespace std;

int main(){
    int trans;
    double amount;
    cin >> trans;
    cin >> amount;
    double bal;
    if (trans%5==0){
        if (trans+0.5<=amount){
            bal = amount-0.5-trans;
            cout << bal<<"\n";
        }else{
            cout<<amount<<"\n";
        }
    }else{
        cout<<amount<<"\n";
    }
}