/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: dode-boe <dode-boe@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/07 16:41:57 by dode-boe      #+#    #+#                 */
/*   Updated: 2023/10/27 11:48:28 by dode-boe      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_wordcounter(char const *s, char c, int counting);
static size_t	ft_wordlen(char const *s, char c, size_t word);
static void		ft_splitfree(char **s2, size_t i);
static void		ft_fillword(char const *s, char c, size_t word, char **s2);

char	**ft_split(char const *s, char c)
{
	char	**s2;
	size_t	i;
	size_t	wrdcnt;

	wrdcnt = ft_wordcounter(s, c, 0);
	s2 = (char **)malloc((wrdcnt + 1) * sizeof (char *));
	if (!s2)
		return (NULL);
	i = 0;
	while (i < wrdcnt)
	{
		s2[i] = (char *)malloc(ft_wordlen(s, c, i) * sizeof (char));
		if (!s2[i])
		{
			ft_splitfree(s2, i);
			return (NULL);
		}
		ft_fillword(s, c, i, s2);
		i++;
	}
	s2[i] = NULL;
	return (s2);
}

static size_t	ft_wordcounter(char const *s, char c, int counting)
{
	size_t	wordcount;

	wordcount = 0;
	while (*s)
	{
		if (counting == 0)
		{
			while (*s == c)
				s++;
			if (*s != '\0')
				counting = 1;
		}
		if (counting == 1)
		{
			while (*s != c && *s != '\0')
				s++;
			if (*s == c || *s == '\0')
			{
				wordcount++;
				counting = 0;
			}
		}
	}
	return (wordcount);
}

static size_t	ft_wordlen(char const *s, char c, size_t word)
{
	size_t	wordlength;
	size_t	wordcount;
	size_t	i;

	i = 0;
	wordlength = 0;
	wordcount = -1;
	while (s[i] && wordcount < word)
	{
		while (s[i] != c && s[i] != '\0')
			i++;
		while (s[i] == c)
			i++;
		wordcount++;
	}
	while (s[(i + wordlength)] != c && s[(i + wordlength)] != '\0')
		wordlength++;
	return (wordlength);
}

static void	ft_splitfree(char **s2, size_t i)
{
	if (i > 0)
	{
		i--;
		while (i >= 0)
		{
			free(s2[i]);
			i--;
		}
	}
	free(s2);
}

static void	ft_fillword(char const *s, char c, size_t word, char **s2)
{
	size_t	i2;
	size_t	i;
	size_t	wordcount;

	i2 = 0;
	i = 0;
	wordcount = 0;
	while (s[i] && wordcount < word)
	{
		while (s[i] != c && s[i] != '\0')
			i++;
		while (s[i] == c)
			i++;
		wordcount++;
	}
	while ((s[i + i2] != c) && (s[i + i2] != '\0'))
	{
		s2[wordcount][i2] = (char)s[(i + i2)];
		i2++;
	}
	s2[wordcount][i2] = '\0';
}

// In time, I will think back on this 
// And reminisce about the days
// Where the hardest part of coding
// Was a simple ft_split

// int	main(void)
// {
// 	char	str1[] = "Please split this function ";
// 	char	str2[] = "Itxcanxalsoxworkxlikexthis";
// 	char	str3[] = "";
// 	char	str4[] = "                     ";
// 	int		i;
// 	char	**ptr;
// 	ptr = ft_split(str1, ' ');
// 	i = 0;
// 	printf("%s\n", str1);
// 	printf("%s\n", ptr[0]);
// 	printf("%s\n", ptr[1]);
// 	printf("%s\n", ptr[2]);
// 	printf("%s\n", ptr[3]);
// 	while (ptr[i])
// 	{
// 		free(ptr[i]);
// 		i++;
// 	}
// 	if (ptr)
// 		free(ptr);
// 	ptr = ft_split(str2, 'x');
// 	printf("%s\n", ptr[0]);
// 	printf("%s\n", ptr[1]);
// 	printf("%s\n", ptr[2]);
// 	printf("%s\n", ptr[3]);
// 	printf("%s\n", ptr[4]);
// 	printf("%s\n", ptr[5]);
// 	i = 0;
// 	while (ptr[i])
// 	{
// 		free(ptr[i]);
// 		i++;
// 	}
// 	if (ptr)
// 		free(ptr);
// 	i = 0;
// 	ptr = ft_split(str3, ' ');
// 	printf("%s\n", str3);
// 	printf("%p\n", ptr);
// 	printf("%s\n", ptr[0]);
// 	while (ptr[i])
// 	{
// 		free(ptr[i]);
// 		i++;
// 	}
// 	if (ptr)
// 		free(ptr);
// 	i = 0;
// 	ptr = ft_split(str4, ' ');
// 	printf("%s\n", str4);
// 	printf("%p\n", ptr);
// 	while (ptr[i])
// 	{
// 		free(ptr[i]);
// 		i++;
// 	}
// 	if (ptr)
// 		free(ptr);
// }
