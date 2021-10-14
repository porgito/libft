/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaurent <jlaurent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 11:40:54 by jlaurent          #+#    #+#             */
/*   Updated: 2021/10/13 12:39:13 by jlaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	ft_bzero(void *str, size_t n)
{
	unsigned long	i;
	char			*s;

	i = 0;
	s = (char *) str;
	while (i < n)
	{
		s[i++] = '\0';
	}
}
/*
int main()
{
	char str[50] = "test123test456test789";
	printf("\navant bzero(): %s\n", str);


	ft_bzero(str + 5, 8*sizeof(char));
	printf("apres bzero(): %s", str);
    return 0;
}*/
