#include "../includes/push_swap.h"

/**
 * Allocate memory for stack a and b
 *
 */
void allocate_stacks(t_istack **stcka, t_istack **stckb, int size)
{
	if (*stcka == NULL)
	{
		*stcka = (t_istack *)malloc(sizeof(t_istack));
		if (!stcka)
			exit(EXIT_FAILURE);
		(*stcka)->list = (int *)malloc(size * sizeof(int));
		if ((*stcka)->list == NULL)
			exit(EXIT_FAILURE);
		(*stcka)->list[size] = '\0';
		(*stcka)->len = 0;
	}
	if (*stckb == NULL)
	{
		*stckb = (t_istack *)malloc(sizeof(t_istack));
		if (*stckb == NULL)
			exit(EXIT_FAILURE);
		(*stckb)->list = (int *)malloc(size + 1 * sizeof(int));
		if ((*stckb)->list == NULL)
			exit(EXIT_FAILURE);
		(*stcka)->list[size] = '\0';
		(*stckb)->len = 0;
	}
	return ;
}
/**
  * Allocate memory for stack a and b
  *
  *
  */
void new_stack(t_istack **stck , int size)
 {
     if (*stck == NULL)
     {
         *stck = (t_istack *)malloc(sizeof(t_istack));
         if (!stck)
             exit(EXIT_FAILURE);
         (*stck)->list = (int *)malloc(size + 1 * sizeof(int));
         if ((*stck)->list == NULL)
             exit(EXIT_FAILURE);
         (*stck)->len = 0;
	 }
 } 
/**
 * Free memory safely
 */
int memfree(t_istack **mem)
{
	int indx;
	
	indx = -1;
	if (mem != NULL || (mem != NULL && *mem != NULL))
	{
		if (*mem)
		{
			free((*mem)->list);
			free(*mem);
		}
		mem = NULL;
		return (0);
	}
	return (1);
}
