#include <iostream>
#include <map>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    // constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
    // destructor
    ~Node()
    {
        int value = this->data;
        // memory free
        if (this->next != NULL)
        {
            this->next = NULL;
            delete next;
            
        }
        cout << "memory is free from node with data " << value << endl;
    }
};

void insertAtHead(Node *&head, int d)
{

    // new  node create
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
}

void insertAtTail(Node *&tail, int d)
{
    Node *temp = new Node(d);
    tail->next = temp;
    tail = temp;
}

void insertAtPosition(Node *&head, Node *&tail, int position, int d)
{
    // insert at start
    if (position == 1)
    {
        insertAtHead(head, d);
        return;
    }
    Node *temp = head;
    int cnt = 1;
    while (cnt < position - 1)
    {
        temp = temp->next;
        cnt++;
    }
    // insert at last position
    if (temp->next == NULL)
    {
        insertAtTail(tail, d);
        return;
    }
    // creating a node for d
    Node *nodeToInsert = new Node(d);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
}

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

void deleteNode(int position, Node *&head)
{
    // deletion first or start node
    if (position == 1)
    {
        Node *temp = head;
        head = head->next;
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
        prev->next = curr->next;
        // curr->next = NULL;
        delete curr;
    }
}

int main()
{

    // created a new node
    Node *node1 = new Node(10);
    // cout << node1->data << endl;
    // cout << node1->next << endl;

    // head pointed to node 1
    Node *head = node1;
    // print (head);

    insertAtHead(head, 12);
    print(head);

    // tail pointed to node 1
    Node *tail = node1;
    // print (head);

    insertAtTail(tail, 15);
    print(head);

    insertAtPosition(head, tail, 3, 22);
    print(head);

    cout << "head " << head->data << endl;
    cout << "tail " << tail->data << endl;

    deleteNode(3, head);
    print(head);
    return 0;
}