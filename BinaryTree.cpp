#include<bits/stdc++.h>
using namespace std;

class tree{
public:
    int data;
     tree *left;
    tree *right;
};

tree* Newnode(int data){
tree* node=new tree();
node->data=data;
node->left=node->right=NULL;
return node;
}

//Inserting value in tree
tree *createNode(tree *root,int data){
if(root==NULL){
    root=Newnode(data);
    return root;
}else if(data<=root->data){
 root->left=createNode(root->left,data);
}else {
 root->right=createNode(root->right,data);
}
return root;
}

//Displaying value
int print(tree *root){
tree *head=root;
if(root==NULL){
    return 0;
}
cout<<head->data<<endl;
print(head->left);
print(head->right);

return 0;
}

//Preorder traversal
int Preorder(tree *root){
if(root==NULL){
    return 0;
}
cout<<root->data<<endl;
Preorder(root->left);
Preorder(root->right);
return 0;
}

//Inorder traversal
int Inorder(tree *root){
if(root==NULL){
    return 0;
}
Inorder(root->left);
cout<<root->data<<endl;
Inorder(root->right);
return 0;
}

//Postorder traversal
int Postorder(tree *root){
if(root==NULL){
    return 0;
}
Postorder(root->left);
Postorder(root->right);
cout<<root->data<<endl;
return 0;
}

//Min element in tree
int Minnode(tree *root){
if(root==NULL){
    return 0;
}

while(root->left!=NULL){
    root=root->left;
}
cout<<"Minimum element in tree is : "<<root->data<<endl;
return 0;
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

//Number of node
int NoOfNode(tree *root){
if(root==NULL){
    return 0;
}
return(1+NoOfNode(root->left)+NoOfNode(root->right));
}

//Sum of node
int SumOfNode(tree *root){
if(root==NULL){
    return 0;
}
return (root->data+SumOfNode(root->left)+SumOfNode(root->right));
}

//Height of tree
int Height(tree *root){
if(root==NULL){
    return 0;
}
int h1=Height(root->left);
int h2=Height(root->right);
return(1+max(h1,h2));
}

//Search element in tree
int Search(tree *root,int key){
if(root==NULL){
    return 0;
}
if(root->data==key){
    cout<<"Data found"<<endl;
    return 0;
}else if(root->data>key){
Search(root->left,key);
}else{
Search(root->right,key);
}
return 0;
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



int main(){
    tree *root=NULL;
    for(int i=0;i<=9;i++){
        int data;
        //cout<<"Enter your data : ";
        cin>>data;
       // data=rand()/1000;
        root=createNode(root,data);
    }
    //cout<<"Preorder"<<endl;
    //Preorder(root);
    //cout<<"Inorder"<<endl;
    //Inorder(root);
    //cout<<" Postorder"<<endl;
    //Postorder(root);
    // Minnode(root);
    //Maxnode(root);
    //cout<<NoOfNode(root)<<endl;
    //cout<<SumOfNode(root)<<endl;
    //cout<<Height(root)<<endl;
    //Search(root,180);
    //createNode(root,24);
    //display(root,0);
    cout<<endl;
    // Delete(root,18);
   // mirror(root);
    display(root,0);
    //print(root);

return 0;
}
