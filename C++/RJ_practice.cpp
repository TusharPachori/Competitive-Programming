#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<algorithm>

using namespace std;

bool f(int x, int y){
    return x > y;
}

void Ex_Vector(){
    vector<int> V = {1,2,3,4,5};
    cout<<V[1]<<endl;

    sort(V.begin(), V.end()); // O(NlogN)

    bool present = binary_search(V.begin(), V.end(), 10); //O(logN)

    V.push_back(6);
    V.push_back(7);
    V.push_back(8);
    V.push_back(9);
    V.push_back(10);

    // vector<int>::iterator it = lower_bound(V.begin(), V.end(), 6);
    auto it = lower_bound(V.begin(), V.end(), 6);   // alternative
    // vector<int>::iterator it2 = upper_bound(V.begin(), V.end(), 6);
    auto it2 = upper_bound(V.begin(), V.end(), 6);  // alternative
    cout<<*it<<" "<<*it2<<endl;
    cout<<it2-it<<endl;

    sort(V.begin(), V.end(), f);

    vector<int>::iterator it3;
    for(it3=V.begin();it3!=V.end();it3++){
        cout<<*it3<<" ";
    }
    cout<<endl;

    for(int x: V){
        cout<<x<<" ";
    }
    cout<<endl;

    for(int &x: V){      // using reference
        cout<<++x<<" ";
    }
    cout<<endl;

}

// void Ex_Set(){
//     set<int> S;
//     S.insert(10);
//     S.insert(8);
//     S.insert(6);
//     S.insert(4);
//     S.insert(2);

//     S.erase(6);

//     for(int x: S)
//         cout<<x<<" ";
//     cout<<endl;

//     auto it = S.find(4);
//     if(it==S.end()){
//         cout<<"Not Present"<<endl;
//     }else{
//         cout<<"Present"<<endl;
//         cout<<*it<<endl;
//     }

//     auto it2 = S.lower_bound(2);
//     auto it3 = S.upper_bound(2);

//     cout<<*it2<<" "<<*it3<<endl;

//     auto it4 = S.upper_bound(10);
//     if(it4 == S.end()){
//         cout<<"Ooops!"<<endl;
//     }
// }

// void Ex_Map(){
//     map<int, int> A;

//     A[1] = 100;
//     A[2] = 200;
//     A[3] = 300;
//     A[4] = 400;

//     auto it =  A.find(3);
//     cout<<it->second<<endl;
//     A.erase(3);

//     map<char, int> cnt;
//     string x = "TUSHAR PACHORI";

//     for(char c: x)
//         cnt[c]++;
    
//     cout<< cnt['A'] <<" "<< cnt['R']<<endl;
// }

// void Map_prob(){
//     set< pair<int, int> > S;

//     S.insert({1,1});
//     S.insert({1,2});
//     S.insert({1,0});
//     S.insert({1,3});
//     S.insert({4,5});
//     S.insert({5,6});

//     for(auto x : S)
//         cout<<x.first<<" "<<x.second<<endl;
    
//     auto it = S.upper_bound({1,INT_MAX});

//     if(it == S.begin()){
//         cout << "The given point is not lying in any interval..." << endl;
//         return;
//     }
//     it--;
//     pair<int, int> current = *it;

//     if(current.first <= point && point <= current.second)
//         cout << "Yes its present "<< current.first << " " << current.second << endl;
//     else
//         cout << "The given point is not lying in any interval..." << endl;
// }

int main(){
    Ex_Vector();
    // Ex_Set();
    // Ex_Map();
    // Map_prob();
}