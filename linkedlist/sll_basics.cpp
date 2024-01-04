#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data ;
    Node* next;
    Node (int data1 , Node* next1){
        data=data1;
        next=next1;
    }
    Node (int data1){
        data=data1;
        next=nullptr;
    }
};

Node* convertArrtoLL (vector<int> &arr){
    Node* head= new Node(arr[0]);
    Node* prev=head;
    for(int i=1;i<arr.size();i++){
        Node* temp= new Node(arr[i]);
        prev->next=temp;
        prev=temp;
    }
return head;
}
int countLen(Node* head){
    Node* temp=head;
    int c=0;
    while(temp!=nullptr){
        cout << temp->data << " ";
        temp=temp->next;
        c++;
    }
    cout << endl;
    return c;
}
int findifpresent(Node* head , int val){
    Node* temp=head;
    while(temp!=nullptr){
        if(temp->data==val){
            return 1;
        }
        temp=temp->next;
    }
    return 0;
}

int main(){
    vector<int> arr={1,2,3,4,5};
    Node* head= convertArrtoLL(arr);
    cout << countLen(head) << endl;
    cout << findifpresent(head,3);
}