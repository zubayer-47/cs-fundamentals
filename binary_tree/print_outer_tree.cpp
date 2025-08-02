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

void print_outer_left_tree(Node *root, vector<int> &left)
{
    if (!root->left && !root->right)
    {
        left.push_back(root->val);
        return;
    }
    
    print_outer_left_tree(root->left, left);
    left.push_back(root->val);
}

void print_outer_right_tree(Node *root, vector<int> &right)
{
    if (!root->left && !root->right)
    {
        right.push_back(root->val);
        return;
    }

    right.push_back(root->val);

    print_outer_right_tree(root->right, right);
}

int main()
{
    Node *root = binary_tree_input();

    vector<int> left, right;

    print_outer_left_tree(root, left);
    print_outer_right_tree(root, right);

    for (int l:left) {
        cout << l << " ";
    }

    for (int i = 0; i < right.size(); i++)
    {
        if (i==0) continue;

        cout << right[i] << " ";
    }

    return 0;
}