//Link:   https://codeforces.com/contest/1249/problem/B1



#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        int ar[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];


        }
        for(int i=0;i<n;i++){

            if(arr[i]!=i+1){
                    int count=2;
                    int temp=arr[arr[i]-1];
                    //cout<<temp;
                    while(temp!=i+1){
                          //cout<<temp<<" ";
                        temp=arr[temp-1];
                        //cout<<temp<<endl;


                        count++;
                    }
                    ar[i]=count;

            }
            else{
                    ar[i]=1;
            }

            }

        for(int i=0;i<n;i++){
           cout<<ar[i]<<" ";
        }
        cout<<endl;
    }

}
