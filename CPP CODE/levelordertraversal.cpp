//level order traversal of binary tree with queue using stl
#include<bits/stdc++.h>
struct Node {
int data;
Node* left;
Node* right;
};
void levelOrderTraverse(Node *root){
if(root==NULL)
    return;
queue<Node*> qOfNodes;
q.push(root);
while(!q.empty())
{
    Node* currentNode=q.pop();
    cout<<currentNode->data;
    currentNode

}
}

int main()
{

return 0;
}
