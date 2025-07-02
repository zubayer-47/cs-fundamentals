#include <bits/stdc++.h>
using namespace std;

class Node {
    public:
        int val;
        Node *next;

    Node(int val) {
        this->val = val;
        this->next = NULL;
    }
};

Node* get_tail_node(Node *head) {
    Node *temp = head;

    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    return temp;
}

void insert_at_tail(Node *&head, int val) {
    Node *newNode = new Node(val);

    if (head == NULL) {
        head = newNode;
        return;
    }

    Node *tail = get_tail_node(head);

    tail->next = newNode;
}

int main() {
    // Node *head = NULL;
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *tail = new Node(40);

    head->next = a;
    a->next = b;
    b->next = tail;
    
    insert_at_tail(head, 300);
    insert_at_tail(head, 400);

    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << endl;
        temp = temp->next;
    }

    return 0;
}