/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnouvape <pnouvape@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 15:18:04 by pnouvape          #+#    #+#             */
/*   Updated: 2025/09/15 15:19:24 by pnouvape         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*str;
	int		idx;
	int		idx_2;

	idx = 0;
	idx_2 = 0;
	str = malloc(((ft_strlen(s1) + ft_strlen(s2) + 1)) * sizeof(char));
	if (str == NULL)
		return (NULL);
	while (s1[idx] != '\0')
	{
		str[idx] = s1[idx];
		idx++;
	}
	while (s2[idx_2] != '\0')
	{
		str[idx] = s2[idx_2];
		idx++;
		idx_2++;
	}
	str[idx] = '\0';
	return (str);
}

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// void run_test(int test_num, const char *s1, const char *s2, const char *expected)
// {
//     printf("--- Test %d: ft_strjoin(\"%s\", \"%s\") ---\n", test_num, s1, s2);
// 	char *result = ft_strjoin(s1, s2);
// 	int content_ok = 0;
//     int length_ok = 0;
// 	if (result)
//     {
//         if (strcmp(result, expected) == 0)
//             content_ok = 1;
//         if (ft_strlen(result) == ft_strlen(expected))
//             length_ok = 1;

//         printf("     Expected: \"%s\"\n", expected);
//         printf("     Got     : \"%s\"\n", result);
//     }
//     else
//     {
//         printf("     Expected: \"%s\"\n", expected);
//         printf("     Got     : NULL\n");
//     }
// 	if (content_ok && length_ok) {
//         printf("     Result  : ✅ PASS\n\n");
//     } else {
//         printf("     Result  : ❌ FAIL\n\n");
//     }
// 	free(result); // ฟรีหน่วยความจำที่ ft_strjoin สร้างขึ้น
// }
// int main(void)
// {
//     printf("### Testing ft_strjoin ###\n\n");
// 	run_test(1, "tripouille", "42", "tripouille42");
//     run_test(2, "", "42", "42");
//     run_test(3, "42", "", "42");
//     run_test(4, "", "", "");
// 	return 0;
// }