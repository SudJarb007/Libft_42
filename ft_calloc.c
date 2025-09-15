/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnouvape <pnouvape@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 13:09:52 by pnouvape          #+#    #+#             */
/*   Updated: 2025/09/15 16:10:42 by pnouvape         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*help_ptr;
	size_t			idx;
	size_t			total;
	void			*ptr;

	idx = 0;
	total = nmemb * size;
	ptr = (char *)malloc(total);
	if (ptr == NULL)
		return (NULL);
	help_ptr = (unsigned char *)ptr;
	while (idx < total)
	{
		help_ptr[idx] = 0;
		idx++;
	}
	return (ptr);
}
