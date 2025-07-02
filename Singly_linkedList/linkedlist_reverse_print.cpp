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

void print_linkedlist(Node* temp) {
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
}

void reverse_print_linkedlist(Node* temp) {
    if (temp == NULL) {
        return;
    }

    reverse_print_linkedlist(temp->next);
    cout << temp->val << " ";
}

int main() {
    Node *head = NULL;
    Node *tail = NULL;

    int val;
    while (cin >> val)
    {
        Node *curr = new Node(val);
        if (head == NULL) {
            head = curr;
            tail = curr;

            continue;
        }

        tail->next = curr;
        tail = curr;
    }

    reverse_print_linkedlist(head);

    return 0;
}