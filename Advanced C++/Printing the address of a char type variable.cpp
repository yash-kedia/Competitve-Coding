#include<bits/stdc++.h>
using namespace std;
int main(){

char a='ABCDEF';
//since compiler prints the character till its get a null value while printing the address 
//so we fool the compiler by converting it into int type
cout<<(int*)&a;
}
