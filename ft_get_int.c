/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_int.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trofidal <trofidal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/06 16:31:00 by trofidal          #+#    #+#             */
/*   Updated: 2021/03/06 22:26:20 by trofidal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_get_int(char *flags, va_list args)
{
	char *end;
	char *itoa;
	int va_arg; 

	if (ft_strlen(flags) == 0)
	{
		va_arg = va_arg(args, int);
		itoa = ft_itoa((long long int)va_arg);
		if (!(end = ft_calloc(sizeof(end), ft_strlen(itoa) + 1)))
			return (NULL);
		ft_strcpy(end, itoa);
		free(itoa);
		return (end);
	}
	else
	{
        

	}
	return (NULL);
}