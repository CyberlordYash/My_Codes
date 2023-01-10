#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *next;
} *head;

void createNode()
{
    int data;
    node *newnode = new node, *temp;
    cout << "Enter data :" << endl;
    cin >> data;
    temp = newnode;
    head = newnode;
    newnode->data = data;
    newnode->next = NULL;
    while (data != 0)
    {

        cout << "Enter data:" << endl;
        cin >> data;
        if (data == 0)
            return;
        node *newnode = new node;
        newnode->data = data;
        temp->next = newnode;
        newnode->next = NULL;
        temp = newnode;
    }
}

void printNode()
{
    node *temp;
    temp = head;
    while (temp)
    {
        cout << temp->data << endl;
        temp = temp->next;
    }
}
void insertMid()
{
    int index, data, count = 0;
    cout << "Enter index where you wanna insert:";
    cin >> index;
    cout << "Enter data you wanna insert:";
    cin >> data;
    node *temp = head;
    while (count != index)
    {
        temp = temp->next;
        count++;
    }
    node *newnode = new node;
    newnode->data = data;
    newnode->next = temp->next;
    temp->next = newnode;
}

void deleteNode()
{
    int index, count = 0;
    cout << "Enter index you want to delete:";
    cin >> index;
    node *temp = head;
    while (count != index - 1)
    {
        temp = temp->next;
        count++;
    }
    node *temp2;
    temp2 = temp->next;
    temp->next = temp->next->next;
    free(temp2);
}
void reverseList()
{
    node *prev, *temp, *temp2;
    temp = head;
    prev = NULL;
    temp2 = head->next;
    while (temp != NULL)
    {
        temp->next = prev;
        prev = temp;
        temp = temp2;
        if (temp2 != NULL)
            temp2 = temp2->next;
    }
    head = prev;
}

int main()
{
    createNode();
    // deleteNode();
    reverseList();
    printNode();
}