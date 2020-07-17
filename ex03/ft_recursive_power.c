/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phmabits <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/17 10:22:58 by phmabits          #+#    #+#             */
/*   Updated: 2020/07/17 12:25:54 by phmabits         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_recursive_power(int nb, int power)
{
	if(power < 0)
	{
		return(0);
	}
	else if(power == 0)
	{
		return(1);
	}
	else
	{
		return(nb * ft_recursive_power(nb, power - 1));
	}
}
