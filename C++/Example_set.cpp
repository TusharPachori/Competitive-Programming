#include <bits/stdc++.h>

using namespace std;

int main(){
    set<int> S1 = {2,3,5,6,2,234,2,42,345,2,42,34};
    set<int> S2 = {1,31,23,12,4,134,2,45,235,};
    set<int> S3;
    auto it = set_difference(S1.begin(), S1.end(), S2.begin(), S2.end(),S3) ;

    for (int x:it){
        cout<<*x<<" ";
    }
    cout<<"\n";

}