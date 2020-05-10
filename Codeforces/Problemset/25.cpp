

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
        ll n;
        ll k;
        cin >> n >> k;
        ll jn = 2 * (k - 1);
        ll jh = n - jn;
        ll jk = n - k + 1;
        if (n < k) {
            cout << "NO\n";
        } else if (jk > 0 && jk & 1) {
            cout << "YES\n";
            cout << jk << " ";
            fr(i, k - 1) {
                cout << 1 << " ";
            }
            cen;

        } else if (jh > 0 && jh % 2 == 0) {
            cout << "YES\n";
            cout << jh << " ";
            fr(i, k - 1) {
                cout << 2 << " ";
            }
            cen;
        } else{
            cout << "NO\n";
        }
    }
    //test{ ain;}







}
