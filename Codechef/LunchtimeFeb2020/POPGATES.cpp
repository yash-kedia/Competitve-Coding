//Link: https://www.codechef.com/LTIME81B/problems/POPGATES/

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
int t;cin>>t;
while(t--){
        int n,k;cin>>n>>k;

    string arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=n-1;i>=0 && k;i--){
        if(arr[i]=="H"){
            for(int j=0;j<i;j++){
                if(arr[j]=="H"){
                    arr[j]="T";
                }else{
                arr[j]="H";}

            }

        }
        k--;
        arr[i]="-1";

    }
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]=="H"){
            count++;
        }
    }
    cout<<count<<endl;

}
}
