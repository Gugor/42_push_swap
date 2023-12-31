#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

//º___ ::: DEPENDENCIES ::: ___º//
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include "../libs/libft/libft.h"
# include "../libs/ft_printf/ft_printf.h"

//º_____ :::  STRUCTS  ::: _____º//
typedef struct s_istack
{
	int *list;
	int *costs;
	int mid;
	int min;
	int max;
	int len;
} t_istack;

//º_______ ::: PROTOTYPES ::: ______º//
//			... Sort Engine ...		//
void		push_swap(t_istack *a, t_istack *b);
//			... Reverse ...			//
void		ft_reverse(t_istack *stack);
void		rra(t_istack *stack);
void		rrb(t_istack *stack);
void		rrr(t_istack *sa, t_istack *sb);
//			... Rotate ...			//
void		ft_rotate(t_istack *stack);
void		ra(t_istack *stack);
void		rb(t_istack *stack);
void		rr(t_istack *sa, t_istack *sb);
//			... Swap ...			//
void		ft_swap(t_istack *stack);
void		sa(t_istack *stack);
void		sb(t_istack *stack);
void		ss(t_istack *swpa, t_istack *swpb);
//			... Push ...			//
void		ft_push(t_istack *from, t_istack *to);
void		pa(t_istack *sa, t_istack *sb);
void		pb(t_istack *sb, t_istack *sa);
//			...	Memory Manager ...			//
void		allocate_stacks(t_istack **stcka, t_istack **stackb, int size);
int			memfree(t_istack **mem);
void		new_stack(t_istack **stck, int size);
//			... String ...			//
int			ft_sstrlen(char **sstr);
//			... Utils ...			//
int			ft_icheckdups(int *nums);
int			is_sorted(t_istack *stck);
int			find_max(int *nums, int len);
//			Args Manager ...		//
void		args_error(int ac, char **av);
int			get_args(int ac, char **av, t_istack *stack);
//			... Prints ...			//
void		print_stack(t_istack *stck);
void		print_stacks(t_istack *stacka, t_istack *stackb);
//			... Maths ...			//
int			ft_max(int *nums, int size);
int			ft_min(int *nums, int size);
//			... Costs ...			//
void		check_costs_a2b(t_istack *a, t_istack *b);
void 		print_costs(t_istack *stack);
#endif
