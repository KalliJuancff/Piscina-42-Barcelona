/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfidalgo <jfidalgo@student.42bar(...).com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/01 13:31:41 by jfidalgo          #+#    #+#             */
/*   Updated: 2024/01/01 16:40:31 by jfidalgo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	print_digit(int digit)
{
	char	character;

	character = digit + '0';
	write (1, &character, 1);
}

void	print_number(int n)
{
	if (n < 10)
	{
		print_digit(0);
		print_digit(n);
	}
	else
	{
		print_digit(n / 10);
		print_digit(n % 10);
	}
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
			print_number (number1);
			write (1, " ", 1);
			print_number(number2);
			if (!(number1 == 98 && number2 == 99))
			{
				write (1, ", ", 2);
			}
			number2++;
		}
		number1++;
	}
}

/*
int	main(void)
{
	ft_print_comb2();
	return (0);
}
*/
