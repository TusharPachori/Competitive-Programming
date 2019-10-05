#include<bits/stdc++.h>

using namespace std;

int main(){
    int T;
    cin >> T;
    while(T--){
        int r, c, q;
        cin >> r >> c >> q;
        vector< vector<int> > v(r, vector<int> (c, 0));
        int res = 0;
        int x, y;
        int l = r > c ? r : c;
        while(q--){
            cin >> x >> y;
            for(int i=0;i<l;i++){
                if(i<c){
                    if (v[x-1][i]%2==0){
                        res+=1;
                    }else{
                        res-=1;
                    }
                    v[x-1][i]+=1;
                }
                if(i<r){
                    if (v[i][y-1]%2==0){
                        res+=1;
                    }else{
                        res-=1;
                    }
                    v[i][y-1]+=1;
                }
            }
            for(int i=0;i<r;i++){
                for(int j=0;j<c;j++){
                    cout<<v[i][j]<<" ";
                }
                cout<<endl;
            }
            cout<<res<<endl;
        }
        cout<<res<<endl;

    }
}