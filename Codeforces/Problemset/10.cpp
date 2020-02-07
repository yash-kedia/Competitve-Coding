//Link: https://codeforces.com/contest/1183/problem/A

#include <bits/stdc++.h>
using namespace std;
long long int sum_of_digits(long long int n){
    long long int sum=0;
    long long int dd=0;
while(n!=0){
        dd=n%10;
sum=sum+dd;
    n=n/10;
}
return sum;
}
int main() {
    long long int n;cin>>n;
    long long int g=0;
    long long int d=n;
    while(n!=0){
            long long int f=n%10;
    g=g+f;
        n=n/10;
    }
    if(g%4==0){
        cout<<d;
        //cout<<"here"<<endl;
    }else{
        d++;
        while(sum_of_digits(d)%4!=0){
            d++;
        }
        cout<<d<<endl;
    }



}
