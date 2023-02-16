#include<stdio.h>
#include<stdlib.h>

struct Node{
    struct Node *next;
    int val;
};
typedef struct Node Node;

int main() {
    Node *head;
    Node *n1 = (Node *) malloc(sizeof(Node));
    // setting head node.
    head = n1;
    n1 -> val = 1;

    Node *n2 = (Node *) malloc(sizeof(Node));
    n1 -> next = n2;
    n2 -> val = 2;
    Node *n3 = (Node *) malloc(sizeof(Node));
    n2 -> next = n3;
    n3 -> val = 3;
    n3 -> next = NULL;

    Node *ptr;
    for (ptr = head; ptr->next != NULL; ptr = ptr -> next) {
        printf("node is on %d\n",ptr->val);
    }
    printf("node is on %d\n",ptr->val);

    // deallocating memory
    for (ptr = head; ptr->next != NULL; ptr = ptr -> next) {
        free(ptr);
    }
    free(ptr);


    return 0;
    

}