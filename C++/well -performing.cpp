#include<bits/stdc++.h>
using namespace std;


int findLongest(vector <int> hours, int x){
    vector<int>::iterator iter1;
    vector<int>::iterator iter2;
    int count = 0;
    int max_count = 0;
    int wp = 0;
    int nwp = 0;
    for(iter1 = hours.begin();iter1<hours.end();iter1++){
        count=0;
        wp=0;
        nwp=0;
        for(iter2 = iter1;iter2<hours.end();iter2++){
            cout<< max_count <<" ";
            if(*iter2 > x)
                wp++;
            else
                nwp++;
            count++;
            if(wp>nwp){
                if(max_count < count)
                    max_count = count;
            }
        }
        break;
    }
    cout<<max_count;
    return max_count;
}

int main(){
    int n,x, k;
    cin >> n;
    vector<int> v;
    for (int i=0;i<n;i++){
        cin >> k;
        v.push_back(k);
    }
    cin >> x;
    int result = findLongest(v, x);
}