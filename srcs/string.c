#include "../includes/push_swap.h"

int ft_sstrlen(char **sstr)
{
	int count;

	count = 0;
	if(!sstr || !sstr[0])
		return (0);
	while (sstr[count])
		++count;
	return (count);
}
