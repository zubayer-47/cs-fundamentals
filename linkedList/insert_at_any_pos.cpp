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

Node *get_curr_ind_node(Node *head, int ind)
{
    Node *temp = head;
    int i = 0;
    while (i != (ind-1))
    {
        temp = temp->next;
        i++;
    }

    return temp;
}

void insert_at_any_pos(Node *&head, int val, int ind)
{
    Node *newNode = new Node(val);

    if (head == NULL)
    {
        head = newNode;
        return;
    }

    Node *currNode = get_curr_ind_node(head, ind);

    newNode->next = currNode->next;

    currNode->next = newNode;
}

int main()
{
    // Node *head = NULL;
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);

    head->next = a;
    a->next = b;
    b->next = c;

    insert_at_any_pos(head, 300, 1);
    insert_at_any_pos(head, 400, 3);

    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << endl;
        temp = temp->next;
    }

    return 0;
}