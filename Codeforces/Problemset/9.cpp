
//Link: https://codeforces.com/contest/1296/problem/B

#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL)
typedef long long int ll;
int main(){
    fast_cin();
    ll t;cin>>t;
    while(t--){
        ll n;cin>>n;
            ll sum=n/10;
            ll y=n%10;
            ll u=sum+y;
            n=n+sum;
        while(u/10!=0){
            ll h=u/10;
            ll j=u%10;
            u=h+j;
            n=n+h;

        }
        cout<<n<<endl;

}
}
