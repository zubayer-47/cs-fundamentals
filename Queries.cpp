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

    cout << endl;
}

void delete_node_at_any_pos(Node *&head, int ind)
{
    if (head == NULL)
        return;

    if (ind == 0) {
        Node *deleteNode = head;
        head = head->next;

        delete deleteNode;
        return;
    }

    Node *temp = head;
    
    for (int i = 0; i < ind; i++)
    {
        if (temp == NULL || temp->next == NULL)
        {
            return;
        }
        temp = temp->next;
    }


    cout << "delete: " << temp->next->val << endl;

    Node *deleteNode = temp->next;
    if (deleteNode == NULL)
        return;

    temp->next = deleteNode->next;
    delete deleteNode;
}

void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }

    if (tail == NULL)
    {
        // Fallback in case tail is accidentally NULL
        Node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    tail = newNode;
}

void insert_at_head(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);

    if (tail == NULL) {
        tail = head;
    }

    newNode->next = head;
    head = newNode;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int q;
    cin >> q;

    while (q--)
    {
        int x, v;
        cin >> x >> v;

        if (x == 0) {
            insert_at_head(head, tail, v);
        }
        else if (x ==1) {
            insert_at_tail(head, tail, v);
        }
         else if (x == 2) {
            delete_node_at_any_pos(head, v);
        }
        print_linkedlist(head);
    }

    return 0;
}