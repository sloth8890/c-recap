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
    n2 -> next = NULL;
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
   /* 
    * invalid read of 8 memory.
    * for (ptr = head; ptr->next != NULL; ptr = ptr -> next) {
      	printf("before deallocating, the number is %d\n",ptr->val);
	free(ptr);
    }
    free(ptr);
    */
    Node *free_ptr = head;
    
    while (free_ptr -> next != NULL) {
	    Node *tmp_ptr = free_ptr;
	    free_ptr = free_ptr -> next;
	    free(tmp_ptr);
    }
    free(free_ptr);

    return 0;
    

}
