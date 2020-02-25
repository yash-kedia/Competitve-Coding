//Link:https://www.codechef.com/UWCOI20/problems/UWCOI20A

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
int t;cin>>t;
while(t--){
        ll n;cin>>n;
        ll arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr,arr+n);
        cout<<arr[n-1]<<endl;


}
}
