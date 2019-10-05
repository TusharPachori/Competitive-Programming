#include<bits/stdc++.h>
using namespace std;

int main(){
    int N, Q;
    cin >> N;
    vector<int> v(N);
    for(int i=0;i<N;i++){
        cin >> v[i];
    }
    cin >> Q;
    while(Q--){
        int L, R, Y;
        cin >> L >> R >> Y;
        int price = 0;
        vector<int> v2;
        for (int i=L-1;i<=R-1;i++){
            v2.push_back(v[i]);
        }
        sort(v2.begin(), v2.end());
        for(int i=0;i<v2.size();i++){
            price+=v2[i];
            if (price>=Y){
                break;
            }
        }
        if (price>=Y){
            cout<< price<<endl;
        }
        else{
            cout<<"-1"<<endl;
        }
    }

}