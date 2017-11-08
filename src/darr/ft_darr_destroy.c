#include <darr.h>

void		ft_darr_destroy(t_darr *array)
{
	if (array)
	{
		if (array->content)
			free(array->content);
		free(array);
	}
}
