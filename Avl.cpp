#include<bits/stdc++.h>
using namespace std;

class tree{
public:
    tree *left;
    int data;
    tree *right;
    int height;
};

//getting height update
int getHeight(tree *node){
    if(node==NULL){
        return 0;
    }
    return node->height;
}


//creating new node
tree *createNode(int key){

tree *temp=(tree*)malloc(sizeof(tree));
temp->left=NULL;
temp->data=key;
temp->right=NULL;
temp->height=1;

return temp;
}

//checking height
int getbalancefactor(tree *node){

if(node==NULL){
    return 0;
}
return getbalancefactor(node->left)- getbalancefactor(node->right);
}

//Rotating right
tree *RightRotation(tree *y){
tree *x=y->left;
tree *t2=x->right;

x->right=y;
y->left=t2;

y->height=max(getHeight(y->right),getHeight(y->left))+1;
x->height=max(getHeight(x->right),getHeight(x->left))+1;

return x;
}

//Rotating left
tree *LeftRotation(tree *x){
tree *y=x->right;
tree *t2=y->left;

y->left=x;
x->right=t2;

x->height=max(getHeight(x->left),getHeight(x->right))+1;
y->height=max(getHeight(y->left),getHeight(y->right))+1;

return y;
}

//Inserting node in avl tree
tree *Insert(tree *root,int key){
if(root==NULL){
    return (createNode(key));
}

if(key < root->data)
    root->left=Insert(root->left,key);
else if(key >root->data)
    root->right=Insert(root->right,key);
    return root;

 root->height=1+max(getHeight(root->left),getHeight(root->right));
int bf=getbalancefactor(root);

//Left left rotation
if(bf>1&&key<root->data){
    RightRotation(root);
}
//Right right rotation
if(bf<-1&&key<root->data){
    LeftRotation(root);
}
//Left right rotation
if(bf>1&&key>root->data){
    root->left=LeftRotation(root->left);
    RightRotation(root);
}
//Right left rotation
if(bf<-11&&key>root->data){
    root->right=RightRotation(root->right);
    LeftRotation(root);
}

return root;
}

//Max element in tree
tree *Maxnode(tree *root){
if(root==NULL){
    return 0;
}
while(root->right!=NULL){
    root=root->right;
}
cout<<"Maximum element in tree is : "<<root->data<<endl;
return root;
}

//Deleting element from tree
tree *Delete(tree*root,int data){

if(root==NULL) return root;
else if(root->data>data) root->left=Delete(root->left,data);
else if(root->data<data) root->right=Delete(root->right,data);
else
{
 //case 1:No child
 if((root->right==NULL)&&(root->left==NULL)){
    delete root;
    root=NULL;
}
//case 2:Only 1 node
else if(root->left==NULL){
 tree*temp=root;
 root=root->right;
 delete temp;
}
else if(root->right==NULL){
    tree*temp=root;
    root=root->left;
    delete temp;
}
else{
tree *temp=Maxnode(root->left);
root->data=temp->data;
root->left=Delete(root->left,temp->data);
}
}

return root;
}

void display(tree*root,int space){
if(root==NULL)
    return ;
space+=10;
display(root->right,space);
cout<<endl;
for(int i=10;i<space;i++)
    cout<<" ";
cout<<root->data<<endl;
display(root->left,space);
}

void mirror(tree*root){
if(root==NULL)
    return ;
mirror(root->right);
mirror(root->left);
swap(root->right,root->left);
}

int main(){
tree *root=NULL;
int num;
for(int i=0;i<=8;i++){
    //cout<<"Enter your number : ";
   // cin>>num;
   num=rand()/1000;
    root=Insert(root,num);
}
display(root,0);
cout<<endl;
Delete(root,18);
//mirror(root);
display(root,0);
return 0;
}
