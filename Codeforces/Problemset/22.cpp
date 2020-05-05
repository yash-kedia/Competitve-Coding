//Link:  https://codeforces.com/contest/1348/problem/A

#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef long double ld;
typedef unsigned long long uli;

#define fastio ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define test ll t;cin>>t;while(t--)
#define nin ll n;cin>>n;
#define ain ll n;cin>>n;ll arr[n];for(ll i=0;i<n;i++){cin>>arr[i];}
#define out(arr,n) for(ll i=0;i<n;i++){cout<<arr[i]<<" ";}cout<<'\n';
#define fr(i,n) for(ll i=0;i<n;i++)
#define fri(i,l,n) for(ll i=l;i<n;i++)
#define sr(a,n) sort(a,a+n);
#define gr(a,n) sort(a,a+n,greater<ll>());
#define cen cout<<endl;

#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define vll vector<ll>
#define pll pair<ll,ll>


const ll MAX = 1e5 + 10;
const ll mod = 1e9 + 7;


int main() {
    fastio;
    test{
        nin;
        ll s = pow(2, n);
        ll ss = 0;
        ll k = n / 2 - 1;
        for (ll i = 1; i <= k; i++) {
            s += pow(2, i);
        }

        for (ll i = n / 2; i < n; i++) {
            ss += pow(2, i);
        }
        cout << abs(s - ss);
        cen;
    }
    //test{ ain;}







}
