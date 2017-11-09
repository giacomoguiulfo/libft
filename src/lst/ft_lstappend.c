#include <libft.h>

void	ft_lstappend(t_list **alst, t_list *new)
{
	t_list	*node;

	if (alst == NULL)
		return ;
	node = *alst;
	if (node != NULL)
	{
		while (node->next != NULL)
			node = node->next;
		node->next = new;
	}
	else
		*alst = new;
}
