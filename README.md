    BRIEF OVERVIEW:
This is a short project, coded in C, that manages a contact list using a doubly linked list. The program allows you to add or remove contacts, to search contacts by name and to display all the contacts. It also includes two sorting functions, each using a different sorting algorithm. <br/>


    STRUCTURE:
|__ main.c         // main program logic <br/>
|__ contacts.c     // implementation of contact list functions, such as add, remove, search and display all contacts <br/>
|__ contacts.h     // header file associated to contacts.c <br/>
|__ sorting.c      // sorting functions implementation <br/>
|__ sorting.h      // header file associated to sorting.c <br/>


    IMPLEMENTATION OF FUNCTIONALITIES:
contacts.c <br/>
    "\t"- list initialization <br/>
    - add a contact to the list <br/>
    - remove a contact from the list <br/>
    - empty the list <br/>
    - search a contact by name <br/>
    - display all contacts <br/>

contacts.h <br/>
    - swap function that is used by the sorting algorithms <br/>
    - insertion sort function that sorts contacts by name <br/>
    - bubble sort function that sorts contacts by age <br/>

    HOW TO RUN:
In order to run this program, you will first need to make sure you have a C compiler installed on your machine, such as GCC or MinGW. Next, you need to clone this project locally. In the end, you simply have to run it, either by using an IDE or directly from the command line.  <br/>
