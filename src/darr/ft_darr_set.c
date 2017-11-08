#include <darr.h>

void		ft_darr_set(t_darr *array, int i, void *el)
{
	if (!(i < array->size))
		return ;
	if (i > array->len)
		array->len = i;
	array->content[i] = el;
}
