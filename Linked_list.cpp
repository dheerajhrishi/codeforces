#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *Next;
};

void push(Node **Head_ref, int new_data)
{
    Node *new_node = new Node();
    new_node->data = new_data;
    new_node->Next = (*Head_ref);
    (*Head_ref) = new_node;
}

void deleteNode(Node **head_ref, int Key)
{
    Node *temp = *head_ref;
    Node *prev = NULL;

    if (temp != NULL && temp->data == Key)
    {
        *head_ref = temp->Next;
        delete temp;
        return;
    }

    else
    {
        while (temp != NULL && temp->data != Key)
        {
            prev = temp;
            temp = temp->Next;
        }

        if (temp == NULL)
        {
            return;
        }
        prev->Next = temp->Next;
        delete temp;
    }
}

void printList(Node *node)
{
    while (node != NULL)
    {
        cout << node->data << " ";
        node = node->Next;
    }
}

int main()
{
    Node *head = NULL;
    push(&head, 7);
    push(&head, 1);
    push(&head, 2);
    push(&head, 3);
    push(&head, 4);
    push(&head, 5);
    push(&head, 6);

    puts("Created Linked List: ");
    printList(head);

    deleteNode(&head, 1);
    puts("\n Linked List After deletion 1 :");
    printList(head);
    return 0;
}