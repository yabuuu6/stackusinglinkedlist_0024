﻿#include <iostream>
using namespace std;

// Node class representing a single node in the linked list
class Node {
public:
	int data;
	Node* next;
	Node() {
		next = NULL;
	}
};

// Stack class
class Stack {
private:
	Node* top; // Pointer to the top node of the stack

public:
	Stack() {
		top = NULL; // Initialize the stack with a null top pointer
	}

	// Push operation: Insert an element onto the top of the stack
	int push(int value) {
		Node* newNode = new Node(); // 1. Allocate memory for the new node
		newNode->data = value; // 2. assign value
		newNode->next = top;// 3. Set the next pointer of the new node to the current top node newNode
		top = newNode; // 4. Update the top pointer to the new node
		cout << "push value " << value << endl;
		return value;
	}

		// Pop operation: Remove the topmost element from the stack
		void pop() {
			if (isEmpty()) {
				cout << "Stack is empty." << endl;
			}
			cout << "Popped value: " << top->data << endl;
			top = top->next; // Update the top pointer to the next node
		}
		// Peek/Top operation: Retrieve the value of the topmost element without removing it void peek() {
		void peek() {
			if (top == NULL) {
				cout << "List is empty." << endl;
			}
			else {
				Node* current = top;
				while (current != NULL) {
					cout << current->data << " " << endl;
					current = current->next;
				}
				cout << endl;
			}// Return the value of the top node
		}


		// IsEmpty operation: Check if the stack is empty
		bool isEmpty() {
			return top == NULL; // Return true if the top pointer is NULL, indicating an empty stack
		}
	};

