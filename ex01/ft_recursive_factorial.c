/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phmabits <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/17 12:33:23 by phmabits          #+#    #+#             */
/*   Updated: 2020/07/17 13:32:16 by phmabits         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_recursive_factorial(int nb)
{
	if(nb < 0)
	{
		return(0);
	}
	else if (nb > 0)
	{
		return(nb * ft_recursive_factorial(nb - 1));
	}
	else
	{
		return(1);
	}
}
