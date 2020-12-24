/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elvmarti <elvmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/27 13:38:21 by elvmarti          #+#    #+#             */
/*   Updated: 2020/11/25 12:27:19 by elvmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t		ft_strlen(const char *str)
{
	unsigned int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char		*ft_strjoin(char const *s1, char const *s2)
{
	char	*dest;
	size_t	i;

	i = 0;
	if (!s1 || !s2)
		return (NULL);
	dest = (char*)malloc(sizeof(*dest) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!dest)
		return (NULL);
	while (*s1 != '\0')
	{
		dest[i] = *s1;
		i++;
		s1++;
	}
	while (*s2 != '\0')
	{
		dest[i] = *s2;
		i++;
		s2++;
	}
	dest[i] = '\0';
	return (dest);
}

char		*ft_strdup(const char *s)
{
	char	*pt;
	int		size;
	int		i;

	size = 0;
	i = 0;
	while (s[size] != '\0')
		size++;
	if (!(pt = malloc(sizeof(char) * (size + 1))))
		return (NULL);
	if (pt == '\0')
		return (NULL);
	while (i < size)
	{
		pt[i] = s[i];
		i++;
	}
	pt[i] = '\0';
	return (pt);
}

char		*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	unsigned int	len_s;
	char			*str;

	if (!s)
		return (0);
	str = malloc(len + 1);
	if (!str)
		return (NULL);
	i = 0;
	len_s = ft_strlen(s);
	while (i < len && start < len_s)
		str[i++] = s[start++];
	str[i] = '\0';
	return (str);
}

char		*ft_strchr(char *str, int c)
{
	int i;

	i = 0;
	if (str == NULL)
		return (NULL);
	while (str[i] != c)
	{
		if (str[i] == '\0')
			return (0);
		i++;
	}
	return (&str[i]);
}
