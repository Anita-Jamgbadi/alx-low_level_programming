#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *  * main - check the code
 *   *
 *    * Return: Always 0.
 *     */
int main(void)
{
	    listint_t *head;
	    head = NULL;
	    add_nodeint_end(&head, 0);
            add_nodeint_end(&head, 1);
	    add_nodeint_end(&head, 2);
	    add_nodeint_end(&head, 3);
	    add_nodeint_end(&head, 4);
	    add_nodeint_end(&head, 98);
	    add_nodeint_end(&head, 402);
	    add_nodeint_end(&head, 1024);
	    print_listint(head);
	    printf("5-----------------\n");
	    insert_nodeint_at_index(&head, 5, 40965);
	    print_listint(head);
	    printf("i work");
	    printf("0-----------------\n");
	    insert_nodeint_at_index(&head, 0, 40960);
	    print_listint(head);
	    printf("i work");
	    printf("9-----------------\n");
	    insert_nodeint_at_index(&head, 9, 40969);
	    print_listint(head);
	    printf("i work");
	    printf("-2-----------------\n");
	    insert_nodeint_at_index(&head, -2, 4096);
	    print_listint(head);
	    printf("i work");
	    free_listint2(&head);
	    return (0);
}
