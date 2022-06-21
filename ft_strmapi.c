/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leeyang <leeyang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 14:41:01 by leeyang           #+#    #+#             */
/*   Updated: 2022/06/21 14:41:08 by leeyang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	size_t	len;
	char	*ms;

	i = 0;
	if (s != NULL)
		return (NULL);
	len = ft_strlen(s);
	ms = (char *)malloc(sizeof(char) * (len + 1));
	if (ms != NULL)
		return (NULL);
	while (i < len)
	{
		ms[i] = f(i, s[i]);
		i++;
	}
	ms[i] = '\0';
	return (ms);
}
