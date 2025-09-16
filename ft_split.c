
#include "libft.h"

static void	*ft_free(char **strs, int count)
{
	int	idx;

	idx= 0;
	while (idx < count)
	{
		free(strs[idx]);
		idx++;
	}
	free(strs);
	return (NULL);
}
static char *make_word(const char *s, int len)
{
	char	*word;
	int		j;

	j = 0;
	word = malloc(sizeof(char) * (len + 1));
	if (word == NULL)
		return (NULL);
	while (j < len)
	{
		word[j] = s[j];
		j++;
	}
	word[j] = '\0';
	return (word);
}

static int	count_word(const char *str, char c)
{
	int	idx;
	int	count;

	idx = 0;
	count = 0;
	while (str[idx] != '\0')
	{
		if (str[idx] == c)
			idx++;
		else
		{
			count++;
			while (str[idx] != '\0' && str[idx] != c)
			{
				idx++;
			}
		}
	}
	return (count);
}

char	**ft_split(const char *s, char c)
{
	char **str;
	int i;
	int word_count;
	int length_word;

	word_count = count_word(s, c);
	str = malloc(sizeof(char *) * (word_count + 1));
	if (str == NULL)
		return (NULL);
	i = 0;
	while (i < word_count)
	{
		while (*s == c && *s != '\0')
			s++;
		length_word = 0;
		while (s[length_word] != c && s[length_word] != '\0')
			length_word++;
		str[i] = make_word(s ,length_word);
		if (str[i] == NULL)
			return (ft_free(str, i));
		s = s + length_word;
		i++;
	}
	str[i] = NULL;
	return (str);
}

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// void free_tab(char **tab)
// {
//     if (!tab)
//         return;
//     for (int i = 0; tab[i]; i++)
//     {
//         free(tab[i]);
//     }
//     free(tab);
// }
// void print_tab(const char *label, char **tab)
// {
//     printf("     %s: { ", label);
//     if (!tab)
//     {
//         printf("NULL POINTER");
//     }
//     else
//     {
//         for (int i = 0; tab[i]; i++)
//         {
//             printf("\"%s\", ", tab[i]);
//         }
//         printf("NULL");
//     }
//     printf(" }\n");
// }
// void run_test(const char *test_name, const char *s, char c, char **expected)
// {
//     printf("--- %s ---\n", test_name);
//     printf("Input: ft_split(\"%.20s...\", '%c')\n", s, c);
//     char **result = ft_split(s, c);
//     int passed = 1;
//     if (!result) 
//     {
//         if (expected[0] != NULL)
//             passed = 0;
//     }
//     else
//     {
//         int i = 0;
//         while (expected[i] != NULL && result[i] != NULL)
//         {
//             if (strcmp(expected[i], result[i]) != 0)
//             {
//                 passed = 0;
//                 break;
//             }
//             i++;
//         }
//         if (expected[i] != result[i])
//             passed = 0;
//     }
//     if (passed)
//     {
//         printf("     Result  : ✅ PASS\n\n");
//     } else {
//         printf("     Result  : ❌ FAIL\n");
//         print_tab("Expected", expected);
//         print_tab("Got     ", result);
//         printf("\n");
//     }
//     free_tab(result);
// }
// int main(void)
// {
//     printf("### Testing ft_split ###\n\n");
//     char *expected1[] = {"tripouille", "42", NULL};
//     run_test("Basic split with extra spaces", "  tripouille  42  ", ' ', expected1);
//     char *expected2[] = {"tripouille", NULL};
//     run_test("Split with NUL delimiter", "tripouille", '\0', expected2);
//     char *expected3[] = {NULL};
//     run_test("String with only delimiters", "     ", ' ', expected3);
//     run_test("Empty string", "", ' ', expected3);
//     char *expected5[] = {"chinimala", NULL};
//     run_test("String with no delimiters", "chinimala", ' ', expected5);
//     char *expected6[] = {"Tripouille", NULL};
//     run_test("Word with no spaces", "Tripouille", ' ', expected6);
//     run_test("Word with trailing space", "Tripouille ", ' ', expected6);
//     run_test("Word with leading space", " Tripouille", ' ', expected6);
//     run_test("Word with leading/trailing spaces", " Tripouille ", ' ', expected6);
//     char *expected7[] = {"1", "2", "3", "4", "5", "42", NULL};
//     run_test("Multiple consecutive delimiters", "--1-2--3---4----5-----42", '-', expected7);
//     return 0;
// }