#include <darr.h>

void		ft_darr_reverse(t_darr *array)
{
	int len;
	int i;

	if (array == NULL || array->len == 0)
		return ;
	i = 0;
	len = FT_DARR_COUNT(array) - 1;
	while (i < len)
	{
		ft_swap(array->content[i], array->content[len], array->content_size);
		++i;
		--len;
	}
}
