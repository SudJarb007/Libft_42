/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnouvape <pnouvape@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 15:25:44 by pnouvape          #+#    #+#             */
/*   Updated: 2025/09/15 19:56:44 by pnouvape         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	idx;

	if (!s)
		return (NULL);
	idx = ft_strlen(s);
	if (c == 0)
		return ((char *)s + idx);
	while (idx > 0)
	{
		if (s[--idx] == (unsigned char)c)
			return ((char *)&s[idx]);
	}
	return (NULL);
}
// int main ()
// {
// 	char s[] = "tripouille";
// 	char *p = strrchr(s, 0);
// 	char *a = ft_strrchr(s, 0);
// 	printf("original:'%s'\nft_:'%s'\n", p, a);
// 	return (0);
// }