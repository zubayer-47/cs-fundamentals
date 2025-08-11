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

int get_depth(Node *root)
{
    if (!root->left && !root->right)
    {
        return 1;
    }

    int l = 0;
    if (root->left)
        l = get_depth(root->left);

    int r = 0;
    if (root->right)
        r = get_depth(root->right);

    return max(l + 1, r + 1);
}

bool is_perfect_tree(Node *root)
{
    queue<pair<Node *, int>> q;

    q.push({root, 1});

    int maxDepth = get_depth(root);

    while (!q.empty())
    {
        pair<Node *, int> frontPair = q.front();
        q.pop();

        Node *frontNode = frontPair.first;
        int frontNodeDepth = frontPair.second;

        if (!frontNode->left && frontNodeDepth != maxDepth)
        {
            return false;
        }

        if (!frontNode->right && frontNodeDepth != maxDepth)
        {
            return false;
        }

        if (frontNode->left)
        {
            q.push({frontNode->left, frontNodeDepth + 1});
        }

        if (frontNode->right)
        {
            q.push({frontNode->right, frontNodeDepth + 1});
        }
    }

    return true;
}

int main()
{
    Node *root = binary_tree_input();

    bool isPerfect = is_perfect_tree(root);

    if (isPerfect)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
