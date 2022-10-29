#include <bits/stdc++.h>
using namespace std;
class Node
{
	public:
	int data;
	Node* next;
};

void printReverse(Node* head) /* Function to reverse the linked list */
{
	// Base case
	if (head == NULL)
	return;

	// print the list after head node
	printReverse(head->next);

	// After everything else is printed, print head
	cout << head->data << " ";
}
/* Push a node to linked list. Note that this function
changes the head */
void push(Node** head_ref, char new_data)
{
	Node* new_node = new Node(); /* allocate node */

	new_node->data = new_data; /* put in the data */

	new_node->next = (*head_ref); /* link the old list off the new node */

	(*head_ref) = new_node; /* move the head to point to the new node */
}

int main()
{
	// Now create linked list 1->2->3->4->5
	Node* head = NULL;
	push(&head, 55);
	push(&head, 44);
	push(&head, 33);
	push(&head, 22);
	push(&head, 11);
	printReverse(head);
	return 0;
}
