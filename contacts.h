#ifndef PRACTICAL_PROJECT_CONTACTS_H
#define PRACTICAL_PROJECT_CONTACTS_H

//#include <stdio.h>

typedef struct node_list
{
    char name[30];
    char phone[15];
    char email[30];
    int age;
    struct node_list *next, *prev;
}t_node_list;

typedef struct
{
    t_node_list *head;
}t_list;



void listInitialize (t_list *list);
void createContact (t_list *list, t_node_list **node);
void listDelete(t_list *list, t_node_list **node);
void listFree (t_list *list);
t_node_list *listSearch (t_list list, char input_name[]);
void displayList(t_list list);



#endif //PRACTICAL_PROJECT_CONTACTS_H


