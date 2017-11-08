#include <darr.h>

void		*ft_darr_new(t_darr *array)
{
	if (!(array->content_size > 0))
		return (NULL);
	return (ft_memalloc(array->content_size));
}
