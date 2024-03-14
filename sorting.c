/*
 * Functions in this file use 2 different sorting methods, as follows:
*/


#include "sorting.h"
#include "contacts.h"
#include <stdio.h>
#include <string.h>


void swap(t_list *list, t_node_list *b, t_node_list *a)
{
    //function that swaps two nodes

    if (a == NULL || b == NULL || a == b)
    {
        //the sorting is not possible or not needed
        return;
    }

    if(b->next == a)
    {
        b->next = a->next;
        b->next->prev = b;
        a->prev = b->prev;
        a->prev->next = a;
        a->next = b;
        b->prev = a;
    }

    else
    {
        t_node_list *temp1 = b->prev;
        t_node_list *temp2 = a->next;
        b->prev->next = a;
        a->next->prev = b;
        a->prev->next = b;
        a->next->prev = a;
        b->prev = a->prev;
        a->prev = temp1;
        a->next = b->next;
        b->next = temp2;
    }
}


void sortContactsByName(t_list *list)
{
    //insertion sort function to sort contact list by name

    t_node_list *temp_node;

    if(list->head->next == NULL || list->head->next->next == NULL)
    {
        printf("\nThe list is empty or already sorted.");
        return;
    }
    else
    {
        t_node_list *current_node;
        current_node = list->head->next->next;
        while(current_node != NULL)
        {
            temp_node = current_node->prev;
            while (temp_node != NULL && strcmp (current_node->name, temp_node->name) < 0)
            {
                swap(list,current_node, temp_node);
                //current_node = temp_node;
                //temp_node = temp_node->prev;
            }
            current_node =current_node->next;
        }
    }
    printf("\nThe contacts were successfully sorted.");
}


void sortContactsByAge(t_list *list)
{
    //bubble sort function to sort contact list by age
      t_node_list *current_node;
      int swapped; //flag that tells us if an element is sorted or not

      do
      {
          swapped = 0; //initialize to 0 at each iteration
          current_node = list->head->next; //we place on the first element of the array
          while(current_node != NULL)
          {
              if(current_node->next != NULL && current_node->age > current_node->next->age) //verifies if the age of the current node is greater than the age of the following node
              {
                  swap(list, current_node->next, current_node); //if yes, we swap
                  swapped = 1; //and we set the swapped flag to 1
              }
              current_node = current_node->next; //we move further in the list
      }

      }while(swapped); //continue doing this while swapped is != 0
}
