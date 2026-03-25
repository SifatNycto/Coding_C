#include <stdio.h>
#include <stdlib.h>

// Creating linked list ================

// struct node {
//     int data;
//     struct node *link;
// };

// int main()
// {
//     struct node *head = NULL;
//     head = malloc(sizeof(struct node));
//     head->data = 45;
//     head->link = NULL;

//     struct node *current = malloc(sizeof(struct node));
//     current->data = 98;
//     current->link = NULL;
//     head->link = current;

//     struct node *current2 = malloc(sizeof(struct node));
//     current2->data = 3;
//     current2->link = NULL;
//     current->link = current2;

//     printf("head -> %d -> ", head->data);
//     printf("%d -> ", current->data);
//     printf("%d -> NULL", current2->data);


//     return 0;
// }



//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
// 35

// struct node {
//     int data;
//     struct node *link;
// };

// int main()
// {
//     struct node *head = malloc(sizeof(struct node));
//     head->data = 45;
//     head->link = NULL;

//     struct node *current = malloc(sizeof(struct node));
//     current->data = 98;
//     current->link = NULL;
//     head->link = current;

//     current = malloc(sizeof(struct node));
//     current->data = 3;
//     current->link = NULL;

//     head->link->link = current;

//     printf("head -> %d -> ", head->data);
//     printf("%d -> ", head->link->data);
//     printf("%d", current->data);

//     return 0;
// }

// ............................................................
// #include <stdio.h>
// #include <stdlib.h>

// struct node {
//     int data;
//     struct node *link;
// };

// int main() {
//     struct node *head = NULL;
//     struct node *temp = NULL;

//     // Create first node
//     head = malloc(sizeof(struct node));
//     head->data = 1;
//     head->link = NULL;

//     temp = head;  // temp is last node now

//     // Loop to create remaining nodes
//     for(int i = 2; i <= 100; i++) {
//         struct node *newnode = malloc(sizeof(struct node));
//         newnode->data = i;
//         newnode->link = NULL;

//         temp->link = newnode;  // connect last node to new node
//         temp = newnode;        // move temp to new last node
//     }

//     return 0;
// }

//...........................................................

/*
45 +2000 -> 98 +3000 -> 3 +NULL
1000        2000        3000
👆
👆
1000
head                                            */

// ================>>>>>>>>>>>>>>>>==========>>>>>>>>>>>>>>>

// Traversing Linkedlist >>>>>>>>>>>>>>>>>>>>>>>> 36

// struct node {
//     int data;
//     struct node *link;
// };

// void count_of_nodes(struct node *head);
// int main()
// {
//     struct node *head = malloc(sizeof(struct node));
//     head->data = 45;
//     head->link = NULL;

//     struct node *current = malloc(sizeof(struct node));
//     current->data = 98;
//     current->link = NULL;
//     head->link = current;

//     current = malloc(sizeof(struct node));
//     current->data = 3;
//     current->link = NULL;

//     head->link->link = current;

//     count_of_nodes(head);

//     return 0;
// }
// void count_of_nodes(struct node *head) {
//     int count = 0;

//     if(head == NULL){
//         printf("Linked list is empty");
//         return;
//     }
//     // struct node *ptr = head;
//     struct node *ptr = NULL;
//     ptr = head;
//     while (ptr != NULL) {
//         count++;
//         ptr = ptr->link;
//     }

//     printf("%d", count);
// }




// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

// Printing the linkedlist >>>>>>>>>>>>>>>>> 37

// struct node {
//     int data;
//     struct node *link;
// };
// void print_data(struct node *head);
// int main()
// {
//     struct node *head = NULL;

//     head = malloc(sizeof(struct node));

//     head->data = 1;
//     head->link = NULL;
    
//     struct node *current = malloc(sizeof(struct node));
//     current->data = 2;
//     current->link = NULL;
//     head->link = current;

//     current = malloc(sizeof(struct node));
//     current->data = 3;
//     current->link = NULL;
//     head->link->link = current;

//     print_data(head);

//     return 0;
// }
// void print_data(struct node *head) {
//     if (head == NULL) {
//         printf("Linkedlist is empty");
//         return;
//     }

//     struct node *ptr = NULL;
//     ptr = head;

//     printf("head -> ");
//     while (ptr != NULL) {
//         printf("%d -> ", ptr->data);
//         ptr = ptr->link;
//     }
//     printf("NULL");

// }




// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>



// Inserting node at the end of the linkedlist >>>>>>>>>>>>>>>>> 39

// struct node {
//     int data;
//     struct node *link;
// };
// struct node* add_at_end(struct node *ptr, int data);
// int main()
// {
//     struct node *head = malloc(sizeof(struct node));
//     head->data = 45;
//     head->link = NULL;
    
//     struct node *ptr = head;

//     ptr = add_at_end(ptr, 98);
//     ptr = add_at_end(ptr, 3);
//     ptr = add_at_end(ptr, 67);
    
