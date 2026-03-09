#include <iostream>
using namespace std;
struct Node{
int data;
Node* next;
};
class LinkedList{
private:
Node* head;
public:
LinkedList():head(nullptr) {}
void insertAtBeginning(int val) {
Node* newNode=new Node();
newNode->data=val;
newNode->next=head;
head=newNode;
}
void insertAtEnd(int val) {
Node* newNode=new Node();
newNode->data=val;
newNode->next=nullptr;
if (head==nullptr) {
head=newNode;
return;
}
Node* temp=head;
while(temp->next !=nullptr) {
temp=temp->next;
}
temp->next=newNode;
}
void insertAtPosition(int val, int pos) {
if(pos<1) {
cout<<"Position should be >= 1"<<endl;
return;
}
if(pos==1) {
insertAtBeginning(val);
return;
}
Node* newNode=new Node();
newNode->data=val;
Node* temp=head;
for(int i=1; i<pos-1 && temp!=nullptr; i++) {
temp= temp->next;
}
if (temp==nullptr) {
cout<<"The previous node is null (Position out of range)."<<endl;
delete newNode;
} else {
newNode->next=temp->next;
temp->next=newNode;
}
}
void display() {
Node* temp=head;
while (temp!=nullptr) {
cout<<temp->data<<" -> ";
temp=temp->next;
}
cout<<"NULL"<<endl;
}
};
int main() {
LinkedList list;
int size, value, choice, pos;
cout<<"Enter the number of initial elements: ";
cin>>size;
for(int i = 0; i < size; i++) {
cout<<"Enter value "<<i+1<<": ";
cin>>value;
list.insertAtEnd(value);
}
do {
cout<<"\nInsertion Menu"<<endl;
cout<<"1. Insert at Beginning"<<endl;
cout<<"2. Insert at End"<<endl;
cout<<"3. Insert at Position"<<endl;
cout<<"4. Display and Exit"<<endl;
cout<<"Enter choice: ";
cin>>choice;
switch (choice) {
case 1:
cout<<"Enter value: ";
cin>>value;
list.insertAtBeginning(value);
break;
case 2:
cout<<"Enter value: ";
cin>>value;
list.insertAtEnd(value);
break;
case 3:
cout<<"Enter value: ";
cin>>value;
cout<<"Enter position: ";
cin>>pos;
list.insertAtPosition(value, pos);
break;
}
list.display();
} while (choice != 4);
return 0;
}
