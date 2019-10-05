#include<bits/stdc++.h>
using namespace std;

typedef pair<int, int> pr;

int main(){
    map<pr, string> table;

    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        pr code;
        string name;
        cin >> code.first >> code.second;
        cin >> name;
        table[code] = name;
    }
    int q;
    cin >> q;
    for(int i=0;i<q;i++){
        pr code;
        cin >> code.first >> code.second;
        cout << table[code] << endl;
    }
}