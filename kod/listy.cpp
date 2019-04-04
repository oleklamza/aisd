#include <iostream>
using namespace std;

typedef struct Node {
	int data;
	Node* next;	
} Node;


Node* head;
Node* tail;
Node* node;

int main()
{
	Node* n1 = new Node;
	n1->data = 13;
	
	Node* n2 = new Node;
	n2->data = 999;
	
	head = n1;
	tail = n2;
	n1->next = n2;
	n2->next = NULL;
	
	// wstawienie na początek
	Node* n3 = new Node;
	n3->data = 1;
	n3->next = head;
	head = n3;
	
	// wstawienie na koniec
	Node* n4 = new Node;
	n4->data = 22;
	n4->next = NULL;
	
	//~ node = head;
	//~ while (node->next != NULL) {
		//~ node = node->next;
	//~ }
	tail->next = n4;
	tail = n4;
	
	// w środku
	Node* n5 = new Node;
	n5->data = 333;
	
	//
	int i = 0;
	
	node = head;
	while (node != NULL && i > 0) {
		node = node->next;
		--i;
	}
	
	n5->next = node->next;
	node->next = n5;
	
	//----------------
	node = head;
	cout << "head:" << head << endl;
	while (node != NULL) {
		cout << node->data << " @ " << node << " next: " << node->next << endl;
		
		node = node->next;
	}
}
