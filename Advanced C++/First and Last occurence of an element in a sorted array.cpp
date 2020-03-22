#include<bits/stdc++.h>
using namespace std;
int main(){
	
	
	int t;cin>>t;while(t--){
		int n;cin>>n;
		int arr[n];
		int ele;
		cin>>ele;
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		int occur;
		cin>>occur;
		//1 for first and 2 for last
		bool first = false;
		bool last = false;
		
		if(occur == 1){
			first = true;
		}else if(occur == 2){
			last = false;
		}
		//sorting the array
		sort(arr,arr+n);
		
		int lo=0;
		int hi=n-1;
		int fir =-1;
		int las = -1;
		while(lo<=hi){
			
			int mid = lo + (hi-lo)/2;
			
			if(arr[mid] == ele){
				if(first){
				hi = mid;
				fir = mid;
				}else{
					lo = mid;
					las = mid;
				}
			}else if( arr[mid] > ele ){
				hi = mid-1;
				
			}else{
				lo = mid + 1;
			}
			if(lo == hi){
				break;
			}
			
		}
		cout<<max(fir,las);
	}
}
