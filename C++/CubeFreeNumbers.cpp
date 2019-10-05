#include<bits/stdc++.h>
#define ll long long  int
using namespace std;
int primes[1000005] = {0};
unordered_map<ll,ll> map;

void cubes(int n){
    for (int i=0;i<1000005;i++){
        primes[i]=true;
    }
    for (int div=2;div*div*div<n;div++){
        if(prime[div]){
            for(int multiple=1; div*div*div*multiple<=n;multiple++){
                prime[div*div*div*multiple] = false;
            }
        }
    }
    int c=1;
    map[1]=c;
    for(int i=0;i<1000005<i++){
        if(prime[i] && i<1000005){
            map[i]=++c;
        }
    }
}


int main(){
    int T;
    cubes(1000000);
    cin >> T;
    while(T--){
        int n;
        cin >> n;
        if(map.find(n)!=map.end()){
            cout<<map[n]<<"\n";
        }
        else{
            cout<<"Not Cube Free\n";
        }
    }
}