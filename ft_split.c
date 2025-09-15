
#include "libft.h"

static void	*ft_free(char **strs, int count)
{
	int	i;

	i = 0;
	while (i < count)
	{
		free(strs[i]);
		i++;
	}
	free(strs);
	return (NULL);
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
	int idx;
	int i;
	int j;
	int word_count;
	int length_word;

	word_count = count_word(s, c);
	str = malloc(sizeof(char *) * (word_count + 1));
	if (str == NULL)
		return (NULL);

	i = 0;
	idx = 0;
	while (i < word_count)
	{
		while (s[idx] == c && s[idx] != '\0')
			idx++;
		length_word = 0;
		while (s[length_word + idx] != c && s[length_word + idx] != '\0')
			length_word++;
		str[i] = malloc(sizeof(char) * (length_word + 1));
		if (str[i] == NULL)
			return (ft_free(str, i));
		j = 0;
		while (j < length_word)
		{
			str[i][j] = s[idx + j];
			j++;
		}
		str[i][j] = '\0';
		idx = idx + length_word;
		i++;
	}
	str[i] = NULL;
	return (str);
}
