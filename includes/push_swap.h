#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

// DEPENDENCIES
# include <stdlib.h>
# include <unistd.h>
# include "../libs/libft/libft.h"
# include "../libs/ft_printf/ft_printf.h"

//		... Reverse ...		//
void	ft_reverse(int *stack);
void	rra(int *stack);
void	rrb(int *stack);
void	rrr(int *sa, int *sb);
//		... Rotate ...		//
void	ft_rotate(int *stack);
void	ra(int *stack);
void	rb(int *stack);
void	rr(int *sa, int *sb);
//		... Swap ...		//
void	ft_swap(int *stack);
void	sa(int *stack);
void	sb(int *stack);
void	ss(int *swpa, int *swpb);
//		... Push ...		//
void	ft_push(int *from, int *to);
void	pa(int *sa, int *sb);
void	pb(int *sb, int *sa);
//		Memory Manager ...	//
void	allocate_stacks(int **stcka, int **stackb, int size);
int		memfree(int **mem);
//		... String ...		//
int		ft_sstrlen(char **sstr);
//		... Utils ...		//
int		ft_len(int *nums);
int		ft_intinclude(int *nums);
//		Args Manager ...	//
void	args_error(int ac, char **av);
int		get_args(int ac, char **av, int *stack);
#endif
