#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *prev;
    node *next;
} * head;

void createList()
{
    int data;
    node *newnode = new node;
    node *temp;
    cout << "Enter data for node / 0 to exit:";
    cin >> data;
    newnode->data = data;
    newnode->next = NULL;
    newnode->prev = NULL;
    head = newnode;
    temp = newnode;
    while (data != 0)
    {
        cout << "Enter data for node / 0 to exit:";
        cin >> data;
        if (data == 0)
            return;
        node *newnode = new node;
        newnode->data = data;
        newnode->next = NULL;
        newnode->prev = temp;
        temp->next = newnode;
        temp = temp->next;
    }
}

void printList()
{
    node *temp = head;
    cout << "printing using next" << endl;
    while (temp)
    {
        cout << temp->data << endl;
        temp = temp->next;
    }
    cout << "Printing using prev:" << endl;
    temp = head;
    while (temp->next)
    {
        temp = temp->next;
    }
    while (temp)
    {
        cout << temp->data << endl;
        temp = temp->prev;
    }
}

void insertNode()
{
    int index, data, count = 0;
    cout << "Enter index where you want to insert:";
    cin >> index;
    cout << "Enter data:";
    cin >> data;
    node *temp = head;
    while (index != count)
    {
        count++;
        temp = temp->next;
    }
    node *prev1, *next1;
    next1 = temp->next;
    prev1 = temp->next->prev;
    node *newnode = new node;
    newnode->data = data;
    temp->next = newnode;
    newnode->next = next1;
    newnode->prev = temp;
    next1->prev = newnode;
}
void deleteNode()
{
    int index, count = 0;
    cout << "Enter index to delete:";
    cin >> index;
    node *temp = head;
    while (index != count)
    {
        count++;
        temp = temp->next;
    }
    node *prev1, *next1;
    prev1 = temp->prev;
    next1 = temp->next;
    free(temp);
    prev1->next = next1;
    next1->prev = prev1;
}

int main()
{
    createList();
    // insertNode();
    deleteNode();
    printList();
}