/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: 42_Legin <Nige@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 18:24:47 by 42_Legin          #+#    #+#             */
/*   Updated: 2023/06/12 16:39:08 by 42_Legin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include "hamming.h"

int	main(void)
{

	int hamming_result;

	hamming_result = compute("", ""); 
	printf("\n\ntest empty strands %d", hamming_result);	

	hamming_result = compute("A", "A"); 
	printf("\ntest single identical strands %d", hamming_result);

	hamming_result = compute("G", "T"); 
	printf("\ntest single non identical strands %d", hamming_result);	

	hamming_result = compute("GGACTGAAATCTG", "GGACTGAAATCTG"); 
	printf("\ntest identical strands %d", hamming_result);	

	hamming_result = compute("GGACGGATTCTG", "AGGACGGATTCT"); 
	printf("\ntest non identical strands %d", hamming_result);	

	hamming_result = compute("AATG", "AAA"); 
	printf("\ntest first strand longer %d",hamming_result);	

	hamming_result = compute("ATA", "AGTG"); 
	printf("\nsecond strand longer %d",hamming_result);	

	hamming_result = compute("GGACTGAAATCTG", ""); 
	printf("\ntest second empty strand %d",hamming_result);	

	hamming_result = compute("","GGACTGAAATCT"); 
	printf("\ntest first empty strands %d\n\n",hamming_result);	

	return (0);
}
