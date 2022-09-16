#include<iostream>
#include<queue>
//#include<bits/stdc++.h>
using namespace std;

//Creating a Node 
struct TreeNode
{
    int data;
    struct TreeNode* left;
    struct TreeNode* right;
    
    //Constructor to initialise the value of a node
    TreeNode(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};

//Function to traverse in level order
void levelOrder(struct TreeNode* root){
    queue<TreeNode *> Q;
    
    if(root==NULL){
        return;
    }
    
    struct TreeNode* temp;
    Q.push(root);

    while(!Q.empty()){
        temp=Q.front();
        Q.pop();
        
        if(temp->left!=NULL){
            Q.push(temp->left);
        }
        if(temp->right!=NULL){
            Q.push(temp->right);
        }
        cout<<temp->data<<" ";
    }

}
int main(){
    /*      1 
           / \
          2   3
         / \ / \
        4  5 6  7
    */
   //level 1
    struct TreeNode* root= new TreeNode(1);

    //level 2
    root->left= new TreeNode(2);
    root->right= new TreeNode(3);

    //level 3
    root->left->left= new TreeNode(4);
    root->left->right= new TreeNode(5);
    root->right->left= new TreeNode(6);
    root->right->right= new TreeNode(7);

    cout<<"Tree has been created successfully"<<endl;

    //Accessing the elements of a tree
    cout<<root->left->data<<endl;

    cout<<"Level Order traversal";
    levelOrder(root);

    return 0;

}
