#include<bits/stdc++.h>
using namespace std;

bool func(pair<int, int>x, pair<int, int>y){
    return x.second > y.second;
}

int main(){
    int n;
    cin >> n;
    vector <int> v1, v2;
    for(int i=0;i<n;i++){
        int x,y;
        cin >> x >> y;
        v1.push_back(x);
        v2.push_back(y);
    }
    partial_sum(v1.begin(), v1.end(), v1.begin());
    partial_sum(v2.begin(), v2.end(), v2.begin());

    vector<pair<int, int>> v3;

    for (int i=0;i<n;i++){
        if(v1[i]>v2[i]){
            v3.push_back({1,v1[i]-v2[i]});
        }else if(v1[i]<v2[i]){
            v3.push_back({2,v2[i]-v1[i]});
        }else{
            v3.push_back({0,0});
        }
    }

    sort(v3.begin(), v3.end(), func);

    cout<<v3[0].first<<" "<<v3[0].second<<"\n";

}