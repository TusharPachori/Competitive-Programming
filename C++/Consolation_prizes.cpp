#include<bits/stdc++.h>

using namespace std;

bool f(int x, int y){
    return x>y;
}

int numofprizes(int k, vector <int> marks){
    sort(marks.begin(), marks.end());
    set<int> s(marks.begin(), marks.end());

    int z = s.size();
    int temp;

    if (k <= z)
        temp = z-k;
    else
        temp = 0;
    

    set<int>::iterator iter = upper_bound(s.begin(),s.end(),temp);


    if (*iter ==0){
        iter++;
    }
    int x = *iter;

    cout<<x<<" ";

    vector<int>::iterator iter2 = lower_bound(marks.begin(), marks.end(), x);
    int temp3 = (marks.end() - iter2);
    cout << temp3;

    return 0;
}

int main(){
    int k, n,x;
    cin >> k >> n;
    vector<int> v;
    for (int i=0;i<n;i++){
        cin >> x;
        v.push_back(x);
    }
    int result = numofprizes(k,v);
}