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

    Node *head = NULL;
    Node *tail = NULL;

    int v;
    while (cin >> v)
    {
        Node *curr = new Node(v);
        if (head == NULL) {
            head = curr;
            tail = curr;
        }
        else
        {
            tail->next = curr;
            tail = curr;
        }
    }

    int count = 0;
    Node *temp = head;
    while (temp)
    {
        count++;

        temp = temp->next;
    }

    cout << count;

    return 0;
}