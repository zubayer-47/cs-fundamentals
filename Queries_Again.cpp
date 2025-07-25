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

void insert_at_any_pos(Node *&head, int pos, int value)
{
    Node *newNode = new Node(value);

    if (head == NULL)
    {
        head = newNode;
        return;
    } else if (pos == 0) {
        newNode->next = head;
        head->prev = newNode;

        head = newNode;

        return;
    }

    Node *temp = head;

    for (int i = 0; i < pos - 1; i++)
    {
        temp = temp->next;
    }

    if (temp == NULL)
    {
        cout << "Invalid position" << endl;
        return;
    }

    if (temp->next != NULL) {
        Node *nextNode = temp->next;
        newNode->next = nextNode;
        nextNode->prev = newNode;
    }
    
    temp->next = newNode;
    newNode->prev = temp;
}

int main()
{
    Node *head = NULL;

    int q, ind = 0;
    cin >> q;

    while (q--)
    {
        int x;
        cin >> x;

        int v;
        cin >> v;

        if (x > ind)
        {
            cout << "Invalid " << endl;
            continue;
        }

        insert_at_any_pos(head, x, v);

        // left to right
        Node *temp = head;
        Node *tail = NULL;

        cout << "L -> ";
        while (temp != NULL)
        {
            
            cout << temp->val << " ";
            
            if (temp->next == NULL) {
                tail = temp;
            }

            temp = temp->next;
        }

        cout << endl;

        temp = tail;

        cout << "R -> ";
        while (temp != NULL)
        {
            cout << temp->val << " ";
            
            temp = temp->prev;
        }
        ind++;

        cout << endl;

        // cout << ind << " ind: " << endl;
    }

    return 0;
}