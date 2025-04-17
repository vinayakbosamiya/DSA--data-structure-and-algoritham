#include <stdio.h>
#include <stdlib.h>
struct list
{
    int info;
    struct list *next, *prev;
};
typedef struct list node;
node *p;
void create(int, node *);
void display(node *);
void addbeg(int, node *);
void addafter(int, int, node *);
void deleted(int, node *);
#include <stdio.h>
#include <stdlib.h>

void main()
{
    int choice, ele, pos;
    p = NULL;

    while (1)
    {
        printf("\n\n----- MENU -----\n");
        printf("1. Create Node\n");
        printf("2. Display List\n");
        printf("3. Add at Beginning\n");
        printf("4. Add After Position\n");
        printf("5. Delete Element\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter element to insert: ");
            scanf("%d", &ele);
            create(ele, p);
            break;

        case 2:
            printf("List elements:\n");
            display(p);
            break;

        case 3:
            printf("Enter element to add at beginning: ");
            scanf("%d", &ele);
            addbeg(ele, p);
            break;

        case 4:
            printf("Enter position after which to insert: ");
            scanf("%d", &pos);
            printf("Enter element to insert: ");
            scanf("%d", &ele);
            addafter(pos, ele, p);
            break;

        case 5:
            printf("Enter element to delete: ");
            scanf("%d", &ele);
            deleted(ele, p);
            break;

        case 6:
            exit(0);

        default:
            printf("Invalid choice. Try again.\n");
        }
    }
}

void create(int ele, node *q)
{
    node *temp;
    if (q == NULL)
    {
        p = (node *)malloc(sizeof(node));
        p->prev = NULL;
        p->info = ele;
        p->next = NULL;
    }
    else
    {
        while (q->next != NULL)
        {
            q = q->next;
        }
        temp = (node *)malloc(sizeof(node));
        temp->next = NULL;
        temp->info = ele;
        temp->prev = q;
        q->next = temp;
    }
}
void display(node *q)
{
    while (q != NULL)
    {
        printf("\t%d", q->info);
        q = q->next;
    }
}
void addbeg(int ele, node *q)
{
    p = (node *)malloc(sizeof(node));
    p->prev = NULL;
    p->info = ele;
    p->next = q;
    q->prev = p;
}
void addafter(int c, int ele, node *q)
{
    node *temp;
    int i;
    for (i = 1; i < c; i++)
    {
        q = q->next;
        if (q == NULL)
        {
            printf("\nposition is out of range");
            return;
        }
    }
    temp = (node *)malloc(sizeof(node));
    temp->prev = q;
    temp->next = q->next;
    temp->info = ele;
    temp->next->prev = temp;
    q->next = temp;
    return;
}
void deleted(int ele, node *q)
{
    node *temp;
    if (q->info == ele)
    {
        p = q->next;
        q->next->prev = NULL;
        free(q);
        return;
    }
    while (q->next->next != NULL)
    {
        if (q->next->info == ele)
        {
            temp = q->next;
            q->next = q->next->next;
            q->next->prev = temp->prev;
            free(temp);
            return;
        }
        q = q->next;
    }
}







// output

/*

----- MENU -----
1. Create Node       
2. Display List      
3. Add at Beginning  
4. Add After Position
5. Delete Element    
6. Exit
Enter your choice: 1 
Enter element to insert: 1


----- MENU -----
1. Create Node
2. Display List
3. Add at Beginning
4. Add After Position
5. Delete Element
6. Exit
Enter your choice: 1
Enter element to insert: 2


----- MENU -----
1. Create Node
2. Display List
3. Add at Beginning
4. Add After Position
5. Delete Element
6. Exit
Enter your choice: 1
Enter element to insert: 3


----- MENU -----
1. Create Node
2. Display List
3. Add at Beginning
4. Add After Position
5. Delete Element
6. Exit
Enter your choice: 2
List elements:
        1       2       3

----- MENU -----
1. Create Node
2. Display List
3. Add at Beginning
4. Add After Position
5. Delete Element
6. Exit
Enter your choice: 3
Enter element to add at beginning: 22


----- MENU -----
1. Create Node
2. Display List
3. Add at Beginning
4. Add After Position
5. Delete Element
6. Exit
Enter your choice: 2
List elements:
        22      1       2       3

----- MENU -----
1. Create Node
2. Display List
3. Add at Beginning
4. Add After Position
5. Delete Element
6. Exit
Enter your choice: 4
Enter position after which to insert: 3
Enter element to insert: 55


----- MENU -----
1. Create Node
2. Display List
3. Add at Beginning
4. Add After Position
5. Delete Element
6. Exit
Enter your choice: 2
List elements:
        22      1       2       55      3

----- MENU -----
1. Create Node
2. Display List
3. Add at Beginning
4. Add After Position
5. Delete Element
6. Exit
Enter your choice: 6








*/
