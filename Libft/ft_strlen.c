/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlen.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: dode-boe <dode-boe@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/05 12:31:28 by dode-boe      #+#    #+#                 */
/*   Updated: 2023/10/27 11:54:36 by dode-boe      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

// int	main(void)
// {
// 	char	str1[] = "Please split this function ";
// 	char	str2[] = "Itxcanxalsoxworkxlikexthis";
// 	char	str3[] = "";
// 	char	str4[] = "                     ";
// 	printf("test 1: 1st is real function, 2nd is mine\n");
// 	printf("%lu\n", strlen(str1));
// 	printf("%lu\n", ft_strlen(str1));
// 	printf("test 2: 1st is real function, 2nd is mine\n");
// 	printf("%lu\n", strlen(str2));
// 	printf("%lu\n", ft_strlen(str2));
// 	printf("test 3: 1st is real function, 2nd is mine\n");
// 	printf("%lu\n", strlen(str3));
// 	printf("%lu\n", ft_strlen(str3));
// 	printf("test 4: 1st is real function, 2nd is mine\n");
// 	printf("%lu\n", strlen(str4));
// 	printf("%lu\n", ft_strlen(str4));
// }
