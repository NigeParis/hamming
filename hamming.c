/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hammering.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: 42_Legin <Nige@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 17:31:16 by 42_Legin          #+#    #+#             */
/*   Updated: 2023/06/12 15:17:27 by 42_Legin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include "hamming.h"
#define ERROR -1
/**
*	DECLARATIONS HELPER FUNCTIONS
*/
static int	ft_compare_strands(const char *str1, const char *str2);
/**
*	main function, calculates the hammer difference ex : AACF AASF -> 1 
*/
int	compute(const char *lhs, const char *rhs)
{
	int				result;
	result = ft_compare_strands(lhs, rhs);
	return (result);
}
/**
*	compares two strings of the same length and returns the nbr of differences
*  NOTE FOR LEARNING : - line 50 is the same as underneath.
*
*		if (*str1 != *str2)
*			count_differences++;
*/
static int	ft_compare_strands(const char *str1, const char *str2)
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
