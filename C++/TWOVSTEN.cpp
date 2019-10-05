#include<bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin >> T;
    while(T--){
        int x;
        cin >> x;
        int count=0;
        if (x%5!=0){
            count=-1;
            cout << count <<"\n";
        }else{
            if(x%10==0){
                cout << count <<"\n";
            }else{
                count++;
                cout<< count<<"\n";
            }
        }
    }
}