/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmalyavc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/05 11:10:54 by rmalyavc          #+#    #+#             */
/*   Updated: 2018/01/10 18:00:50 by rmalyavc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include "libft.h"

static char	*cut_spare(const char *s)
{
	char	*buffer;
	int		i;

	i = 0;
	while (s[0] == ' ' || s[0] == '\t' || s[0] == '\n' ||
			s[0] == '\r' || s[0] == '\f' || s[0] == '\v')
		s += 1;
	if (s[0] == '+' && s[1] >= '0' && s[1] <= '9')
		s += 1;
	else if ((s[0] == '-' || s[0] == '+') && (s[1] < '0' || s[1] > '9'))
		return (NULL);
	while ((s[i] >= '0' && s[i] <= '9') || (i == 0 && s[i] == '-'))
		i++;
	buffer = (char *)malloc(sizeof(char) * i + 1);
	if (buffer == NULL)
		return (NULL);
	buffer[i] = '\0';
	while (--i >= 0)
		buffer[i] = s[i];
	return (buffer);
}

int			ft_atoi(const char *str)
{
	int				i;
	long long int	res;
	int				factor;
	char			*ptr;

	factor = 1;
	res = 0;
	ptr = cut_spare(str);
	if (ptr == NULL)
		return (0);
	i = ft_strlen(ptr);
	while (--i >= 0)
	{
		if (ptr[i] == '-')
			return (-res);
		res += (ptr[i] - '0') * factor;
		factor *= 10;
	}
	free(ptr);
	return ((int)res);
}
