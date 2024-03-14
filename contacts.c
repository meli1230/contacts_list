#include "contacts.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void listInitialize (t_list *list)
{
    //initializes the list and allocates memory
    list->head = (t_node_list*)malloc(sizeof(t_node_list));
    list->head->prev = NULL;
    list->head->next = NULL;
}

void createContact (t_list *list, t_node_list **node)
{
    //creates a new contact, and it inserts it at the beginning of the list
    //memory allocation for the node
    (*node) = (t_node_list*) malloc(sizeof (t_node_list));


    // Read values for the new contact
    printf("\nEnter name: ");
    scanf("%s", (*node)->name);

    printf("\nEnter phone: ");
    scanf("%s", (*node)->phone);

    printf("\nEnter email: ");
    scanf("%s", (*node)->email);

    printf("\nEnter age: ");
    scanf("%d", &((*node)->age));

    if((*node) == NULL)
    {
        return;
    }

    (*node)->next = list->head->next; //the next of the node is the next of the head, so the first element currently
    if(list->head->next != NULL) //if the list is not empty
    {
        list->head->next->prev = (*node); //prev of the first element is the new node
    }
    list->head->next = (*node); //the new first element is the node
    (*node)->prev = list->head; //the prev of the new node is the head
}


void listDelete(t_list *list, t_node_list **node)
{
    //deletes a contact from the list

    if((*node)->prev != NULL)
    {
        (*node)->prev->next = (*node)->next;
    }
    else
    {
        list->head->next = (*node)->next;
    }

    if((*node)->next != NULL)
    {
        (*node)->next->prev = (*node)->prev;
    }
}


void listFree (t_list *list)
{
    //frees the list from the memory
    t_node_list *node;
    node = list->head->next;
    while (node != NULL)
    {
        listDelete(list, &node);
        free(node);
        node = list->head->next;
    }
    free(list->head);
}

t_node_list *listSearch (t_list list, char input_name[])
{
    //searches the list by name and returns the contact when found
    t_node_list *node;
    node = list.head;
    while(node != NULL && strcmp(node->name, input_name) != 0)
    {
        //node wasn't found
        node = node->next;
    }
    return node;
}


void displayList(t_list list)
{
    //prints every element of the list
    t_node_list *node;
    int i = 1;

    node = list.head->next;
    if(node == NULL)
    {
        printf("\nThere are no saved contacts.");
    }

    while (node != NULL)
    {
        printf("\n\nContact number %d: ", i);
        printf("\n\tName: %s", node->name);
        printf("\n\tPhone number: %s", node->phone);
        printf("\n\tE-mail: %s", node->email);
        printf("\n\tAge: %d", node->age);
        i++;
        node = node->next;
    }
}

