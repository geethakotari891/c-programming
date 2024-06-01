//Traversals on binary tree

#include<stdio.h>
#include<stdlib.h>
struct Treenode {
    int data;
    struct Treenode *left;
    struct Treenode *right;
};
typedef struct Treenode TreeNode;
TreeNode* createNewNode(int val){
    TreeNode *node = (TreeNode *)malloc(sizeof(TreeNode));
    node->data = val;
    node->left = NULL;
    node->right = NULL;
    return node;
}
void preOrder(TreeNode *root){
    if(root != NULL){
        printf("%d ",root->data);
        preOrder(root->left);
        preOrder(root->right);
    }
}
void inOrder(TreeNode *root){
    if(root != NULL){
        inOrder(root->left);
        printf("%d ",root->data);
        inOrder(root->right);
    }
}
void postOrder(TreeNode *root){
    if(root != NULL){
        postOrder(root->left);
        postOrder(root->right);
        printf("%d ",root->data);
    }
}
void levelOrder(TreeNode *root){
    TreeNode * q[500];
    int front = 0;
    int rear = 0;
    q[rear] = root;
    rear++;
    while(front != rear){
        TreeNode *dn = q[front++];
        printf("%d ",dn->data);
        if(dn->left != NULL){
            q[rear] = dn->left;
            rear++;
        }
        if(dn->right != NULL){
            q[rear] = dn->right;
            rear++;
        }
        free(dn);
    }
}
int main (){
    TreeNode *node1 = createNewNode(10);
    TreeNode *node2 = createNewNode(20);
    TreeNode *node3 = createNewNode(30);
    TreeNode *node4 = createNewNode(40);
    TreeNode *node5 = createNewNode(50);
    TreeNode *node6 = createNewNode(60);
    TreeNode *node7 = createNewNode(70);
    
    node1->left = node2;
    node1->right = node3;
    
    node2->left = node4;
    node2->right = node5;
    
    node3->left = node6;
    node3->right = node7;
    
    TreeNode *root = node1;
    preOrder(root);
    printf("\n");
    inOrder(root);
    printf("\n");
    postOrder(root);
    printf("\n");
    levelOrder(root);
}