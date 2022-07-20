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
	    printf("N = 5-----------------\n");
	    insert_nodeint_at_index(&head, 5, 40965);
	    print_listint(head);
	    printf("N = 0-----------------\n");
	    insert_nodeint_at_index(&head, 0, 40960);
	    print_listint(head);
	    printf("N = 10-----------------\n");
	    insert_nodeint_at_index(&head, 10, 409610);
	    print_listint(head);
	    printf("N = 12-----------------\n");
	    insert_nodeint_at_index(&head, 12, 409612);
	    print_listint(head);
	    printf("N = 15-----------------\n");
	    insert_nodeint_at_index(&head, 15, 4096915);
	    print_listint(head);
	    printf("N = -2-----------------\n");
	    insert_nodeint_at_index(&head, -2, 40962);
	    print_listint(head);
	    free_listint2(&head);
	    return (0);
}