//     // for printing the whole list after insertion >>>>>
//     ptr = head;     // for to set to the first node

//     printf("head -> ");
//     while (ptr != NULL) {
//         printf("%d -> ", ptr->data);
//         ptr = ptr->link;
//     }
//     printf("NULL");
    
//     return 0;
// }

// struct node* add_at_end(struct node *ptr, int data) {
//     struct node *temp = malloc(sizeof(struct node));

//     temp->data = data;
//     temp->link = NULL;

//     ptr->link = temp;
//     return temp;
// }




// extra >>>>>>>>>>>>=====================--------------============


// Inserting a node in last ..............

// // Node structure
// struct node {
//     int data;
//     struct node *link;
// };

// // Function to add node at end (O(1))
// struct node* add_node_in_ending(struct node *ptr, int data) {

//     struct node *tmp = malloc(sizeof(struct node));
//     tmp->data = data;
//     tmp->link = NULL;

//     ptr->link = tmp;   // attach new node
//     return tmp;        // return new last node
// }

// int main() 
// {
//     // Create first node
//     struct node *head = malloc(sizeof(struct node));
//     head->data = 1;
//     head->link = NULL;

//     // ptr will always point to LAST node
//     struct node *ptr = head;

//     // Insert nodes efficiently
//     for (int i = 2; i <= 5; i++) 
//     {
//         ptr = add_node_in_ending(ptr, i);  // 🔥 IMPORTANT LINE
//     }

//     // Print list
//     struct node *temp = head;
//     printf("head -> ");
//     while (temp != NULL) {   
//         printf("%d -> ", temp->data);
//         temp = temp->link;
//     }
//     printf("NULL");

//     return 0;
// }

// struct node {
//     int data;
//     struct node *link;
// };

// struct node* addnodeinend(struct node *ptr, int data);
// int main()
// {
//     struct node *head = NULL;
//     head = malloc(sizeof(struct node));
//     head->data = 1;
//     head->link = NULL;

//     struct node *ptr = head;

//     for (int i = 2; i < 11; i++)
//     {
//         ptr = addnodeinend(ptr, i);
//     }

//     struct node *temp = head;
//     printf("head -> ");
//     while (temp != NULL)
//     {
//         printf("%i -> ", temp->data);
//         temp = temp->link;
//     }
//     printf("NULL");

//     return 0;
// }

// struct node* addnodeinend(struct node *ptr, int data)
// {
//     struct node *temp = malloc(sizeof(struct node));
//     temp->data = data;
//     temp->link = NULL;

//     ptr->link = temp;

//     return temp;
// }








// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
// 41


// Inserting node at the beginning >>>>>>>>>>>>>> 42..........
// struct node {
//     int data;
//     struct node *link;
// };
// struct node* add_beginning(struct node *head, int Data);
// int main()
// {
//     struct node *head = NULL;
//     head = malloc(sizeof(struct node));
//     head->data = 1;
//     head->link = NULL;

//     struct node *ptr = NULL;
//     ptr = malloc(sizeof(struct node));
//     ptr->data = 2;
//     ptr->link = NULL;
//     head->link = ptr;

//     ptr = malloc(sizeof(struct node));
//     ptr->data = 3;
//     ptr->link = NULL;

//     head->link->link = ptr;

//     int Data = 0;

//     head = add_beginning(head, Data);

//     struct node *t = head;
//     printf("head -> ");
//     while (t != NULL)
//     {
//         printf("%d -> ", t->data);
//         t = t->link;
//     }
//     printf("NULL");

//     return 0;
// }
// struct node* add_beginning(struct node *head, int Data)
// {
//     struct node *temp = malloc(sizeof(struct node));
//     temp->data = Data;
//     temp->link = NULL;

//     temp->link = head;
//     head = temp;
//     return head;
// }



/////// or inserting || some changes || pass by reference 44
// without returning head..............
struct node {
    int data;
    struct node *link;
};
struct node* add_beginning(struct node **head, int Data);
int main()
{
    struct node *head = NULL;
    head = malloc(sizeof(struct node));
    head->data = 1;
    head->link = NULL;

    struct node *ptr = NULL;
    ptr = malloc(sizeof(struct node));
    ptr->data = 2;
    ptr->link = NULL;
    head->link = ptr;

    ptr = malloc(sizeof(struct node));
    ptr->data = 3;
    ptr->link = NULL;

    head->link->link = ptr;

    int Data = 0;

    add_beginning(&head, Data);

    struct node *t = head;
    printf("head -> ");
    while (t != NULL)
    {
        printf("%d -> ", t->data);
        t = t->link;
    }
    printf("NULL");

    return 0;
}
struct node* add_beginning(struct node **head, int Data)
{
    struct node *temp = malloc(sizeof(struct node));
    temp->data = Data;
    temp->link = NULL;

    temp->link = *head;
    *head = temp;
}