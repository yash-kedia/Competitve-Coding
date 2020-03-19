//implementing an vectoer with array


#include<bits/stdc++.h>
using namespace std;

class Vector{
public:
  int *arr;
  int cs;
  int ms;

  Vector(int s=2){
    arr = new int[s];
    cs = 0;
    ms = s;
  }

  void push_back(int data){


    if(cs == ms){
      int *oldarr = arr;
      int oldms = ms;
      ms = 2*ms;
      //copy the elements
      arr = new int[ms];
      for(int i=0;i<oldms;i++){
        arr[i] = oldarr[i];
      }
      delete []oldarr;



    }
    arr[cs]=data;
    cs++;

  }

  bool empty(){

    if(cs == 0){
      return true;
    }else{
      return false;
    }
  }

  void pop_back(){

    if(cs>0){
      cs--;
    }


  }
  int capacity(){

      return ms;

  }

  int size(){

    return cs;

  }
  int operator[] (int index){
    return arr[index];

  }
};
int main(){
  Vector v;

v.push_back(1);
v.push_back(2);
for(int i=0;i<v.size();i++){
  cout<<v[i]<<endl;
}
cout<<v.size();
v.push_back(3);
v.push_back(4);
v.push_back(5);
cout<<v.capacity();




}
