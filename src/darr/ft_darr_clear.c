#include <darr.h>

void		ft_darr_clear(t_darr *array)
{
	int i;

	i = 0;
	if (array->content_size > 0)
	{
		while (i < array->len)
		{
			if (array->content[i] != NULL)
				free(array->content[i]);
			++i;
		}
	}
}
