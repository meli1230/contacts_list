/*
 * Contact management application:
 *
 * Data structure used:
 * - doubly linked list
 *
 * Functionalities:
 * - adding a contact
 * - deleting a contact
 * - searching for contact by name
 * - displaying the list of contacts
 * - sorting by name or by age
 */


#include <stdio.h>
#include "contacts.h"
#include "sorting.h"

int main()
{
    t_node_list *node;
    t_list list;
    listInitialize(&list);

    int selection;

    do
    {
        printf("\n\nSelect an option");
        printf("\n\t1: Add a contact");
        printf("\n\t2: Delete a contact");
        printf("\n\t3: Search for a contact");
        printf("\n\t4: Display the contacts list");
        printf("\n\t5: Display the contacts list sorted by name");
        printf("\n\t6: Display the contacts list sorted by age");
        printf("\n\t0: Exit");
        printf("\n-> ");

        scanf("%d", &selection);

        switch (selection)
        {
            case 1:
            {
                createContact(&list, &node);
                printf("\nContact added successfully!\n");
                displayList(list);

                break;
            }

            case 2:
            {
                char name[30];
                displayList(list);

                printf("\nInput the name of the contact you would like to delete: ");
                scanf("%s", name);

                node = listSearch(list, name);
                listDelete(&list, &node);

                displayList(list);
                break;
            }

            case 3:
            {
                char name[30];
                displayList(list);

                printf("\nInput the name of the contact you would like to search: ");
                scanf("%s", name);

                node = listSearch(list, name);
                printf("\nContact found: ");
                printf("\n\tName: %s", node->name);
                printf("\n\tPhone: %s", node->email);
                printf("\n\tEmail: %s", node->email);
                printf("\n\tAge: %d", node->age);

                break;
            }

            case 4:
            {
                displayList(list);
                break;
            }

            case 5:
            {
                sortContactsByName(&list);
                printf("\nThe list is sorted alphabetically by name.");
                displayList(list);
                break;
            }

            case 6:
            {
                sortContactsByAge(&list);
                printf("\nThe list is sorted by age.");
                displayList(list);
                break;
            }

            case 0:
            {
                printf("\nExit successful.");
                break;
            }
            default:
            {
                printf("\nInvalid option. Please choose a number between 0 and 6.");
            }

        }

    }while (selection != 0);

    listFree(&list);


    return 0;
}

