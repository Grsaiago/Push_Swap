/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsaiago <gsaiago@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 11:03:13 by gsaiago           #+#    #+#             */
/*   Updated: 2022/09/26 16:49:53 by gsaiago          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int argc, char **argv)
{
	t_stacks	*stacks;
	
	if (argc < 2)
	{
		write(1, "Error!\n", 7);
		exit(1);
	}
	//check_params(argc, argv);
	stacks = &(t_stacks){0};
	create_stack_a(argc, argv, &stacks->stack_a);
	move_pa(stacks);
	//move_sb(stacks);
	//sorting_algo(t_stacks *stacks);
	print_nodes(stacks->stack_a);
	ps_lstclear(&stacks->stack_a);
}
