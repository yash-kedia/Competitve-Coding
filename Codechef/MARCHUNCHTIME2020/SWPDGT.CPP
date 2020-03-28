#include<bits/stdc++.h>
using namespace std;
int sum(int arr[],int ar[],int i,int y){
    int rt =0;
    int rtt = 0;
    i--;
    y--;
    for(int j=i;j>=0;j--){
        rt=rt+arr[j]*pow(10,j);
    }
    for(int j=y;j>=0;j--){
        rtt=rtt+ar[j]*pow(10,j);
    }
   // cout<<rt<<endl;
   // cout<<rtt<<endl;
    return rt+rtt;
}
int main(){
    int t;cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        int c = a;
        int d = b;

        int arr[2];
        int ar[2];
        int i=0;
        while(a!=0){
            arr[i]=a%10;
            a=a/10;
            i++;
        }
        int y=0;
        while(b!=0){
            ar[y]=b%10;
            b=b/10;
            y++;
        }
        int temp=0;
        if(i==1 && y==1){
            cout<<c+d<<endl;
        }else if(i==1 && y==2){
                for(int j=0;j<2;j++){
                    swap(arr[0],ar[j]);
                    temp=max(temp,sum(arr,ar,i,y));
                    swap(arr[0],ar[j]);
                }
                cout<<temp<<endl;
        }
        else if(y==1 && i==2){
            for(int j=0;j<2;j++){
                    swap(ar[0],arr[j]);
                    temp=max(temp,sum(arr,ar,i,y));
                    swap(ar[0],arr[j]);
                }
                cout<<temp<<endl;


        }else{
            int kl=0;
            int lo=0;
            for(int k=0;k<4;k++){
                swap(arr[kl],ar[lo]);
                temp=max(temp,sum(arr,ar,i,y));
                swap(arr[kl],ar[lo]);
                if(k==1){
                    kl++;
                }
                lo++;
                if(lo==2){
                    lo=0;
                }



            }
        cout<<temp<<endl;
        }


    }
}
