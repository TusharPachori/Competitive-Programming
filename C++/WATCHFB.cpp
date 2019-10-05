#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin >> T;
    while(T--){
        int N;
        cin >> N;
        int winner = 0;
        while(N--){
            int type, x, y;
            cin>> type >> x >> y;
            if (type == 1){
                winner = x>=y ? x : y;
                cout<<"YES"<<endl;
            }else{
                if (x < winner && y>=winner){
                    winner = y;
                    cout<<"YES"<<endl;
                } else if (x >= winner && y<winner){
                    winner = x;
                    cout<<"YES"<<endl;
                } else if(x==y){
                    winner = x;
                    cout<<"YES"<<endl;
                } else {
                    cout<<"NO"<<endl;
                }
            }
        }
    }
}