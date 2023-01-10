/*!
 * @file linkedlist.c
 * 
 * Date: 1/9/23
 * Author: Jonic Mecija
 * 
 * This file implements the a basic linked list data structure using structs in C. 
 * This linkedlist struct has the ability to add, remove, and insert into the linked list.
 *
 *
 */

#include <stdio.h>
#include <stdlib.h>

// create struct class for linked list
// type def to get rid of redundant use of "struct" Node
typedef struct{
	void* next;
	int data;
} Node;

// create head pointer
Node* head = NULL;

// add node to list
Node* addNode(int data){
	Node* newNode = malloc(sizeof(Node));
	newNode->data = data;

	if(head == NULL){
		head = newNode;
		newNode->next = NULL;
	} else{
		newNode->next = head;
		head = newNode;
	}
	return head;
}

// remove node from list
int removeNode(int data){
	Node* prev = head;
	Node* curr = head;

	while(curr != NULL){
		if(curr->data == data){
			if(curr == head){
				// move the head
				head = curr;
			}
			else{
				// let prev equal curr->next
				prev->next = curr->next;
				free(curr); // free memory of skipped node
				curr = NULL;
			}

			return 1;
		}
		prev = curr;
		curr = curr->next;
	}
	return 0;
}

// insert node to list
int insertNode(int data, int position){
	Node* newNode = malloc(sizeof(Node));
	newNode->data = data;
	Node* prev = head;
	Node* curr = head;
	int count = 0;

	while(curr != NULL){
		if(count == position){
			// insert here
			if(count == 0){
				// insert at head
			} else{
				prev->next = newNode;
				newNode->next = curr;
			}
		}
		prev = curr;
		curr = curr->next;
	}
	return 0;
}

int printlist(){
    int count = 1;

    while(head != NULL){
        printf("Node %d data: %d\n", count, head->data);
        head = head->next;
        count++;
    }
    return 0;
}


int main(){
    // assign head
    Node* newNode = malloc(sizeof(Node));
    newNode->data = 1234;
    head = newNode;

    // add node to front of list
    addNode(444);
    addNode(0);
    addNode(312);

    // remove node
    removeNode(444);

    // insert node
    printlist();


	return 0;
}