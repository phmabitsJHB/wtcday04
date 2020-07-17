/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phmabits <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/17 12:35:12 by phmabits          #+#    #+#             */
/*   Updated: 2020/07/17 13:06:00 by phmabits         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int ft_iterative_power(int nb, int power)
{
	if(power < 0)
	{
		return(0);
	}
	else if(power < 1)
	{
		return(1);
	}
	else
	{
		return(nb *ft_iterative_power(nb, power - 1));
	}
}

int main()
{
	printf("%d\n", ft_iterative_power(5, 3));
	return(0);
}
