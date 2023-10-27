/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strncmp.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: dode-boe <dode-boe@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/05 12:46:17 by dode-boe      #+#    #+#                 */
/*   Updated: 2023/10/27 11:55:52 by dode-boe      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	ss1;
	unsigned char	ss2;

	i = 0;
	while (i < n)
	{
		if (s1[i] == s2[i] && s1[i] != '\0')
			i++;
		else
		{
			ss1 = (unsigned char)s1[i];
			ss2 = (unsigned char)s2[i];
			return (ss1 - ss2);
		}
	}
	return (0);
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
// 	printf("%i\n", strncmp(str1, str1, 16));
// 	printf("%i\n", ft_strncmp(str1, str1, 16));
// 	printf("comparing the following strings\n");
// 	printf("%s\n", str1);
// 	printf("%s\n", str1);
// 	printf("\n");
// 	printf("test begins, 1 is real function, 2 is mine\n");
// 	printf("%i\n", strncmp(str1, str2, 16));
// 	printf("%i\n", ft_strncmp(str1, str2, 16));
// 	printf("comparing the following strings\n");
// 	printf("%s\n", str3);
// 	printf("%s\n", str4);
// 	printf("\n");
// 	printf("test begins, 1 is real function, 2 is mine\n");
// 	printf("%i\n", strncmp(str3, str4, 16));
// 	printf("%i\n", ft_strncmp(str3, str4, 16));
// }
