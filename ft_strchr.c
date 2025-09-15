/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnouvape <pnouvape@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 15:13:50 by pnouvape          #+#    #+#             */
/*   Updated: 2025/09/15 15:14:02 by pnouvape         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	idx;

	idx = 0;
	while (s[idx] != '\0')
	{
		if (s[idx] == (unsigned char)c)
			return ((char *)&s[idx]);
		idx++;
	}
	if (s[idx] == (unsigned char)c)
		return ((char *)&s[idx]);
	return (NULL);
}

// int main(void)
// {
//     char dst[] = "asdfgh";
//     char *test = ft_strchr(dst, 'f');

//     printf("%s",test);
// }
