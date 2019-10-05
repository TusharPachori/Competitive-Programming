#include<bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin >> T;
    while(T--){
        int Q;
        cin >> Q;
        int x;
        set<int> s;
        int E = 0,O = 0;
        int temp;
        for(int i=0;i<Q;i++){
            cin >>x;
            if (s.find(x)==s.end()){
                for(auto i:s){
                    temp = i ^ x;
                    if (s.find(temp)==s.end()){
                        if (__builtin_popcount (temp)%2==0){
                            E++;
                        }else{
                            O++;
                        }
                        s.insert(temp);
                    }
                }
                if (__builtin_popcount (x)%2==0){
                    E++;
                }else{
                    O++;
                }
                s.insert(x);
            }
            cout<<E<<" " <<O<<"\n";
        }
    }
}