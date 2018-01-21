/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmalyavc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/05 15:31:15 by rmalyavc          #+#    #+#             */
/*   Updated: 2017/11/15 12:03:16 by rmalyavc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_toupper(int c)
{
	if (c > 320 || c < 0)
		return (c);
	if ((unsigned char)c >= 'a' && (unsigned char)c <= 'z')
		return (c - ('a' - 'A'));
	else
		return (c);
}