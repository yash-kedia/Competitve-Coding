//Concatenating two arrays without using loop



#include<bits/stdc++.h>
using namespace std;

void concatenate(int arr,int ar,int m,int n){
 memcpy(arr1 + m, arr2, sizeof(arr2));

}


int main(){
//an array of integers
	int arr[]={1,2,3,4};				        
//array that needs to be appended to the previous array
	int ar[]={5,6,7};
//calculating size of both arrays
	int m=sizeof(arr)/sizeof(arr[0]);
	int n=sizeof(ar)/sizeof(arr[0]);
//calling function to concatenate the two arrays
	concatenate(arr,ar,m,n);
	
for(auto ij:arr){
cout<<ij<<" ";
}

}


