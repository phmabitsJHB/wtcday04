/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phmabits <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/17 09:34:54 by phmabits          #+#    #+#             */
/*   Updated: 2020/07/17 12:26:25 by phmabits         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_fibonacci(int index)
{
	if(index < 0)
	{
		return(-1);
	}
	if(index == 0)
	{
		return(0);
	}
	else if(index == 1)
	{
		return(1);
	}
	else
	{
		return(ft_fibonacci(index-1) + ft_fibonacci(index-2));
	}
}
