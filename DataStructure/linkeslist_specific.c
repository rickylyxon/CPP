#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* head;

void insert_at_position(int data, int position) {
    struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
    new_node->data = data;

    if(position == 1){
        new_node->next = head;
        head = new_node;
        return;
    }
    struct Node* current = head;
    int i;
    for (i = 1; i < position - 1; i++) {
        if (current->next == NULL) {
            printf("The position is out of range\n");
            return;
        }
        current = current->next;
    }

    new_node->next = current->next;
    current->next = new_node;
}

void print_list() {
    struct Node* current = head;
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}

int main() {
    head = NULL; // empty list
    insert_at_position(1, 1);
    insert_at_position(2, 2);
    insert_at_position(3, 3);
    insert_at_position(6, 4);
    insert_at_position(4, 3);
    print_list();
    return 0;
}
