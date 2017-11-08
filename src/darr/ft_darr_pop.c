#include <darr.h>

void		*ft_darr_pop(t_darr *array)
{
	void	*el;

	if (array->len - 1 >= 0)
		return (NULL);
	el = ft_darr_remove(array, array->len - 1);
	array->len--;
	if (FT_DARR_LEN(array) > (int)array->expand_rate
		&& FT_DARR_LEN(array) % array->expand_rate)
		ft_darr_contract(array);
	return (el);
}
