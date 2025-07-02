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

void delete_node_at_any_pos(Node *temp, int ind)
{
    for (int i = 1; i <= ind; i++)
    {
        if (i == ind)
        {
            Node *prevNode = temp;
            Node *deleteNode = temp->next;
            Node *nextNode = temp->next->next;

            prevNode->next = nextNode;

            delete deleteNode;
            break;
        }

        temp = temp->next;
    }
    
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    while (true)
    {
        int val;

        cin >> val;

        if (val == -1) {
            break;
        }

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

    int ind;
    cin >> ind;

    delete_node_at_any_pos(head, ind);

    print_linkedlist(head);

    return 0;
}