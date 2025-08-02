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

int level_order(Node *root, int searchVal)
{
    queue<pair<Node *, int>> pairQ;

    pairQ.push({root, 1});

    while (!pairQ.empty())
    {
        Node *frontNode = pairQ.front().first;
        int level = pairQ.front().second;
        pairQ.pop();

        if (frontNode->val == searchVal)
            return level;

        // cout << frontNode->val << " " << level << endl;

        pair<Node *, int> pair;

        if (frontNode->left)
        {
            pair = {frontNode->left, level + 1};
            pairQ.push(pair);
        }

        if (frontNode->right)
        {
            pair = {frontNode->right, level + 1};
            pairQ.push(pair);
        }
    }

    return 0;
}

int main()
{
    Node *root = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);
    Node *e = new Node(60);

    root->left = a;
    root->right = b;

    a->left = c;
    a->right = d;
    b->left = e;

    int nodeLevel = level_order(root, 90);
    cout << nodeLevel;

    return 0;
}