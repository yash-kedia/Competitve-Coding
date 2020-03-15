//Link: https://codeforces.com/contest/1324/problem/A

#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
			int arr[n];
			int temp=-1;
				for(int i=0;i<n;i++){
					cin>>arr[i];
					temp=max(temp,arr[i]);
				}
				int count=0;
				for(int i=0;i<n;i++){
					if((temp-arr[i])%2==0){
						count++;
					}
				}
				if(count==n){
					cout<<"YES\n";
				}else{
					cout<<"NO\n";
				}
	}
}
