#include<bits/stdc++.h>
using namespace std;

#define ll long long int

ll reverse(ll num){
    ll res = 0, remainder; 
    while(num != 0)
    {
        remainder = num%10;
        res = res*10 + remainder;
        num /= 10;
    }
    return res;
}


ll power(ll x, ll y)  {  
    ll temp;  
    if(y == 0)  
        return 1;  
    temp = power(x, y / 2);  
    if (y % 2 == 0)  
        return temp * temp;  
    else
    {  
        if(y > 0)  
            return x * temp * temp;  
        else
            return (temp * temp) / x;  
    }  
} 


int main(){
    ll T;
    cin >> T;
    while(T--){
        ll n, k;
        cin >> n >> k;
        ll max = power(10,n);
        ll count=0;
        for(ll i=0;i<max;i+=k){
            ll temp = reverse(i);
            if (temp%k==0){
                count++;
            }
            count = count%1000000007;

        }
        cout<<count%1000000007<<endl;
    }
}