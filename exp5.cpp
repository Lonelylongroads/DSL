#include <iostream>
using namespace std;
class Stack {
int top;
int* arr;
int capacity;
public:
Stack(int size) {
capacity = size;
arr = new int[capacity];
top = -1;
}
~Stack() {
delete[] arr;
}
bool push(int x);
int pop();
int peek();
bool isEmpty();
bool isFull();
};
bool Stack::isFull() {
return (top >= (capacity - 1));
}
bool Stack::isEmpty() {
return (top < 0);
}
bool Stack::push(int x) {
if (isFull()) {
cout << "Stack Overflow! Cannot push " << x << endl;
return false;
} else {
arr[++top] = x;
cout << x << " pushed into stack\n";
return true;
}
}
int Stack::pop() {
if (isEmpty()) {
cout << "Stack Underflow! Nothing to pop.\n";
return -1;
} else {
return arr[top--];
}
}
int Stack::peek() {
if (isEmpty()) {
cout << "Stack is Empty\n";
return -1;
} else {
return arr[top];
}
}
int main() {
int size;
cout << "Enter the maximum size of the stack: ";
cin >> size;
Stack s(size);
int choice, val;
cout << "\nStack Menu" << endl;
do {
cout << "\n1. Push\n2. Pop\n3. Peek\n4. Check IsEmpty\n5. Check IsFull\n6. Exit\n";
cout << "Enter choice: ";
cin >> choice;
switch (choice) {
case 1:
cout << "Enter values to push: " << endl;
while (true) {
if (s.isFull()) {
cout << "Stack is now full." << endl;
break;
}
cin >> val;
if (val == -1) break;
s.push(val);
}
break;
case 2:
val = s.pop();
if (val != -1) cout << "Popped element: " << val << endl;
break;
case 3:
val = s.peek();
if (val != -1) cout << "Top element is: " << val << endl;
break;
case 4:
cout << (s.isEmpty() ? "Stack is empty." : "Stack is not empty.") << endl;
break;
case 5:
cout << (s.isFull() ? "Stack is full." : "Stack is not full.") << endl;
break;
case 6:
cout << "Exiting" << endl;
break;
default:
cout << "Invalid choice!" << endl;
}
} while (choice != 6);
return 0;
}
