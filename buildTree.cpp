#include<bits/stdc++.h>
using namespace std;

// Creation of node
class Node
{
    public:
    int data;
    Node* left;
    Node* right;
    
    Node(int data)
    {
        this -> data = data;
        this -> left = NULL;
        this -> right = NULL;
    }
};

// Building a tree
Node* buildTree(Node* root)
{
    cout << "Enter data: " << endl;
    int data;
    cin >> data;
    root = new Node(data);
    if(data == -1)  return NULL;
    cout << "Enter data for inserting left of " << data << endl;
    root -> left = buildTree(root -> left);
    cout << "Enter data for inserting right of " << data << endl;
    root -> right = buildTree(root -> right);
}

int main()
{
    Node* root = NULL;
    root = buildTree(root);
    return 0;
}
