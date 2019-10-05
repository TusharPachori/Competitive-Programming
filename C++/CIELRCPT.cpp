#include<bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin >> T;
    while(T--){
        int p;
        cin >> p;
        int count=0;
        if (p>2048){
            count = p/2048;
            p=p%2048;
        }
        while(p){
            if (p%2!=0)
                count++;
            p=p/2;
        }
        cout<<count<<"\n";
    }
}