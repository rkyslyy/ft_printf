/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_int.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkyslyy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 16:26:35 by rkyslyy           #+#    #+#             */
/*   Updated: 2018/01/10 16:26:36 by rkyslyy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../prlib.h"

void	ft_print_int(long long n, t_specs specs)
{
	ft_equal_dis_int(&specs, n);
	if (specs.leftside == 1)
		ft_place_int_left(n, specs);
	else
		ft_place_int_right(n, specs);
}
