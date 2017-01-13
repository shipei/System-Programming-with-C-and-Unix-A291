#include "node.h"
#include <stdlib.h>

void insert(struct Node *head, int val, int pos) {

        struct Node *inserted = (struct Node *) malloc (sizeof (struct Node));
        inserted->value = val;
        inserted->next = NULL;

        if(pos == 1)
        {
                inserted->next = head;
                head = inserted;
                return;
        }
        else {
        struct Node *temp = head;
        int i;
        for(i = 0; i < pos-2; i++)
        {
                temp = temp->next;
        }
        inserted->next = temp->next;
        temp->next = inserted;
}
}

void display(struct Node *head){

        struct Node *r = head;
        if(r == NULL)
        {
          
                return;
        }
        while(r != NULL)
        {
                
                printf("%d->", r->value);
                r = r->next;
        }
        printf("\n");
}

void addElement(struct Node **head, int val) {

        if(*head == NULL)
        {
                *head = malloc (sizeof (struct Node));
                (*head)->value = val;
                (*head)->next = NULL;
        }
        else
                addElement(&((*head)->next), val);
}

void search(struct Node *head, int n) {
        struct Node *current = head;
        int count = 1;
        while(current != NULL)
        {
                if(count == n) {
                        printf("the %dth position is %d\n", n, current->value);
                }
                count++;
                current = current->next;
        }
}
