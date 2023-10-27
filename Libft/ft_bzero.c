/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_bzero.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: dode-boe <dode-boe@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/06 17:19:47 by dode-boe      #+#    #+#                 */
/*   Updated: 2023/10/27 12:08:48 by dode-boe      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// test a bit further

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*r;

	r = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		r[i] = '\0';
		i++;
	}
}

// int	main(void)
// {
// 	char	str1[] = "-2147483648";
// 	char	str1_2[] = "-2147483648";
// 	char	str2[] = "2147483647";
// 	char	str2_2[] = "2147483647";
// 	// char	str3[] = "0";
// 	// char	str3_2[] = "0";
// 	// char	str4[] = "+500005";
// 	// char	str4_2[] = "+500005";
// 	// char	str5[] = "-9-093";
// 	// char	str5_2[] = "-9-093";
// 	// char	str6[] = "e";
// 	// char	str6_2[] = "e";
// 	bzero(str1, strlen(str1));
// 	ft_bzero(str1_2, strlen(str1_2));
// 	bzero(str2, (strlen(str2) - 1));
// 	ft_bzero(str2_2, (strlen(str2_2) - 1));
// 	// bzero(str3, 0);
// 	// ft_bzero(str3_2, 0);
// 	// bzero(str4, -10);
// 	// ft_bzero(str4_2, -10);
// 	printf("test 1: first result is real function, second is mine\n");
// 	printf("%s\n", str1);
// 	printf("%s\n", str1_2);
// 	printf("test 2: first result is real function, second is mine\n");
// 	printf("%s\n", str2);
// 	printf("%s\n", str2_2);
// 	// printf("test 3: first result is real function, second is mine\n");
// 	// printf("%s\n", str3);
// 	// printf("%s\n", str3_2);
// 	// printf("test 4: first result is real function, second is mine\n");
// 	// printf("%s\n", str4);
// 	// printf("%s\n", str4_2);
// 	// printf("test 5: first result is real function, second is mine\n");
// 	// printf("%s\n", str5);
// 	// printf("%s\n", str5_2);
// 	// printf("test 6: first result is real function, second is mine\n");
// 	// printf("%s\n", str6);
// 	// printf("%s\n", str6_2);
// }
