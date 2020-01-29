#include<bits/stdc++.h>
#define pb push_back
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define start_routine() int begtime = clock();
#define end_routine() int endtime = clock(); \
                      cerr << "\n\n" << "Time elapsed: " << \
                      (endtime - begtime)*1000/CLOCKS_PER_SEC << " ms\n\n"; \
                      return 0
using namespace std;
typedef long long int ll;


int main(){

int t;cin>>t;
while(t--){
    ll n,a,b,c;
    cin>>n>>a>>b>>c;
    ll arr[n];
    ll temp=10000000000;
    ll tr=0;
    for(ll i=0;i<n;i++){
        cin>>arr[i];
        }
        sort(arr,arr+n);
    for(ll i=0;i<n;i++){
    ll m=abs(b-arr[i])+c+abs(arr[i]-a);
    temp=min(temp,m);
    }
    cout<<temp<<endl;
    }

}


