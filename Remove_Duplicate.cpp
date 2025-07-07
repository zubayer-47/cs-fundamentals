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

void print_linkedlist(Node *temp)
{
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }

    cout << endl;
}

void remove_duplicates(Node *currNode) {
    Node *temp = currNode;

    while (temp != NULL)
    {
        Node *prev = temp;
        Node *nextNode = temp->next;

        while (nextNode != NULL)
        {
            if (nextNode->val == temp->val)
            {
                Node *duplicate = nextNode;
                prev->next = nextNode->next;
                nextNode = nextNode->next;

                delete duplicate;
            }
            else
            {
                prev = nextNode;
                nextNode = nextNode->next;
            }
        }
        
        temp = temp->next;
    }
}

int main() {
    Node *head = NULL;
    Node *tail = NULL;

    int val;
    while (cin >> val && val != -1)
    {
        insert_at_tail(head, tail, val);
    }

    Node *temp = head;
    while (temp != NULL)
    {
        remove_duplicates(temp);

        temp = temp->next;
    }

    print_linkedlist(head);

    return 0;
}