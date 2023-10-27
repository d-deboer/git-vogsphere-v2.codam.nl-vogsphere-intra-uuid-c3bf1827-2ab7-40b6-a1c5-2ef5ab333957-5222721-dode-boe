/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: dode-boe <dode-boe@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/04 16:36:47 by dode-boe      #+#    #+#                 */
/*   Updated: 2023/10/27 11:48:52 by dode-boe      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// test

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	if (c > 127 || c < 0)
		return (NULL);
	while (s[i] != '\0')
	{
		if (s[i] == c)
			return ((char *)&s[i]);
		i++;
	}
	if (s[i] == c)
		return ((char *)&s[i]);
	return (NULL);
}

// int	main(void)
// {
// 	char	str1[] = "Please split this function ";
// 	char	str2[] = "Itxcanxalsoxworkxlikexthis";
// 	char	str3[] = "";
// 	char	str4[] = "                     ";
// 	printf("test 1: 1st is real function, 2nd is mine\n");
// 	printf("%s\n", strchr(str1, 's'));
// 	printf("%s\n", ft_strchr(str1, 's'));
// 	printf("test 2: 1st is real function, 2nd is mine\n");
// 	printf("%s\n", strchr(str2, 'x'));
// 	printf("%s\n", ft_strchr(str2, 'x'));
// 	printf("test 3: 1st is real function, 2nd is mine\n");
// 	printf("%s\n", strchr(str3, ' '));
// 	printf("%s\n", ft_strchr(str3, ' '));
// 	printf("test 4: 1st is real function, 2nd is mine\n");
// 	printf("%s\n", strchr(str4, ' '));
// 	printf("%s\n", ft_strchr(str4, ' '));
// 	printf("test 5: 1st is real function, 2nd is mine\n");
// 	printf("%s\n", strchr(str1, '\0'));
// 	printf("%s\n", ft_strchr(str1, '\0'));
// }
