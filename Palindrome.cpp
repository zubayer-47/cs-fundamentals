#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node *prev;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);

    if (head == NULL)
    {
        head = newNode;
        tail = newNode;

        return;
    }

    newNode->prev = tail;
    tail->next = newNode;

    tail = newNode;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int val;
    while (cin >> val && val != -1)
    {
        insert_at_tail(head, tail, val);
    }

    if (head && head->next == NULL) {
        cout << "YES" << endl;

        return 0;
    }

    Node *fT = head;
    Node *lT = tail;
    bool isPalindrome = true;

    while (true)
    {
        if (fT->val != lT->val) {
            isPalindrome = false;
            break;
        }
        
        fT = fT->next;
        lT = lT->prev;

        if (fT == lT || fT == lT->next)
        {
            break;
        }
    }

    if (isPalindrome) {
        cout << "YES" << endl;
    }else {
        cout << "NO" << endl;
    }

    return 0;
}