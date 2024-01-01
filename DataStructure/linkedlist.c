#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* head;

void insert_at_beginning(int data) {
    struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
    new_node->data = data;
    new_node->next = head;
    head = new_node;
}

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

void insert_at_end(int data) {
    struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
    new_node->data = data;
    new_node->next = NULL;

    if (head == NULL) {
        head = new_node;
        return;
    }

    struct Node* current = head;
    while (current->next != NULL) {
        current = current->next;
    }

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
    printf("Enter the choice\n");
    printf("1.beginning\n2.specific\n3.end\n4.print\n5.exit");
    int data,position,choice;
    do
    {
        printf("\nEnter choice");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1: {printf("Enter data ");
            scanf("%d",&data);
            insert_at_beginning(data);}
            break;
    case 2: {printf("Enter data and position ");
            scanf("%d%d",&data,&position);
            insert_at_position(data,position);}
            break;
    case 3: {printf("Enter data ");
            scanf("%d",&data);
            insert_at_end(data);
            break;}
    case 4: {print_list();}
    
    default: break; 
            
    }
    } while (choice!=0);
    
    
    return 0;
}
