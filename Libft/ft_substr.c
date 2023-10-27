/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_substr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: dode-boe <dode-boe@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/06 11:40:28 by dode-boe      #+#    #+#                 */
/*   Updated: 2023/10/27 11:57:22 by dode-boe      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	i2;
	char	*s_r;

	i = start;
	i2 = 0;
	s_r = (char *)malloc((len + 1) * sizeof (char));
	if (s_r == 0)
		return (NULL);
	while (i2 < len)
	{
		s_r[i2] = s[i];
		i2++;
		i++;
	}
	s_r[i2] = '\0';
	return (s_r);
}

// int	main(void)
// {
// 	char	str1[] = "Give me only this, and not anything else";
// 	char	str2[] = "Itxcanxalsoxworkxlikexthis";
// 	char	str3[] = "";
// 	char	str4[] = "        a             ";

// 	char	*ptr;
// 	ptr = ft_substr(str1, 8, 9);
// 	printf("%s\n", str1);
// 	printf("%s\n", ptr);
// 	if (ptr)
// 		free(ptr);
// 	ptr = ft_substr(str2, 0, ft_strlen(str2));
// 	printf("%s\n", str2);
// 	printf("%s\n", ptr);
// 	if (ptr)
// 		free(ptr);
// 	ptr = ft_substr(str3, 0, 0);
// 	printf("%s\n", str3);
// 	printf("%s\n", ptr);
// 	printf("%p\n", ptr);
// 	if (ptr)
// 		free (ptr);
// 	ptr = ft_substr(str4, 8, 1);
// 	printf("%s\n", str4);
// 	printf("%s\n", ptr);
// 	if (ptr)
// 		free (ptr);
// }
