#include <iostream>
using namespace std;
struct Node {
int data;
Node* prev;
Node* next;
};
Node* head = NULL;
void insertEnd(int val) {
Node* newNode = new Node();
newNode->data = val;
newNode->next = NULL;
if (head == NULL) {
newNode->prev = NULL;
head = newNode;
} else {
Node* temp = head;
while(temp->next != NULL) {
temp= temp->next;
}
temp->next= newNode;
newNode->prev= temp;
}
cout<<"Inserted"<<val<<endl;
}
void display() {
if (head == NULL) {
cout<<"List is empty."<<endl;
return;
}
Node* temp = head;
cout<<"List:";
while(temp != NULL) {
cout<<temp->data<<" <-> ";
temp= temp->next;
}
cout<<"NULL"<<endl;
}
void deleteNode(int val) {
if(head == NULL) return;
Node* temp = head;
while(temp != NULL && temp->data != val) {
temp= temp->next;
}
if(temp == NULL) {
cout<<"Value not found!"<<endl;
return;
}
if(temp == head) head = temp->next;
if(temp->next != NULL) temp->next->prev = temp->prev;
if(temp->prev != NULL) temp->prev->next = temp->next;
delete temp;
cout<<"Deleted "<<val<<endl;
}

int main() {
int choice, val;
while(true) {
cout<<"\n1. Insert\n  2. Delete\n  3. Display\n  4. Exit\n";
cout<<"Enter choice:";
cin>>choice;
if(choice == 1) {
cout<<"Enter value:";
cin>>val;
insertEnd(val);
} else if (choice == 2) {
cout<<"Enter value to delete:";
cin>>val;
deleteNode(val);
} else if (choice == 3) {
display();
} else if (choice == 4) {
break;
} else {
cout<<"Invalid choice!"<<endl;
}
}
return 0;
}
