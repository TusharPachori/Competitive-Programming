#include<bits/stdc++.h>

using namespace std;

int main(){
    int T;
    cin >> T;
    while(T--){
        int n;
        cin >>n;
        vector<int> v(n);
        int pos = -1;
        int min = INT_MAX;
        int res=0;
        for(int i=0;i<n;i++){
            cin >>v[i];

            if (i-pos > 5){
                int temp_min = INT_MAX;
                int temp_index;
                for(int j=i-1;j>=i-5;j--){
                    // cout<<j<<" ";
                    if(v[j]<temp_min){
                        temp_min = v[j];
                        temp_index = j;
                    }
                }
                // cout<<endl;
                pos = temp_index;
                min = temp_min;
            }

            if (min > v[i]){
                min = v[i];
                pos = i;
                res++;
            }
        }
        cout<<res<<endl;
    }
}