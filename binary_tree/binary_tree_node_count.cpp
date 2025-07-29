#include <bits/stdc++.h>
using namespace std;

class Node {
    public:
        int val;
        Node *left;
        Node *right;

    Node(int val) {
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

int tree_count(Node* root) {
    if (root == NULL) {
        return 0;
    }

    int lCount = tree_count(root->left);
    int rCount = tree_count(root->right);

    return lCount + rCount + 1;
}

int main() {

    Node *root = binary_tree_input();
    int count = tree_count(root);

    cout << count;

    return 0;
}