#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    int arr[n];


    for(int i=0;i<n;i++){
            cin>>arr[i];
    }
    int temp = -1;
    bool tr = true;
    int d = 0;
    for(int i=0;i<n;i++){
        if(arr[i]==1){
            d = i - temp;
            if(temp == -1){
                d++;
            }
            if(d<6 && temp!=-1){
                tr = false;
                cout<<"NO\n";
                break;
            }
            temp = i;
        }
    }
    if(tr){
        cout<<"YES\n";
    }

}
}
