//level order traversal of binary tree with queue using stl
#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *left;
    Node *right;
};
void levelOrderTraverse(Node *root)
{
    if (root == NULL)
        return;
    queue<Node *> qOfNodes;
    qOfNodes.push(root);
    while (!qOfNodes.empty())
    {
        Node *currentNode = qOfNodes.front();
        qOfNodes.pop();
        cout << currentNode->data;
        qOfNodes.push(currentNode->left);
        qOfNodes.push(currentNode->right);

    }
}

int main()
{

    return 0;
}
