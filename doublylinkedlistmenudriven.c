#include <stdio.h>
#include <stdlib.h>

struct list {
    int info;
    struct list *next, *prev;
};
typedef struct list node;
node *p = NULL;

void create(int ele);
void display();
void addbeg(int ele);
void addafter(int pos, int ele);
void deleted(int ele);

int main() {
    int choice, ele, pos;

    while (1) {
        printf("\n\n--- MENU ---\n");
        printf("1. Create Node\n");
        printf("2. Display List\n");
        printf("3. Add at Beginning\n");
        printf("4. Add After Position\n");
        printf("5. Delete Element\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter element to create: ");
                scanf("%d", &ele);
                create(ele);
                break;

            case 2:
                printf("Doubly Linked List: ");
                display();
                break;

            case 3:
                printf("Enter element to add at beginning: ");
                scanf("%d", &ele);
                addbeg(ele);
                break;

            case 4:
                printf("Enter position after which to insert: ");
                scanf("%d", &pos);
                printf("Enter element to insert: ");
                scanf("%d", &ele);
                addafter(pos, ele);
                break;

            case 5:
                printf("Enter element to delete: ");
                scanf("%d", &ele);
                deleted(ele);
                break;

            case 6:
                printf("Exiting...");
                exit(0);

            default:
                printf("Invalid choice! Try again.");
        }
    }

    return 0;
}

void create(int ele) {
    node *temp, *q;
    if (p == NULL) {
        p = (node *)malloc(sizeof(node));
        p->prev = NULL;
        p->info = ele;
        p->next = NULL;
    } else {
        q = p;
        while (q->next != NULL) {
            q = q->next;
        }
        temp = (node *)malloc(sizeof(node));
        temp->info = ele;
        temp->next = NULL;
        temp->prev = q;
        q->next = temp;
    }
}

void display() {
    node *q = p;
    if (q == NULL) {
        printf("List is empty.");
        return;
    }
    while (q != NULL) {
        printf("%d ", q->info);
        q = q->next;
    }
}

void addbeg(int ele) {
    node *temp = (node *)malloc(sizeof(node));
    temp->info = ele;
    temp->prev = NULL;
    temp->next = p;
    if (p != NULL)
        p->prev = temp;
    p = temp;
}

void addafter(int pos, int ele) {
    node *q = p, *temp;
    int i;
    for (i = 1; i < pos; i++) {
        if (q == NULL) {
            printf("Position out of range.\n");
            return;
        }
        q = q->next;
    }

    if (q == NULL) {
        printf("Position out of range.\n");
        return;
    }

    temp = (node *)malloc(sizeof(node));
    temp->info = ele;
    temp->next = q->next;
    temp->prev = q;
    if (q->next != NULL)
        q->next->prev = temp;
    q->next = temp;
}

void deleted(int ele) {
    node *q = p, *temp;

    if (q == NULL) {
        printf("List is empty.\n");
        return;
    }

    if (q->info == ele) {
        p = q->next;
        if (p != NULL)
            p->prev = NULL;
        free(q);
        return;
    }

    while (q->next != NULL && q->next->info != ele)
        q = q->next;

    if (q->next == NULL) {
        printf("Element not found.\n");
        return;
    }

    temp = q->next;
    q->next = temp->next;
    if (temp->next != NULL)
        temp->next->prev = q;
    free(temp);
}
