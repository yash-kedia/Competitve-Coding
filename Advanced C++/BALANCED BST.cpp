#include<bits/stdc++.h>
using namespace std;

class node{
public:
  int data;
  node* left;
  node* right;
  node(int d){
    data = d;
    left = right = NULL;
  }

};

node* insert(node* root,int data){

  if(root == NULL){
    root = new node(data);
    return root;

  }
  if(data<=root->data){
    //data shoulde be inserted in left subtree
    root->left=insert(root->left,data);
  }
  else{
      root->right = insert(root->right,data);
    //data inserted in right side of subtree
    }
  return root;
}

node* create(node* root){
  node* root = NULL;
  int data;
  cin>>data;
  while(data!=-1){
    root = insert(root,data);
    cin>>data;
  }
  return root;


}

bool isbst(node* root,int min=INT_MIN,int max=INT_MAX){

  if(root == NULL){
    return true;
  }

  if(root->data<=min && max>=root->data && isbst(root->left,min,root->data) && isbst(root->right,root->data,max)){

return true;
    
  }else{
    return false;
  }

}
int main(){

node* root = NULL;

root = create(root);

}
