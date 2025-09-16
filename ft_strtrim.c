/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnouvape <pnouvape@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 15:26:50 by pnouvape          #+#    #+#             */
/*   Updated: 2025/09/15 19:56:44 by pnouvape         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	in_set(char s, char const *set)
{
	int	idx;
	int	len;

	idx = 0;
	len = ft_strlen(set);
	while (idx < len)
	{
		if (s == set[idx])
			return (1);
		idx++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	int		idx;
	char	*new_str;

	i = 0;
	j = ft_strlen(s1) - 1;
	idx = 0;
	if ((s1 == NULL) || (set == NULL))
		return (NULL);
	while (s1[i] != '\0' && in_set(s1[i], set))
		i++;
	while (j > i && in_set(s1[j], set))
		j--;
	new_str = malloc(sizeof(char) * ((j - i) + 2));
	if (new_str == NULL)
		return (NULL);
	while (i <= j)
	{
		new_str[idx] = s1[i];
		i++;
		idx++;
	}
	new_str[idx] = '\0';
	return (new_str);
}

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// void run_test(int test_num, const char *s1, const char *set, const char *expected)
// {
//     printf("--- Test %d: ft_strtrim(\"%s\", \"%s\") ---\n", test_num, s1, set);
// 	char *result = ft_strtrim(s1, set);
// 	int content_ok = 0;
//     int length_ok = 0;
// 	if (result)
//     {
//         if (strcmp(result, expected) == 0)
//         {
//             content_ok = 1;
//         }
// 		if (ft_strlen(result) == ft_strlen(expected))
//         {
//             length_ok = 1;
//         }
// 		printf("     Expected: \"%s\"\n", expected);
//         printf("     Got     : \"%s\"\n", result);
//     }
//     else
//     {
//         printf("     Got     : NULL\n");
//     }
//     if (content_ok && length_ok) {
//         printf("     Result  : ✅ PASS\n\n");
//     } else {
//         printf("     Result  : ❌ FAIL\n\n");
//     }
// 	free(result); // ฟรีหน่วยความจำที่ ft_strtrim สร้างขึ้น
// }
// int main(void)
// {
//     printf("### Testing ft_strtrim ###\n\n");
// 	run_test(1, "   xxxtripouille", " x", "tripouille");
//     run_test(2, "tripouille   xxx", " x", "tripouille");
//     run_test(3, "   xxxtripouille   xxx", " x", "tripouille");
//     run_test(4, "   xxx   xxx", " x", "");
//     run_test(5, "", "123", "");
//     run_test(6, "123", "", "123");
//     run_test(7, "", "", "");
//     run_test(8, "abcdba", "acb", "d");
// 	return 0;
// }