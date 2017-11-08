#include <darr.h>

void		*ft_darr_remove(t_darr *array, int i)
{
	void *el;

	el = array->content[i];
	array->content[i] = NULL;
	return (el);
}
