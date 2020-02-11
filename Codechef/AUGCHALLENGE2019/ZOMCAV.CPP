//Link https://www.codechef.com/AUG19B/problems/ZOMCAV/


#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

int main(){
	int t;cin>>t;
	while(t--){
		ll n;cin>>n;
		ll arr[n],ar[n];
		for(ll i=0;i<n;i++){
			cin>>arr[i];
		}
		for(ll i=0;i<n;i++){
			cin>>ar[i];
		}
		ll art[n+1]={0};
		for(ll i=1;i<=n;i++){
			ll s=i-arr[i-1];

			ll r=i+arr[i-1];

			if(s<=0){s=0;art[s]+=1;}
			else{
                art[s-1]+=1;
			}
				if(r>n){r=n;}

				art[r]-=1;

		}

		for(ll i=1;i<=n+1;i++){

            art[i]+=art[i-1];
		}


		ll count=0;
		sort(art,art+n);
		sort(ar,ar+n);

		for(ll i=0;i<n;i++){
			if(art[i]==ar[i]){
				count++;
			}
		}
		//cout<<count<<endl;

		if(count==n){cout<<"YES"<<endl;}
		else{
			cout<<"NO"<<endl;
		}

	}

}
/*
1
5
3 2 1 2 10
2 3 5 5 5
*/
