/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DoesMyNumberLookBigInThis?.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unluckypleasure <unluckypleasure@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 03:00:37 by unluckyplea       #+#    #+#             */
/*   Updated: 2020/11/16 04:21:23 by unluckyplea      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

int		power(int a, int pover)
{
	if (pover > 1)
		return(a * power(a,pover - 1));
	return(a);
}

bool	narcissistic(int num)
{
	int kek  = num;
	int sum = 0;
	int i = 0;
	int buf;
	while (kek != 0)
	{
		kek = kek / 10;
			i++;
	}
	kek = num;
	buf = i;
	while (buf != 0)
	{
		sum = sum + power(kek % 10,i);
		kek = (kek/10);
		buf--;
	}
	if(sum == num)
		return true;
	else
		return false;
}
