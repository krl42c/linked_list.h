#include "linked_list.h"

#include <stdio.h>

int main(void) {
    Linked_List list = {.size = 1, .head = ll_create_node((void*)10)};
    ll_insert_node(&list, (void*) "data");

    printf("data at head: %i\n", (int)list.head->data);
    printf("data at head->next: %s\n", (const char*)list.head->next->data);
    return 0;
}
