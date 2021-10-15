/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaurent <jlaurent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 16:40:30 by jlaurent          #+#    #+#             */
/*   Updated: 2021/10/15 13:25:10 by jlaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*ptr;
	int		i;

	i = count * size;
	ptr = malloc(i);
	if (i == 0)
		return (malloc(0));
	if (ptr == NULL)
		return (NULL);
	ft_memset(ptr, 0, i);
	return (ptr);
}
