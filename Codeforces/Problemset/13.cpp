//LINK: https://codeforces.com/contest/1313/problem/C1


#include<bits/stdc++.h>
using namespace std;
int main(){
int n;cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
for(int i=0;i<n;i++){
        int left=0,right=0;
    for(int j=0;j<n;j++){
        if(j>i){
         if(arr[j]>arr[i]){
            right++;
        }
        }else{
        if(arr[j]>arr[i]){
            left++;
        }
        }
        if(left>0 && right>0){
                arr[j]=arr[j]-(arr[j]-arr[i]);
                if(j>i){
                    right--;
                }else{
                left--;}
}
    }

}
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}

}
