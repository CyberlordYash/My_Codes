#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *next;
};
node *head;

void createNode()
{
    node *newnode = new node;
    node *temp;
    head = newnode;
    int data = 1;
    cout << "Enter data for node/ 0 to exit :";
    cin >> data;
    newnode->data = data;
    newnode->next = NULL;
    temp = newnode;
    while (data != 0)
    {
        node *newnode = new node;
        cout << "Enter data for node/ 0 to exit :";
        cin >> data;
        if (data == 0)
            return;

        newnode->data = data;
        newnode->next = NULL;
        temp->next = newnode;
        temp = temp->next;
    }
}
void printList()
{
    node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << endl;
        temp = temp->next;
    }
}
void insertMid()
{
    int count = 0, index, data;
    node *temp = head;
    cout << "Enter index where you wanna insert";
    cin >> index;
    cout << "Enter data to insert:";
    cin >> data;
    while (count != index)
    {
        temp = temp->next;
        count++;
    }
    node *newnode = new node;
    newnode->data = data;
    node *temp2 = temp->next;
    temp->next = newnode;
    newnode->next = temp2;
}

void deleteNode()
{
    int index, count = 0;
    node *temp = head;
    cout << "Enter index which element you wanna delete: ";
    cin >> index;
    if (index == 0)
    {
        node *temp2 = head;
        head = head->next;
        free(temp2);
    }
    else
    {
        while (count != index - 1)
        {
            temp = temp->next;
            count++;
        }
        node *temp2 = temp->next;
        temp->next = temp->next->next;
        free(temp2);
    }
}
void reverseList()
{
    node *prev, *temp, *temp2;
    temp = head;

    prev = NULL;
    while (temp != NULL)
    {
        temp2 = temp->next;
        temp->next = prev;
        prev = temp;
        temp = temp2;
    }
    head = prev;
}
void findMid()
{
    node *temp = head;
    node *temp1 = head;
    while (temp1 != NULL && temp1->next != NULL)
    {
        temp = temp->next;
        temp1 = temp1->next->next;
    }
    cout << "Middle element is :" << temp->data;
}
node *reverseK(node *head, int k)
{
    if (head == NULL)
        return NULL;

    node *next = NULL;
    node *prev = NULL;
    node *curr = head;
    int count = 0;
    while (count < k && curr != NULL)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
        count++;
    }
    if (next != NULL)
    {
        head->next = reverseK(next, k);
    }
    return prev;
}
int main()
{
    createNode();
    // printList();
    // insertMid();
    // printList();
    // deleteNode();
    // printList();
    printList();
    // reverseList();
    // cout << "reverse :" << endl;
    // printList();
    // findMid();
    reverseK(head, 2);
    printList();
}