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

    // cout << "working";
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

int tree_leaf_count(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }

    if (root->left == NULL && root->right == NULL)
    { // leaf node found
        return 1;
    }

    int l = tree_leaf_count(root->left);
    int r = tree_leaf_count(root->right);

    return l + r;
}
// int tree_leaf_count(Node *root, int *count)
// {
//     if (root == NULL)
//     {
//         return 0;
//     }

//     if (root->left == NULL && root->right == NULL)
//     { // leaf node found
//         *count += 1;
//     }

//     tree_leaf_count(root->left, count);
//     tree_leaf_count(root->right, count);

//     return *count + 1;
// }

int main()
{
    // int count = 0;

    Node *root = binary_tree_input();
    // tree_leaf_count(root, &count);
    int count = tree_leaf_count(root);

    cout << count;

    return 0;
}