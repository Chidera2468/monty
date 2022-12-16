#include "monty.h"
/**
 * f_add - adds the top two elements of the stack.
 * @head: stack head
 * @counter: line_number
 * Return: no return
*/
void f_add(stack_t **head, unsigned int counter)
{
<<<<<<< HEAD
	int result;

	if (!stack || !*stack || !((*stack)->next))
=======
	stack_t *h;
	int len = 0, aux;

	h = *head;
	while (h)
	{
		h = h->next;
		len++;
	}
	if (len < 2)
>>>>>>> e8c95750c73df09132cdd234ce64279f8b78d56a
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
<<<<<<< HEAD

	result = ((*stack)->next->n) + ((*stack)->n);
	pop(stack, line_cnt); /*For top node*/
	(*stack)->n = result;
=======
	h = *head;
	aux = h->n + h->next->n;
	h->next->n = aux;
	*head = h->next;
	free(h);
>>>>>>> e8c95750c73df09132cdd234ce64279f8b78d56a
}
