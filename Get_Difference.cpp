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

    int val = 0;
    while (cin >> val && val != -1)
    {
        Node *newNode = new Node(val);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
            continue;
        }

        tail->next = newNode;
        tail = newNode;
    }

    
    Node *temp = head;
    int minimum = INT_MAX, maximum = INT_MIN;
    while (temp != NULL)
    {
        maximum = max(maximum, temp->val);
        minimum = min(minimum, temp->val);
        
        temp = temp->next;
    }
    cout << (maximum - minimum) << endl;

    return 0;
}