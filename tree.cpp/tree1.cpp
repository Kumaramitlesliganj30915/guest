#include <iostream>
using namespace std;
class treeNode
{

public:
    int data;
    treeNode *left;
    treeNode *right;
    treeNode(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};
treeNode *buildTree(treeNode *root)
{

    int data;
    cout << "enter the data" << endl;
    cin >> data;
    root = new treeNode(data);
    if (data == -1)
    {
        return NULL;
    }
    cout << "Enter data for inserting in left of" << data << endl;
    root->left = buildTree(root->left);
    cout << "Enter data for inserting in rightof " << data << endl;
    root->right = buildTree(root->right);
    return root;
}

int main()
{
    treeNode *root = NULL;
    root = buildTree(root);
    return 0;
}