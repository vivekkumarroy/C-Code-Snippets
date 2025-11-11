/* Given a preOrder and inOrder traversal of a binary tree your task is to print the postOrder traversal of the tree .You are required to complete the function printPostOrder which prints the node of the tree in post order fashion .

Examples:

Input: inOrder[] = [4, 2, 5, 1, 3, 6], preOrder[] = [1, 2, 4, 5, 3, 6]
Output: "4 5 2 6 3 1"
Constraints:
1 <=Number of nodes<= 105   */




#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;
    Node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};

Node* createTree(vector<int>& pre, int s1, int e1, vector<int>& in, int s2, int e2, unordered_map<int,int> &hm){
    if(s1 > e1){
        return NULL;
    }
    Node * root = new Node(pre[s1]); 
    int x = hm[pre[s1]];
    int e = x - s2;
    root->left = createTree(pre, s1+1, s1+e, in, s2, x-1, hm);
    root->right = createTree(pre, s1+1+e, e1, in, x+1, e2, hm);
    return root;
}

void printPostorder(Node* root){
    if(root == NULL){
        return;
    }
    printPostorder(root->left);
    printPostorder(root->right);
    cout << root->data << " ";
}

void printPostOrder(vector<int>& in, vector<int>& pre) {
    unordered_map<int,int> hm;
    int n = in.size();
    for(int i = 0; i < n; i++){
        hm[in[i]] = i;
    }
    Node* root = createTree(pre, 0, n-1, in, 0, n-1, hm);
    printPostorder(root);
}
