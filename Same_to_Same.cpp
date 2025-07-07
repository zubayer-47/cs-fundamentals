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

void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    tail = newNode;
}

int main() {

    Node *firstHead = NULL;
    Node *firstTail = NULL;

    int firstVal, firstLen = 0, secLen = 0;
    while (cin >> firstVal && firstVal != -1)
    {
        insert_at_tail(firstHead, firstTail, firstVal);
        firstLen++;
    }

    Node *secHead = NULL;
    Node *secTail = NULL;

    int secVal;
    while (cin >> secVal && secVal != -1)
    {
        insert_at_tail(secHead, secTail, secVal);
        secLen++;
    }

    if (firstLen != secLen) {
        cout << "NO" << endl;
        return 0;
    }

    Node *temp = firstHead;
    Node *temp2 = secHead;

    bool isSame = true;
    while (temp != NULL)
    {
        if (temp->val != temp2->val) {
            isSame = false;
            break;
        }

        temp = temp->next;
        temp2 = temp2->next;
    }

    if (isSame) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}