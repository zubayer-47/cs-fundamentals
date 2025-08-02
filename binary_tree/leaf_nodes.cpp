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

void print_leaf_nodes_reverse_order(Node *root)
{
    queue<Node *> q;

    q.push(root);

    vector<int> v;

    while (!q.empty())
    {
        Node *frontNode = q.front();
        q.pop();

        if (!frontNode->left && !frontNode->right)
        {
            v.push_back(frontNode->val);
        }

        if (frontNode->left)
        {
            q.push(frontNode->left);
        }
        if (frontNode->right)
        {
            q.push(frontNode->right);
        }
    }

    sort(v.rbegin(), v.rend());

    for (int val : v) {
        cout << val << " ";
    }
}

int main()
{
    Node *root = binary_tree_input();

    print_leaf_nodes_reverse_order(root);

    return 0;
}