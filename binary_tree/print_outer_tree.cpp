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

Node *binary_tree_input()
{
    int rootVal;

    cin >> rootVal;

    Node *root = new Node(rootVal);

    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        Node *rootNode = q.front();
        q.pop();

        int leftVal, rightVal;

        cin >> leftVal;
        cin >> rightVal;

        if (leftVal != -1)
        {
            Node *lNode = new Node(leftVal);
            rootNode->left = lNode;
            q.push(lNode);
        }

        if (rightVal != -1)
        {
            Node *rNode = new Node(rightVal);
            rootNode->right = rNode;
            q.push(rNode);
        }
    }

    return root;
}

void print_outer_left_tree(Node *root, vector<int> &v)
{
    if (!root->left && !root->right)
    {
        v.push_back(root->val);
        return;
    }

    if (root->left)
        print_outer_left_tree(root->left, v);
    else if (root->right)
        print_outer_left_tree(root->right, v);

    v.push_back(root->val);
}

void print_outer_right_tree(Node *root, vector<int> &v)
{
    if (!root->left && !root->right)
    {
        v.push_back(root->val);
        return;
    }

    if (root->right)
    {
        print_outer_right_tree(root->right, v);
    }
    else if (root->left)
        print_outer_right_tree(root->left, v);

    v.push_back(root->val);
}

int main()
{
    Node *root = binary_tree_input();
    vector<int> left, right;

    if (root->left)
        print_outer_left_tree(root->left, left);
    if (root->right)
        print_outer_right_tree(root->right, right);

    for (int v : left)
    {
        cout << v << " ";
    }

    cout << root->val << " ";

    reverse(right.begin(), right.end());

    for (int v : right)
    {
        cout << v << " ";
    }

    return 0;
}
