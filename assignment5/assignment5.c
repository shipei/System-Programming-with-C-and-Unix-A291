#include "operation.c"
#include "node.h"
#include <stdio.h>

int main(void) {

        printf("Enter your option:\n");
        int option = 0;
        int value;
        int insert_value;
        int pos;
        int searching;
        struct Node *head = NULL;
        while(option != 5)
        {
                printf("1. Add element\n");
                printf("2. search\n");
                printf("3. Insert\n");
                printf("4. display\n");
                printf("5. Exit\n");
                scanf("%d", &option);

                if(option == 1)
                {
                        printf("Enter the value: ");
                        scanf("%d", &value);
                        addElement(&head, value);
                        printf("Value added to the linked list\n");                             }
                else if(option == 2)
                {
                        printf("Enter the position you are searching for:\n");
                        scanf("%d", &searching);
                        search(head, searching);
                }
                else if(option == 3)
                {
                        printf("Enter the position\n");
                        scanf("%d", &pos);
                        printf("Enter the value\n");
                        scanf("%d", &insert_value);
                        insert(head, insert_value, pos);
                        printf("Element inserted\n");   
                }
 				else if(option == 4)
                {
                        display(head);
                }
                else if(option == 5)
                {
                        printf("Exiting...\n");
                }
                else
                {
                        printf("input is not valid\n");
                }

        }
        return 0;
}

                                                                  60,0-1        Bot
