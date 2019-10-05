#include<bits/stdc++.h>
using namespace std;

#define ll long long int

// int cir_merge(vector<int> v, int sum, int min){
//     if (v.size()==1){
//         if (min>sum){
//             min=sum;
//         }
//         return min;
//     }else{
//         int n = v.size();
//         for(int i=0;i<n;i++){
//             int first, second;
//             if (i!=n-1){
//                 first = v[i];
//                 second = v[i+1];
//             }else{
//                 first = v[i];
//                 second = v[0];
//             }
//             int temp = (first+second);
//             sum += temp;
//             if (sum>min)
//                 break;
//             if (i!=n-1){
//                 v.erase(v.begin()+i+1);
//                 v.erase(v.begin()+i);
//                 v.insert(v.begin()+i, temp);
//             }else{
//                 v.erase(v.begin()+i);
//                 v.erase(v.begin());
//                 v.insert(v.begin(), temp);
//             }
//             // for(auto i:v){
//             //     cout<<i<<" ";
//             // }
//             // cout<<"\n";
//             min = cir_merge(v, sum, min);
//             sum -= (temp);
//             if (i!=n-1){
//                 v.erase(v.begin()+i);
//                 v.insert(v.begin()+i, first);
//                 v.insert(v.begin()+i+1, second);
//             }else{
//                 v.erase(v.begin());
//                 v.insert(v.begin(), second);
//                 v.insert(v.begin()+i, first);
//             }
//         }
//         return min;
//     }
// }

// int main(){
//     int T;
//     cin >> T;
//     while(T--){
//         int n, x;
//         cin >> n;
//         vector<int> v;
//         for (int i=0;i<n;i++){
//             cin >> x;
//             v.push_back(x);
//         }
//         int res = INT_MAX;
//         int sum = 0;
//         res = cir_merge(v, sum, res);
//         cout<<res<<"\n";
//     }
// }








// int main(){
//     ll T;
//     cin >> T;
//     while(T--){
//         ll N, x;
//         cin >> N;
//         vector<ll> v;
//         for(ll i=0;i<N;i++){
//             cin >> x;
//             v.push_back(x);
//         }
//         ll sum=0;
//         ll length = N;
//         while(length>1){
//             vector<ll> v_diff;
//             for(ll i=0;i<length;i++){
//                 if(i<length-1)
//                     v_diff.push_back(v[i]+v[i+1]);
//                 else
//                     v_diff.push_back(v[0]+v[i]);
//             } 
//             ll min_index = min_element(v_diff.begin(),v_diff.end()) - v_diff.begin();
//             auto minelement = min_element(v_diff.begin(),v_diff.end());
            
//             sum+=*minelement;

//             if (min_index == length-1){
//                 v.erase(v.begin()+min_index);
//                 v.erase(v.begin());
//                 v.insert(v.begin(), *minelement);
//             }else{
//                 v.erase(v.begin()+min_index+1);
//                 v.erase(v.begin()+min_index);
//                 v.insert(v.begin()+min_index, *minelement);
//             }

//             for(auto i:v){
//                 cout<<i<<" ";
//             }
//             cout<<"\n";

//             length = v.size();
//         }
//         cout<<sum<<"\n";
//     }
// }

// 55+34+21+18+16+12+9+6+4

// 6 14 24 4 9 16 15 31 55
//  55+ 


