/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-bako <ael-bako@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 13:54:15 by ael-bako          #+#    #+#             */
/*   Updated: 2022/10/19 17:48:33 by ael-bako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*p;
	size_t	i;
	size_t	s_len;

	s_len = ft_strlen(s);
	i = 0;
	if (s_len - 1 < start)
		return ft_strdup("");
	if (len > s_len - (size_t)start)
		len = s_len - (size_t)start;
	p = malloc(len + 1);
	if (!p)
		return (NULL);
	while (len > i && s[start] != '\0')
		p[i++] = s[start++];
	p[i] = '\0';
	return (p);
}

