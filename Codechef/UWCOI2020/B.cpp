//Link: https://www.codechef.com/UWCOI20/problems/UWCOI20B

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
int t;
cin>>t;
while(t--){
    ll n;
    cin>>n;
    ll arr[n];
    map<ll,ll> m;
    ll odd=0;
    for(ll i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]&1){
            odd++;
        }
    }
    cout<<odd*(n-odd)<<endl;
}
}
