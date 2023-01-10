#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *next;
} * head;
void createNode()
{
    node *temp;
    int data;
    node *newnode = new node;

    cout << "Enter data /0 to stop";
    cin >> data;
    if (data == 0)
        return;
    newnode->data = data;
    newnode->next = newnode;
    head = newnode;
    temp = head;
    while (data != 0)
    {
        cout << "Enter data /0 to stop";
        cin >> data;
        if (data == 0)
            return;
        node *newnode = new node;
        newnode->data = data;
        temp->next = newnode;
        temp = temp->next;
        newnode->next = head;
    }
}
void printList()
{
    node *temp = head;
    do
    {
        cout << temp->data << endl;
        temp = temp->next;

    } while (temp != head);
}
int main()
{
    createNode();
    printList();
}