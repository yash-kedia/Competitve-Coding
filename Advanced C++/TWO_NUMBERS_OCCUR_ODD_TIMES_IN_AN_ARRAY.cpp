#include<bits/stdc++.h>
using namespace std;
bool is_bit_set(int n,int k){
	
	int y = n&(1<<k);
	return y!=0;
}
int main(){
	int n;
	cin>>n;
	int arr[n];
	int ans = 0;
	for(int i=0;i<n;i++){cin>>arr[i];
		ans = ans ^ arr[i];
	}
	//  1^0 = 1
	// 0^1 = 1
	// 0^ 0 =0
	// 1^1 = 0
	//same bits results in 0 and diff bits results in 1
	
	//we can see that the resultant xor which we get will have 1 in its bianry representation at an index k if both the bits are diff in that position k in x and y
	
	//and since all other numbers are present in duplicates they will have wither 0 or 1 at index k in their binary rep 
	
	//hence if we differentiate the array into members with 1 at index k and 0 at index k and we take a xor of these elements then we can get the respective two elements which were present singly in the array
	
	
	//hence lets implement it
	
	int k =0;
	while(is_bit_set(n,k) == 0){
		k++;
	}
	int ar[2] = {0};
	for(int i=0;i<n;i++){
		ar[is_bit_set(arr[i],k)]^=arr[i];
	}
	cout<<ar[0]<<" "<<ar[1];
	
	
}
