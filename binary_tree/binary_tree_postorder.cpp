#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *left;
    Node *right;

    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

void postorder(Node *root)
{
    if (root == NULL)
        return;

    // left -> right -> root
    postorder(root->left);
    postorder(root->right);
    cout << root->val << " ";
}

int main()
{
    Node *root = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(40);
    Node *c = new Node(30);
    Node *d = new Node(60);
    Node *e = new Node(50);
    Node *f = new Node(70);

    // linking
    root->left = a;
    root->right = c;

    c->left = e;

    a->left = b;
    b->left = f;
    b->right = d;

    postorder(root);

    return 0;
}