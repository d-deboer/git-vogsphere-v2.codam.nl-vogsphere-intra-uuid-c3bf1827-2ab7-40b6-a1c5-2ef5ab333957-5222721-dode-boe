/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strtrim.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: dode-boe <dode-boe@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/05 16:48:31 by dode-boe      #+#    #+#                 */
/*   Updated: 2023/10/27 12:20:36 by dode-boe      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_strcount(char const *s1, char const *set, int start);
static void		ft_trim(char const *s1, char *s2, size_t start, size_t len);

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*trimstr;
	size_t	i;

	start = ft_strcount(s1, set, 1);
	end = ft_strcount(s1, set, 0);
	printf("%lu\n", end);
	i = ft_strlen(s1) - start - end;
	if (start + end < ft_strlen(s1))
		trimstr = (char *)malloc((i + 1) * sizeof (char));
	else
		return (NULL);
	if (trimstr == 0)
		return (NULL);
	ft_trim(s1, trimstr, start, i);
	return (trimstr);
}

static size_t	ft_strcount(char const *s1, char const *set, int start)
{
	size_t	chrcnt;
	size_t	i;
	size_t	i2;

	if (start == 1)
		i = 0;
	else
		i = ft_strlen(s1) - 1;
	i2 = 0;
	chrcnt = 0;
	while (set[i2])
	{
		if (s1[i] == set[i2])
		{
			chrcnt++;
			if (start == 1)
				i++;
			if (start == 0)
				i--;
			i2 = 0;
		}
		else
			i2++;
	}
	return (chrcnt);
}

static void	ft_trim(char const *s1, char *s2, size_t start, size_t len)
{
	size_t	i;
	size_t	i2;

	i = start;
	i2 = 0;
	while (i2 < len)
	{
		s2[i2] = s1[i];
		i++;
		i2++;
	}
	s2[i2] = '\0';
}

// int	main(void)
// {
// 	char	str1[] = "Please split this function ";
// 	char	set1[] = "Plion";
// 	char	str2[] = "Itxcanxalsoxworkxlikexthis";
// 	char	set2[] = "Tixs";
// 	char	str3[] = "";
// 	char	set3[] = "am.0 ";
// 	char	str4[] = "                     ";
// 	char	set4[] = " ";
// 	char	*ptr;

// 	ptr = ft_strtrim(str1, set1);
// 	printf("%s\n", str1);
// 	printf("%s\n", ptr);
// 	printf("%p\n", ptr);
// 	if (ptr)
// 		free(ptr);
// 	ptr = ft_strtrim(str2, set2);
// 	printf("%s\n", str2);
// 	printf("%s\n", ptr);
// 	if (ptr)
// 		free(ptr);
// 	ptr = ft_strtrim(str3, set3);
// 	printf("%s\n", str3);
// 	printf("%s\n", ptr);
// 	printf("%p\n", ptr);
// 	if (ptr)
// 		free(ptr);
// 	ptr = ft_strtrim(str4, set4);
// 	printf("%s\n", str4);
// 	printf("%s\n", ptr);
// 	printf("%p\n", ptr);
// 	if (ptr)
// 		free(ptr);
// }
