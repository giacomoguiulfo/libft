#include <darr.h>

int					ft_darr_contract(t_darr *array)
{
	size_t new_size;

	if (array->len < (int)array->expand_rate)
		new_size = array->expand_rate;
	else
		new_size = array->len;
	return (ft_darr_resize(array, new_size + 1));
}
