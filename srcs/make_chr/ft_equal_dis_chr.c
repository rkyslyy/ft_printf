/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_equal_dis_chr.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkyslyy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/12 18:41:50 by rkyslyy           #+#    #+#             */
/*   Updated: 2018/01/12 18:41:51 by rkyslyy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../prlib.h"

void	ft_equal_dis_chr(t_specs *specs)
{
	if (specs->leftside == 1)
		specs->zero = 0;
	specs->width -= 1;
}