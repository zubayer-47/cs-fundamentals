#include <bits/stdc++.h>
using namespace std;

class Node {
    public:
        int val;
        Node *next;
};

int main() {
    Node a, b, c;

    a.val = 10;
    b.val = 20;
    c.val = 30;

    a.next = &b;
    b.next = &c;
    c.next = NULL;

    cout << "A: " << a.val << endl;
    cout << "B: " << a.next->val << endl;
    cout << "C: " << a.next->next->val << endl;

    return 0;
}