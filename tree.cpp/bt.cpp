#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class BinaryTreeNode
{
public:
    int data;
    BinaryTreeNode *left;
    BinaryTreeNode *right;
    BinaryTreeNode(int data)
    {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};
BinaryTreeNode *takeInputLevelwise()
{
    int rootData;
    cout << "Enter the root data"
         << " ";
    cin >> rootData;
    if (rootData == -1)
    {
        return NULL;
    }
    BinaryTreeNode *root = new BinaryTreeNode(rootData);
    queue<BinaryTreeNode *> pendingNodes;
    pendingNodes.push(root);
    while (!pendingNodes.empty())
    {
        BinaryTreeNode *front = pendingNodes.front();
        pendingNodes.pop();
        cout << "Enter the data for left child" << front->data;
        int leftchild;
        cin >> leftchild;
        if (leftchild != -1)
        {
            BinaryTreeNode *child = new BinaryTreeNode(leftchild);
            front->left = child;
            pendingNodes.push(child);
        }
        cout << "Enter the data for right child" << front->data;
        int rightChild;
        cin >> rightChild;
        if (rightChild != -1)
        {
            BinaryTreeNode *child = new BinaryTreeNode(rightChild);
            front->right = child;
            pendingNodes.push(child);
        }
    }
}
BinaryTreeNode *takeInput()
{
    int rootdata;
    cout << "Enter the data"
         << " ";
    cin >> rootdata;
    if (rootdata == -1)
    {
        return NULL;
    }
    BinaryTreeNode *root = new BinaryTreeNode(rootdata);
    BinaryTreeNode *leftChild = takeInput();
    BinaryTreeNode *rightChilde = takeInput();
    root->left = leftChild;
    root->right = rightChilde;
    return root;
}
void printTree(BinaryTreeNode *root)
{
    if (root == NULL)
    {
        return;
    }
    //   cout<<root->data<<" ";
    //   cout<<endl;
    cout << root->data;
    if (root->left != NULL)
    {
        cout << "L" << root->left->data << " ";
    }
    if (root->right != NULL)
    {
        cout << "r" << root->right->data << " ";
    }
    cout << endl;
    printTree(root->left);

    printTree(root->right);
}
int main()
{
    BinaryTreeNode *ans = takeInputLevelwise();
    printTree(ans);
}
