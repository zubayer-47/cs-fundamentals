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

void delete_node_at_tail(Node *head, Node *&tail)
{
    Node *temp = head;
    while (head->next != NULL)
    {
        temp = head;
        head = head->next;
    }
    
    Node *deleteNode = temp->next;
    delete deleteNode;

    temp->next = NULL;

    tail = temp;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    while (true)
    {
        int val;

        cin >> val;

        if (val == -1)
        {
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

    delete_node_at_tail(head, tail);

    print_linkedlist(head);
    cout << endl << "tail = " << tail->val;

    return 0;
}

// or we can use delete_node_at_any_pos for deleting tail.