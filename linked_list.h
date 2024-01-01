#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include <stdint.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct Node {
    void *data;
    struct Node *next;
} Node;

typedef struct Linked_List {
    uint32_t size; 
    Node *head;
} Linked_List;

static Node *ll_create_node(void *data);
static void ll_insert_node(Linked_List *list, void *data);


// Implementations
static Node *ll_create_node(void *data) {
    Node *new_node = malloc(sizeof(Node));
    new_node->data = data;
    return new_node;
};

static void ll_insert_node(Linked_List *list, void *data) {
    Node *curr = list->head;
    while(true) {
        if (curr->next == NULL) {
            curr->next = ll_create_node(data);
            list->size++;
            break;
        }
        curr = curr->next;
    }
}

#endif
