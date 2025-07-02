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

void print_linkedlist(Node *temp)
{
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
}

void delete_node_at_head(Node *&head)
{
    Node *deletedNode = head;
    head = head->next;

    delete deletedNode;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int val;
    while (cin >> val)
    {
        Node *curr = new Node(val);
        if (head == NULL)
        {
            head = curr;
            tail = curr;

            continue;
        }

        tail->next = curr;
        tail = curr;
    }

    delete_node_at_head(head);
    delete_node_at_head(head);
    delete_node_at_head(head);
    
    print_linkedlist(head);

    return 0;
}