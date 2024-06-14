BRIEF OVERVIEW:
This is a short project, coded in C, that manages a contact list using a doubly linked list. The program allows you to add or remove contacts, to search contacts by name and to display all the contacts. It also includes two sorting functions, each using a different sorting algorithm. 


STRUCTURE: 
|__ main.c         // main program logic
|__ contacts.c     // implementation of contact list functions, such as add, remove, search and display all contacts
|__ contacts.h     // header file associated to contacts.c
|__ sorting.c      // sorting functions implementation
|__ sorting.h      // header file associated to sorting.c


IMPLEMENTATION OF FUNCTIONALITIES:
contacts.c
    - list initialization 
    - add a contact to the list
    - remove a contact from the list
    - empty the list
    - search a contact by name
    - display all contacts

contacts.h
    - swap function that is used by the sorting algorithms
    - insertion sort function that sorts contacts by name
    - bubble sort function that sorts contacts by age

HOW TO RUN:
In order to run this program, you will first need to make sure you have a C compiler installed on your machine, such as GCC or MinGW. Next, you need to clone this project locally. In the end, you simply have to run it, either by using an IDE or directly from the command line. 
