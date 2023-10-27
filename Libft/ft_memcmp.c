/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcmp.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: dode-boe <dode-boe@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/06 12:08:50 by dode-boe      #+#    #+#                 */
/*   Updated: 2023/10/27 11:41:49 by dode-boe      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*s1_c;
	unsigned char	*s2_c;

	s1_c = (unsigned char *)s1;
	s2_c = (unsigned char *)s2;
	i = 0;
	if (n == 0)
		return (0);
	while (s1_c[i] == s2_c[i] && i < n)
		i++;
	return (s1_c[i] - s2_c[i]);
}

// int	main(void)
// {
// 	char	str1[] = "This differs not";
// 	char	str2[] = "This differs";
// 	char	str3[] = "";
// 	char	str4[] = "~";
// 	printf("comparing the following strings\n");
// 	printf("%s\n", str1);
// 	printf("%s\n", str1);
// 	printf("\n");
// 	printf("test begins, 1 is real function, 2 is mine\n");
// 	printf("%i\n", memcmp(str1, str1, 16));
// 	printf("%i\n", ft_memcmp(str1, str1, 16));
// 	printf("comparing the following strings\n");
// 	printf("%s\n", str1);
// 	printf("%s\n", str1);
// 	printf("\n");
// 	printf("test begins, 1 is real function, 2 is mine\n");
// 	printf("%i\n", memcmp(str1, str2, 16));
// 	printf("%i\n", ft_memcmp(str1, str2, 16));
// 	printf("comparing the following strings\n");
// 	printf("%s\n", str3);
// 	printf("%s\n", str4);
// 	printf("\n");
// 	printf("test begins, 1 is real function, 2 is mine\n");
// 	printf("%i\n", memcmp(str3, str4, 16));
// 	printf("%i\n", ft_memcmp(str3, str4, 16));
// }
