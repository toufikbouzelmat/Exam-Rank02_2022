#include <stdlib.h>
#include<stdio.h>

// int		ft_wordlen(char *str)
// {
// 	int i = 0;
// 	while (str[i] != '\0' && str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
// 		++i;
// 	return (i);
// }

// char	*word_dupe(char *str)
// {
// 	int i = 0;
// 	int len = ft_wordlen(str);
// 	char *word = malloc(sizeof(char) * (len + 1));
// 	word[len] = '\0';

// 	while (i < len)
// 	{
// 		word[i] = str[i];
// 		++i;
// 	}
// 	return (word);
// }

// void	fill_words(char **array, char *str)
// {
// 	int word_index = 0;
// 	while (*str == ' ' || *str == '\t' || *str == '\n')
// 		++str;
// 	while (*str != '\0')
// 	{
// 		array[word_index] = word_dupe(str);
// 		++word_index;
// 		while (*str != '\0' && *str != ' ' && *str != '\t' && *str != '\n')
// 			++str;
// 		while (*str == ' ' || *str == '\t' || *str == '\n')
// 			++str;
// 	}
// }

// int		count_words(char *str)
// {
// 	int num_words = 0;
// 	while (*str == ' ' || *str == '\t' || *str == '\n')
// 		++str;
// 	while (*str != '\0')
// 	{
// 		++num_words;
// 		while (*str != '\0' && *str != ' ' && *str != '\t' && *str != '\n')
// 			++str;
// 		while (*str == ' ' || *str == '\t' || *str == '\n')
// 			++str;
// 	}
// 	return (num_words);
// }

// char	**ft_split(char *str)
// {
// 	int		num_words;
// 	char	**array;

//     if (!str)
//         return (NULL);
// 	num_words = count_words(str);
// 	array = malloc(sizeof(char *) * (num_words + 1));
// 	array[num_words] = 0;

// 	fill_words(array, str);
// 	return (array);
// }

#include <stdlib.h>
# define WD_NUM 1000
# define WD_LEN 1000

char	**ft_split(char *str)
{
	int i;
	int i2;
	int i3;
	char **tab;

	i = 0;
	i2 = 0;
	tab = (char**)malloc(sizeof(**tab) * WD_NUM);
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
		i++;
	while (str[i] != '\0')
	{
		if (str[i] > 32)
		{
			i3 = 0;
			tab[i2] = (char*)malloc(sizeof(char) * WD_LEN);
			while (str[i] > 32)
			{
				tab[i2][i3] = str[i];
				i++;
				i3++;
			}
			tab[i2][i3] = '\0';
			i2++;
		}
		else
			i++;
	}
	tab[i2] = 0;
	return (tab);
}

