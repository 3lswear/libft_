#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	return ((void)ft_memset(s, 0, n));
}
