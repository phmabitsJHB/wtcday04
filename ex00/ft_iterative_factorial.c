/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phmabits <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/17 09:04:43 by phmabits          #+#    #+#             */
/*   Updated: 2020/07/17 13:45:55 by phmabits         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int c;

	c = 1;
	if(nb < 0)
	{
		return(0);
	}
	else if(nb == 0)
	{
		return(c);
	}
	while(nb > 0)
	{
		c = c*nb;
		c--;
	}
	return(c);
}

int main()
{
	printf("%d\n", ft_iteravtive_factorial(5));
	return(0);
}
