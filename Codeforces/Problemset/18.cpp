//Link: https://codeforces.com/contest/1324/problem/B

#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
			int arr[n];
			map<int,int> m;
				for(int i=0;i<n;i++){
					cin>>arr[i];
					m[arr[i]]++;
				}
				bool count=false;
				for(auto ij:m){
					if(ij.second>=3){
						count=true;
						break;
					}
				}
				if(!count){
					for(int i=0;i<n;i++){
						if(m[arr[i]]==2 && arr[i+1]!=arr[i]){
							count=true;
							break;
							
						}else{
							m[arr[i]]--;
						}
					}
				}
				if(count){
					cout<<"YES\n";
				}else{
					cout<<"NO\n";
				}
	}
}
