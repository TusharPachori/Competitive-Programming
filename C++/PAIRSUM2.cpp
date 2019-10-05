#include<bits/stdc++.h>

using namespace std;

int main(){
    int T;
    cin >> T;
    while (T--){
        int N, Q;
        cin >> N >> Q;
        vector<int> B(N-1);
        for(int i=0;i<N-1;i++){
            cin>> B[i];
        }
        while(Q--){
            int p, q;
            cin>> p>>q;
            if (p-q%2==0){
                cout<<"UNKNOWN"<<endl;
            }else{
                int res = 0;
                int min, max;
                if (p>=q){
                    max = p;
                    min = q;
                }else{
                    min =p;
                    max = q;
                }
                int check=0;
                for (int i=min-1;i<max-1;i++){
                    if(check==0){
                        res+=B[i];
                        check=1;
                    }else{
                        res-=B[i];
                        check=0;
                    }
                }
                cout<< res<<endl;
            }
        }
    }
    
}