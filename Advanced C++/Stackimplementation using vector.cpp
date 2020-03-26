#include<bits/stdc++.h>
using namespace std;

template <typename T>
class Stack{
  vector<T> v;
public:
  void push(T d){
    v.push_back(d);
  }

  void pop(T d){
    v.pop_back();

  }
  T top(){
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
