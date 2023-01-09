#include <stdio.h>
#include <stdlib.h>


typedef struct node{
	int data;
	struct node* next;
} Node;

void printList(Node *head){
	while(head){
	printf("%d ", head->data);
	head = head->next;
	}
	printf("\n");
}

Node* addNode(Node* head, int data, int index){
	int count = 0;
	
	if(index == 0){
	Node * nodeToAdd = NULL;
	nodeToAdd = malloc(sizeof(Node));
	nodeToAdd->data = data;
	nodeToAdd->next = head;
	return nodeToAdd;
	}
	index--;
	
	
	// iterate until you reach node before index
	while(count < index){
	head = head->next;
	count = count + 1;
	}
	printf("this is count: %d\n", count);
	Node* tempHead = head;
	Node* temp = NULL;
	temp = malloc(sizeof(Node));
	
	Node* nodeToAdd = NULL;
	nodeToAdd = malloc(sizeof(Node));
	nodeToAdd->data = data;
	
	temp = head->next;
	head->next = nodeToAdd;
	nodeToAdd->next = temp;

	return tempHead;
}
int main(){

	Node* head;
	Node* one = NULL;
	Node* two = NULL;
	Node* three = NULL;

	// allocate memory
	one = malloc(sizeof(Node));
	two = malloc(sizeof(Node));
	three = malloc(sizeof(Node));

	one->data = 1;
	two->data = 2;
	three->data = 3;

	one->next = two;
	two->next = three;
	three->next = NULL;

	head = one;
	printList(one);
	addNode(one, 34, 1);
	printList(addNode(one, 23, 0));
	return 0;
}

