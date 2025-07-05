#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void insert_at_tail(Node *&head, Node *&tail, int val) {
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    tail = newNode;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        Node *head = NULL;
        Node *tail = NULL;

        int val;
        while (cin >> val && val != -1)
        {
            insert_at_tail(head, tail, val);
        }

        int target, ind = 0;
        cin >> target;

        Node *temp = head;

        while (temp != NULL && temp->val != target)
        {
            temp = temp->next;
            ind++;
        }

        if (temp == NULL)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << ind << endl;
        }
    }

    return 0;
}