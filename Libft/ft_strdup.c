/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strdup.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: dode-boe <dode-boe@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/04 16:56:01 by dode-boe      #+#    #+#                 */
/*   Updated: 2023/10/27 11:49:59 by dode-boe      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*s2;
	int		i;

	i = 0;
	s2 = (char *)malloc((ft_strlen(s) + 1) * sizeof (char));
	if (s2 == 0)
		return (0);
	while (s[i])
	{
		s2[i] = (char)s[i];
		i++;
	}
	s2[i] = '\0';
	return (s2);
}

// int	main(void)
// {
// 	char	str1[] = "Please split this function ";
// 	char	str2[] = "Itxcanxalsoxworkxlikexthis";
// 	char	str3[] = "";
// 	char	str4[] = "                     ";
// 	char	*ptr;

// 	printf("test 1: duplicating this string\n");
// 	printf("%s\n", str1);
// 	printf("my result:\n");
// 	ptr = ft_strdup(str1);
// 	printf("%s\n", ptr);
// 	printf("\n");
// 	if (ptr)
// 		free(ptr);
// 	printf("test 2: duplicating this string\n");
// 	printf("%s\n", str2);
// 	printf("my result:\n");
// 	ptr = ft_strdup(str2);
// 	printf("%s\n", ptr);
// 	printf("\n");
// 	if (ptr)
// 		free(ptr);
// 	printf("test 3: duplicating this string\n");
// 	printf("%s\n", str3);
// 	printf("my result:\n");
// 	ptr = ft_strdup(str3);
// 	printf("%s\n", ptr);
// 	printf("\n");
// 	if (ptr)
// 		free(ptr);
// 	printf("test 4: duplicating this string\n");
// 	printf("%s\n", str4);
// 	printf("my result:\n");
// 	ptr = ft_strdup(str4);
// 	printf("%s\n", ptr);
// 	printf("\n");
// 	if (ptr)
// 		free(ptr);
// }
