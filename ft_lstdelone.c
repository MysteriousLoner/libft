/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leeyang <leeyang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 15:30:28 by leeyang           #+#    #+#             */
/*   Updated: 2022/06/21 16:10:53 by leeyang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include "libft.h"

void	ft_memfree(void *ptr)
{
	if (ptr == NULL)
		return ;
	free(ptr);
	ptr = NULL;
}

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	del(lst->content);
	ft_memfree((void *)lst);
}
