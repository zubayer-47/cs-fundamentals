#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    string val;
    Node *next;
    Node *prev;

    Node(string val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

void insert_at_tail(Node *&head, Node *&tail, string word)
{
    Node *newNode = new Node(word);

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

string checkBrowserHistory(Node *head, Node *&currHead, string command)
{
    if (command == "prev")
    {
        if (currHead != NULL && currHead->prev != NULL)
        {
            currHead = currHead->prev;
            return currHead->val;
        }
        else
        {

            return "";
        }
    }
    else if (command == "next")
    {
        if (currHead != NULL && currHead->next != NULL)
        {
            currHead = currHead->next;
            return currHead->val;
        }
        else
        {
            return "";
        }
    }
    else
    {
        Node *temp = head;

        while (temp != NULL)
        {
            if (temp->val == command)
            {
                currHead = temp;
                return temp->val;
            }

            temp = temp->next;
        }

        return "";
    }
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    string word;

    while (true)
    {
        cin >> word;

        if (word == "end")
            break;

        insert_at_tail(head, tail, word);
    }

    int q;
    cin >> q;

    Node *currHead = head;

    while (q--)
    {
        string command;
        cin >> command;

        if (command == "visit")
        {
            cin >> command;
        }

        string availableAddress = checkBrowserHistory(head, currHead, command);

        if (availableAddress != "")
            cout << availableAddress << endl;
        else
            cout << "Not Available" << endl;
    }

    return 0;
}