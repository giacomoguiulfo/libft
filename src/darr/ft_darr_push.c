#include <darr.h>

int			ft_darr_push(t_darr *array, void *el)
{
	array->content[array->len] = el;
	array->len++;
	if (FT_DARR_LEN(array) >= FT_DARR_SIZE(array))
		return (ft_darr_expand(array));
	else
		return (0);
}
