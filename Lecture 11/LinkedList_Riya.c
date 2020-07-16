/* Created by Riya Patel on 7/13/20 */

#include <stdio.h>
#include <stdlib.h>

/* making a new type: node */
typedef struct node{
    int data;
    struct node *next;
} node;

/* my function prototypes */
void insertFront (node **head, int newData);
void printList (node *head);
void insertEnd(node *head,int newData);
void deleteNode(node *head, int data);

int main() {
    node *head = NULL;
    insertFront(&head, 5);
    insertFront(&head, 4);
    insertFront(&head, 3);
    printList(head);

    insertEnd(head, 6);
    insertFront(&head, 2); // called here on purpose
    insertEnd(head, 7);
    printList(head);

    deleteNode(head, 6);
    deleteNode(head, 3);
    deleteNode(head, 5);
    printList(head);

    return 0;
}

/* we need a second '*' to store the address of the first pointer, or head */
void insertFront (node **head, int newData){
    /* allocate memory first */
    node *newNode = (node *) malloc(sizeof(node));
    /* then make the newNode link to the next one */
    newNode->next = *head;
    newNode->data = newData;
    /* the head now becomes the newNode */
    *head = newNode;
}

void printList (node *head){
    while (head != NULL){
        /* prints the data of each node */
        printf("%d", head->data);
        head = head->next;
        /* will not print a '->' for the last node since it points to NULL */
        if (head != NULL) {
            printf("->");
        }
    }
    printf("\n");
}

void insertEnd(node *head, int newData){
    /* first get to the last node */
    while (head->next != NULL){
        head = head->next;
    }
    /* point that one to a new node */
    head->next = (node *) malloc(sizeof(node));
    head = head->next;
    /* assign the new data and address to NULL */
    head->data = newData;
    head->next = NULL;
}


void deleteNode(node *head, int data){

    /* goes to the node that you want to delete */
    while(head->next != NULL && (head->next)->data != data) {
        head = head->next;
    }

    /* temp points to the node that needs to be deleted */
    node *temp = head->next;
    /* now the previous node links to the one after the deleted node */
    head->next = temp->next;
    /* deallocate memory */
    free(temp);
}


