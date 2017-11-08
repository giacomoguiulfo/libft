#include <darr.h>

int					ft_darr_expand(t_darr *array)
{
	size_t old_size;

	old_size = array->size;
	if (ft_darr_resize(array, array->size + array->expand_rate) != 0)
		return (-1);
	ft_memset(array->content + old_size, 0, array->expand_rate + 1);
	return (0);
}
