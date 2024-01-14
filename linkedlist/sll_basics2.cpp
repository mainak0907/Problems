#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int data1, Node *next1)
    {
        data = data1;
        next = next1;
    }
    Node(int data1)
    {
        data = data1;
        next = nullptr;
    }
};
void printLL(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
}
Node *insertK(Node *head, int val, int k)
{
    if (head == NULL)
    {
        if (k == 1)
        {
            return new Node(val);
        }
        else
        {
            return head;
        }
    }
    if (k == 1)
    {
        return new Node(val, head);
    }
    int cnt = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        cnt++;
        if (cnt == k - 1)
        {
            Node *newnode = new Node(val, temp->next);
            temp->next = newnode;
        }
        temp = temp->next;
    }
    return head;
}
Node *deleteK(Node *head, int k)
{
    if (head == NULL)
    {
        return head;
    }
    if (k == 1)
    {
        Node *temp = head;
        head = head->next;
        delete (temp);
        return head;
    }
    Node *temp = head;
    Node *prev = NULL;
    int c = 0;
    while (temp != NULL)
    {
        c++;
        if (c == k)
        {
            prev->next = prev->next->next;
            delete temp;
            break;
        }
        prev = temp;
        temp = temp->next;
    }

    return head;
}

int main()
{
    // Create a linked list from a vector
    vector<int> arr = {0, 1, 2};
    int k = 1;
    Node *head = new Node(arr[0]);
    head->next = new Node(arr[1]);
    head->next->next = new Node(arr[2]);
    // Delete the k-th node in the linked list
    head = deleteK(head, k);
    head = insertK(head, 3, 3);
    // Print the modified linked list
    printLL(head);

    return 0;
}
