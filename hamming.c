/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hamming.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: 42_Legin <Nige@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 17:31:16 by 42_Legin          #+#    #+#             */
/*   Updated: 2023/06/12 15:10:20 by 42_Legin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "hamming.h"

#define ERROR -1

/**
*	function compute
*	compares two strings of the same length and returns the nbr of differences
*  NOTE FOR LEARNING : - line 32 is the same as underneath.
*
* 32	if (*str1 != *str2)
*			count_differences++;
*/

int	compute(const char *str1, const char *str2)
{
	int	count_differences;

	count_differences = 0;
	while ((*str1) && (*str2))
	{
		count_differences += (*str1 != *str2);
		str2++;
		str1++;
	}
	if (*str1 != *str2)
		return (ERROR);
	return (count_differences);
}
