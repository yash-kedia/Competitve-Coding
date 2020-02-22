#include<bits/stdc++.h>
using namespace std;
void  bubble_Sort(int * arr,int n){
    int temp=0;
for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){

        if(*(arr+i)<*(arr+j)){
            temp=*(arr+j);
            *(arr+j)=*(arr+i);
            *(arr+i)=temp;
        }
    }
}

}
int main(){
int arr[]={1,4,3,2,1};
bubble_Sort(arr,5);
int *x=arr;
for(int i=0;i<5;i++){
    cout<<*(x+i);
}
}
