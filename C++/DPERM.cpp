#include<bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin >> T;
    while(T--){
        int n,d;
        cin >> n >> d;
        vector<int> v, v_even, v_odd;
        int x=0;
        for (int i = 0;i<n;i++){
            cin >> x;
            v.push_back(x);
            if (i%2==0){
                v_even.push_back(x);
            else
                v_even.push_back(x);
            }
        }
        sort(v.begin(), v.end());
        int i=0;
        vector<int>v1_even, v1_odd;
        for (auto x : v){ 
            if (i%2==0){
                v1_even.push_back(x);
            else
                v1_even.push_back(x);
            }
            i++;
        }
        if(is_permutation(v_even.begin(), v_even.end(), v1_even.begin()) &&
        is_permutation(v_odd.begin(), v_odd.end(), v1_odd.begin())){
            
        }else{
            cout<<"-1"<<"\n";
        }
    }
}

