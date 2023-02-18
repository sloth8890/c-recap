#include<stdio.h>
#include<stdlib.h>

struct Node {
    struct Node * prev;
    struct Node * next;
    int value;
    char *name;
};

typedef struct Node Node;

int free_all(Node *head) {
    Node * ptr;
    while (ptr -> next != NULL) 
    {
        Node *tmp_ptr = ptr;
        ptr = ptr -> next;
        free(tmp_ptr->name);
        free(tmp_ptr);
    }
    free(ptr);
    return 0;
}

void print_all(Node *head) {
    Node *ptr = head;
    while (ptr -> next != NULL) {
        printf("%s node value is %d.\n",ptr -> name, ptr -> value);
        ptr = ptr -> next;
    }
    printf("%s node value is %d.\n",ptr -> name, ptr -> value);
}
	
int main () {
    // initializing doubly linked lists
    Node *n1 = (Node *) malloc(sizeof(Node));
    Node *n2 = (Node *) malloc(sizeof(Node));
    Node *n3 = (Node *) malloc(sizeof(Node));
    Node *n4 = (Node *) malloc(sizeof(Node));
    
    n1 -> value = 1;
    n2 -> value = 2;
    n3 -> value = 3;
    n4 -> value = 4;

    n1 -> name = "FIRST";
    n2 -> name = "SECOND";
    n3 -> name = "THIRD";
    n4 -> name = "FOURTH";
    
    n1->next = n2;
    n2->prev = n1;

    n2->next = n3;
    n3->prev = n2;

    n3->next = n4;
    n4->prev = n3;

    //printing sequences;
    print_all(n1);
    free_all(n1);
    
    return 0;
}
