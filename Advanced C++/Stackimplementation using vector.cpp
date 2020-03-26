#include<bits/stdc++.h>
using namespace std;

class Stack{
  vector<int> v;
public:
  void push(int d){
    v.push_back(d);
  }

  void pop(int d){
    v.pop_back();

  }
  int top(){
    return v[v.size()-1];

  }
  bool empty(){
    return v.size()==0;

  }
  
};
int main(){

Stack s;
s.push(1);
s.push(2);
s.push(3);
s.push(4);


while(s.empty()!=true){
  cout<<s.top()<<endl;
  s.pop();
}
}
