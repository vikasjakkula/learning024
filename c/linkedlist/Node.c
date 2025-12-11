// linked list creation, traverse, insert, delete, search, sort, reverse, merge, split, concatenate, display

#include <stdio.h>
struct Node {
    int data;
    struct Node *next;
};
void deleteNode(struct Node** head_ref, int key) {
    struct Node *temp = *head_ref, *prev;
    if (temp != NULL && temp->data == key) {
    *head_ref = temp->next;
    free(temp);
    return;
    }
}