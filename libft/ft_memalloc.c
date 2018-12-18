/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alagroy- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 20:13:05 by alagroy-          #+#    #+#             */
/*   Updated: 2018/11/09 20:21:41 by alagroy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_memalloc(size_t size)
{
	void	*rtrn;

	if (!(rtrn = malloc(size)))
		return (NULL);
	ft_bzero(rtrn, size);
	return (rtrn);
}
