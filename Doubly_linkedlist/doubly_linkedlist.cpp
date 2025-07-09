#include <bits/stdc++.h>
using namespace std;

class Node {
    public:
        int val;
        Node *next;
        Node *prev;

    Node(int val) {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

void print_linkedlist(Node *head) {
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
}

void print_backward(Node *tail) {
    Node *temp = tail;

    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->prev;
    }
}

int main() {
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *tail = new Node(40);

    head->next = a;
    a->prev = head;
    a->next = b;
    b->prev = a;
    b->next = tail;
    tail->prev = b;

    print_linkedlist(head);
    cout << endl;
    print_backward(tail);

    return 0;
}