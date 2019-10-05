#include<bits/stdc++.h>

using namespace std;
#define ll long long int

int main(){
    ll T;
    cin >> T;
    while(T--){
        ll r, c, q;
        cin >> r >> c >> q;
        ll res = 0;
        ll x, y;
        vector<ll> row(r, 0);
        vector<ll> col(c, 0);
        while(q--){
            cin >> x >> y;
            row[x-1]+=1;
            col[y-1]+=1;
        }
        ll max = r > c ? r : c;
        ll rno=0;
        ll cno=0;
        for (ll i=0;i<max;i++){
            if (i<r){
                if(row[i]%2!=0){
                    rno+=1;
                }
            }
            if (i<c){
                if(col[i]%2!=0){
                    cno+=1;
                }
            }
        }
        res = cno*(r-rno) + rno*(c-cno);
        cout<<res<<endl;
    }
}

// 3 10 4
// 2 9
// 1 9
// 1 7
// 3 6

