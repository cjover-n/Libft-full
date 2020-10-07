/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_srcdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjover-n <cjover-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/29 21:20:19 by cjover-n          #+#    #+#             */
/*   Updated: 2020/09/29 21:20:42 by cjover-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcdup(const char *s1, int c)
{
	int		i;
	char	*str;

	i = 0;
	while (s1[i] != (char)c && s1[i] != '\0')
		i++;
	if (!(str = malloc(i + 1 * sizeof(char))))
		return (NULL);
	str[i] = '\0';
	while (i-- > 0)
		str[i] = s1[i];
	return (str);
}