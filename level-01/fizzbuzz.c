/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enayimul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/27 15:34:41 by enayimul          #+#    #+#             */
/*   Updated: 2019/11/27 15:35:10 by enayimul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void printnbr (int n)
{
	if (n >= 10)
		printnbr(n / 10);
	n = (n % 10 + '0'); // a digit mod 10 is itself
	write(1, &n, 1);
}

int main (void)
{
	int nbr;

	nbr = 1;
	while (nbr <= 100)
	{
		if ((nbr % 5 == 0) && (nbr % 3 == 0))
			write(1, "fizzbuzz", 8);
		else if (nbr % 3 == 0)
			write (1, "fizz", 4);
		else if (nbr % 5 == 0)
			write (1, "buzz", 4);
		else 
			printnbr(nbr);
		write (1, "\n", 1);
		nbr++;
	}
	return (0);
}
