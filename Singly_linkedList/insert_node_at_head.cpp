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

void insert_at_head(Node* &head) {
    Node *newNode = new Node(100);
    newNode->next = head;

    head = newNode;
}

int main() {
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);

    head->next = a;
    a->next = b;

    insert_at_head(head);

    cout << head->val << endl;
    cout << head->next->val << endl;
    cout << head->next->next->val << endl;
    cout << head->next->next->next->val << endl;

    return 0;
}