/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnouvape <pnouvape@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 15:28:19 by pnouvape          #+#    #+#             */
/*   Updated: 2025/09/15 15:28:45 by pnouvape         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	idx;
	char	*sub;

	idx = 0;
	if (s == NULL)
		return (NULL);
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	if ((ft_strlen(s) - start) < len)
		len = ft_strlen(s) - start;
	sub = malloc(sizeof(char) * (len + 1));
	if (sub == NULL)
		return (NULL);
	while (idx < len)
	{
		sub[idx] = s[start + idx];
		idx++;
	}
	sub[idx] = '\0';
	return (sub);
}

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// void run_test(int test_num, const char *s, unsigned int start, size_t len, const char *expected)
// {
//     printf("--- Test %d: ft_substr(\"%.15s...\", %u, %zu) ---\n", test_num, s, start, len);
// 	char *result = ft_substr(s, start, len);
//     int content_ok = 0;
//     int length_ok = 0;
// 	if (result)
//     {
//         if (strcmp(result, expected) == 0)
//             content_ok = 1;
//         if (ft_strlen(result) == ft_strlen(expected))
//             length_ok = 1;
// 		printf("     Expected: \"%s\"\n", expected);
//         printf("     Got     : \"%s\"\n", result);
//     }
//     else
//     {
//         printf("     Expected: \"%s\"\n", expected);
//         printf("     Got     : NULL\n");
//     }
//     if (content_ok && length_ok) {
//         printf("     Result  : ✅ PASS\n\n");
//     } else {
//         printf("     Result  : ❌ FAIL\n\n");
//     }
// 	free(result);
// }
// int main(void)
// {
//     printf("### Testing ft_substr ###\n\n");
// 	run_test(1, "tripouille", 0, 42000, "tripouille");
//     run_test(2, "tripouille", 1, 1, "r");
//     run_test(3, "tripouille", 100, 1, "");
//     run_test(4, "1", 42, 42000000, "");
//     run_test(5, "0123456789", 9, 10, "9");
//     run_test(6, "42", 0, 0, "");
//     run_test(7, "BONJOUR LES HARICOTS !", 8, 14, "LES HARICOTS !");
//     run_test(8, "test", 1, 2, "es");
// 	return 0;
// }