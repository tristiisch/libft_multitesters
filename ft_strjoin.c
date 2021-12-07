/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiraldi <egiraldi@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 01:48:43 by egiraldi          #+#    #+#             */
/*   Updated: 2021/12/02 13:08:28 by egiraldi         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*joined;
	size_t	len;

	len = ft_strlen(s1) + ft_strlen(s2) + 1;
	joined = (char *)ft_calloc(len, sizeof(char));
	if (!joined)
		return (NULL);
	ft_strlcat(joined, s1, len);
	ft_strlcat(joined, s2, len);
	return (joined);
}
