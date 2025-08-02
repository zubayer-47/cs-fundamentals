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

void print_x_level_nodes(Node *root)
{
    int x;
    cin >> x;

    queue<pair<Node *, int>> q;

    q.push({root, 0});

    vector<int> v;

    bool isInvalid = true;

    while (!q.empty())
    {
        pair<Node *, int> frontPair = q.front();
        q.pop();

        if (frontPair.first->left)
        {
            q.push({frontPair.first->left, frontPair.second + 1});
        }
        if (frontPair.first->right)
        {
            q.push({frontPair.first->right, frontPair.second + 1});
        }

        if (frontPair.second != x)
        {
            continue;
        }

        cout << frontPair.first->val << " ";

        isInvalid = false;
    }

    if (isInvalid)
        cout << "Invalid";
}

int main()
{
    Node *root = binary_tree_input();

    print_x_level_nodes(root);

    return 0;
}