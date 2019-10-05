#include<bits/stdc++.h>

using namespace std;

int finalPrice(vector<int> prices){
    vector<int>::iterator iter1 = prices.end();
    vector<int>::iterator iter2;

    vector<int> v;

    int min = *iter1;
    v.push_back(min);
    for(iter1 = prices.end()--;iter1--!=prices.begin();){
        cout<<*iter1<<" ";
        if (*iter1 < min){
            min = *iter1;
            v.push_back(min);
            cout<<"check";
        }
    }
    for(iter2 = v.end()--; iter2-- !=v.begin();){
        cout<< *iter2<< " ";
    }

}

int main(){
    int n,x;
    cin >> n;
    vector<int> v;
    for (int i=0;i<n;i++){
        cin >> x;
        v.push_back(x);
    }
    int result = finalPrice(v);
}