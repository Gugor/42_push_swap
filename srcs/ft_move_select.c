
#include "../includes/push_swap.c"

//Select the best move from a to b
	//Chose in cost the cheapest
	//if two cheapest select bigger num

//move: push
//move: ra and pb
//move: rb and pb
//move: rr and pb
	//ra and pb
	//rb and pb
//If a > 0 and b == 0

/**
 * Rotates a n moves and push to b 
 *
 */
void ft_ra_pb(t_istack *a, t_istack *b, int movs)
{
	movs++;
	while (--movs > 0)
		ra(a);
	pb(b, a);
}

/**
 * Rotates a n moves and push to b 
 *
 */
void ft_rra_pb(t_istack *a, t_istack *b, int movs)
{
	movs++;
	while (--movs > 0)
		rra(a);
	pb(b, a);
}

/**
 * Rotates b n moves and push to b
 *
 */
void ft_rb_pb(t_istack *a, t_istack *b, int movs)
{
	movs++;
	while (--movs > 0)
		rb(b);
	pb(b,a);
}

/**
 * Rotates b n moves and push to b
 *
 */
void ft_rrb_pb(t_istack *a, t_istack *b, int movs)
{
	movs++;
	while (--movs > 0)
		rrb(b);
	pb(b,a);
}

/**
 * Rotates a n moves a and b and push to b 
 *
 */
void ft_rr_pb(t_istack *a, t_istack *b, int movsa, int movsb)
{
	movsa++;
	movsb++;
	while (--movsa > 0 || --movsb > 0)
	{
		if (movsa > 0 && movsb > 0)
			rr(a, b);
		else
			if (movsa > 0)
				ra(a);
			else
				rb(b);
	}
	pb(b, a);
}

/**
 * Rotates a n moves a and b and push to b 
 *
 */
void ft_rrr_pb(t_istack *a, t_istack *b, int movsa, int movsb)
{
	movsa++;
	movsb++;
	while (--movsa > 0 || --movsb > 0)
	{
		if (movsa > 0 && movsb > 0)
			rrr(a, b);
		else
			if (movsa > 0)
				rra(a);
			else
				rrb(b);
	}
	pb(b, a);
}
