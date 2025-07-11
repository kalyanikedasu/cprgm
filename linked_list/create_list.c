#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* next;
};
struct node* createnode(int data) {
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = data;
    newnode->next = NULL;
    return newnode;
}
void insertbegin(struct node** head_ref, struct node** tailref, int data) {
    struct node* newnode = createnode(data);
    newnode->next = *head_ref;
    *head_ref = newnode;

    if (*tailref == NULL) {
        *tailref = newnode;
    }
}

int main() {
    struct node* head = NULL;
    struct node* tail = NULL;

    insertbegin(&head, &tail, 10);
    insertbegin(&head, &tail, 20);
    insertbegin(&head, &tail, 30);

    struct node* temp = head;
    printf("Linked List: ");
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");

    return 0;
}


