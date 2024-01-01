/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfidalgo <jfidalgo@student.42bar(...).com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/01 13:31:41 by jfidalgo          #+#    #+#             */
/*   Updated: 2024/01/01 14:24:44 by jfidalgo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

void	print_justified_number(int n)
{
	printf("%02d", n);
	return;

	if (n < 10)
		write (1, "0", 1);
	char digit = n + '0';
	write (1, &digit, 1);
}

void	ft_print_comb2(void)
{
	int	number1;
	int	number2;
	
	number1 = 0;
	while (number1 <= 98)
	{
		number2 = number1 + 1;
		while (number2 <= 99)
		{	
			print_justified_number (number1);
			// write (1, " ", 1);
			printf(" ");
			print_justified_number(number2);
			if (!(number1 == 98 && number2 == 99))
			{
				// write (1, ", ", 2);
				printf(", ");
			}
			number2++;
		}
		number1++;
	}
}

int	main(void)
{
	ft_print_comb2();
	return (0);
}
