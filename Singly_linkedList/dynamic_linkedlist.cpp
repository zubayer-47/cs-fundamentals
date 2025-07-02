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

int main() {
    Node* head = new Node(10);
    Node* a = new Node(12);
    Node* b = new Node(30);

    head->next = a;
    a->next = b;

    cout << "HEAD: " << head->val << endl;
    cout << "A: " << head->next->val << endl;
    cout << "B: " << head->next->next->val << endl;
    return 0;
}