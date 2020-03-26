#include<bits/stdc++.h>
using namespace std;

template <typename T>
class node{
public:
  int data;
  node* next;
  node(int d){
    data = d;
    next = NULL;
  }

};
class stack{

  node* head;
public:
  stack(){
    head = NULL;
  }
  void push(int data){
    if(head == NULL){
      head = new node(data);
      return;
    }
    node* n = new node;
    n->next  = head;
    head = n;
  }
  void pop(){
    if(head == NULL){
      return ;
    }
    node* temp = hrad;
    head = head->next;
    delete temp;

  }
  int top(){
    return head->data;
  }
  bool empty(){
    return head == NULL;
  }
}
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
