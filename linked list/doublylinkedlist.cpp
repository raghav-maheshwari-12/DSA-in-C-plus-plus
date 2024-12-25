#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *prev;
    Node *next;

    // constructor
    Node(int d)
    {
        this->data = d;
        this->prev = NULL;
        this->next = NULL;
    }
    ~Node()
    {
        int value = this->data;
        if (next != NULL)
        {
            next = NULL;
            delete next;
        }
        cout << "memory is free nor node with data " << value << endl;
    }
};

// traversing a linked list
void print(Node *&head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

// length of linked list
int getLength(Node *&head)
{
    int len = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        len++;
        temp = temp->next;
    }
    return len;
}

// insert at starting
void insertAtHead(Node *&head, int d)
{
    // empty list
    if (head == NULL)
    {
        Node *temp = new Node(d);
        head = temp;
    }
    else
    {
        Node *temp = new Node(d);
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
}

// insert at tail
void insertAtTail(Node *&tail, int d)
{
    // empty list
    if (tail == NULL)
    {
        Node *temp = new Node(d);
        tail = temp;
    }
    else
    {
        Node *temp = new Node(d);
        tail->next = temp;
        temp->prev = tail;
        tail = temp;
    }
}

// insert at middle
void insertAtPosition(Node *&head, Node *&tail, int d, int position)
{
    // insert at start
    if (position == 1)
    {
        insertAtHead(head, d);
        return;
    }

    Node *temp = head;
    int cnt = 1;
    while (cnt < position - 1 && temp != NULL)
    {
        temp = temp->next;
        cnt++;
    }
    // inserting at last position
    if (temp->next == NULL)
    {
        insertAtTail(tail, d);
        return;
    }
    // creating a node for d
    Node *nodeToInsert = new Node(d);
    nodeToInsert->next = temp->next;
    temp->next->prev = nodeToInsert;
    temp->next = nodeToInsert;
    nodeToInsert->prev = temp;
}

void deleteNode(int position, Node *&head)
{
    // deletion first or start node
    if (position == 1)
    {
        Node *temp = head;
        temp->next->prev = NULL;
        head = temp->next;
        // memory free
        temp->next = NULL;
        delete temp;
    }
    else
    {
        // deleting any middle or last node
        Node *curr = head;
        Node *prev = NULL;

        int cnt = 1;
        while (cnt < position)
        {
            prev = curr;
            curr = curr->next;
            cnt++;
        }
        curr->prev = NULL;
        prev->next = curr->next;
        // curr->next = NULL;
        delete curr;
    }
}
int main()
{
    Node *node1 = new Node(10);
    Node *head = node1;
    print(head);
    cout << "length is " << getLength(head) << endl;

    insertAtHead(head, 11);
    print(head);

    Node *tail = node1;
    insertAtTail(tail, 22);
    print(head);

    insertAtPosition(head, tail, 15, 2);
    print(head);

    deleteNode(2, head);
    print(head);
    return 0;
}