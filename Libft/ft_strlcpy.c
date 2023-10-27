/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: dode-boe <dode-boe@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/05 12:19:04 by dode-boe      #+#    #+#                 */
/*   Updated: 2023/10/27 11:54:15 by dode-boe      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	while (src[i] && i < size - 1)
	{
		dst[i] = (char)src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}

// int	main(void)
// {
// 	char	str1[] = "Please copy this exactly";
// 	char	str1_1[] = "Please copy this exactly";
// 	char	str2[] = "";
// 	char	ret[100];

// 	printf("test 1: 1st is real function, 2nd is mine\n");
// 	printf("testing with exact size\n");
// 	printf("\n");
// 	printf("%lu\n", strlcpy(ret, str1, 24));
// 	printf("%s\n", ret);
// 	printf("%lu\n", ft_strlcpy(ret, str1, 24));
// 	printf("%s\n", ret);
// 	printf("\n");
// 	printf("test 2: 1st is real function, 2nd is mine\n");
// 	printf("testing with one less size\n");
// 	printf("\n");
// 	printf("%lu\n", strlcpy(ret, str1, 23));
// 	printf("%s\n", ret);
// 	printf("%lu\n", ft_strlcpy(ret, str1, 23));
// 	printf("%s\n", ret);
// 	printf("\n");
// 	printf("test 3: 1st is real function, 2nd is mine\n");
// 	printf("testing with one more size\n");
// 	printf("\n");
// 	printf("%lu\n", strlcpy(ret, str1, 26));
// 	printf("%s\n", ret);
// 	printf("%lu\n", ft_strlcpy(ret, str1, 26));
// 	printf("%s\n", ret);
// 	printf("\n");
// 	printf("test 4: 1st is real function, 2nd is mine\n");
// 	printf("testing with empty string, 1 size\n");
// 	printf("\n");
// 	printf("%lu\n", strlcpy(ret, str2, 1));
// 	printf("%s\n", ret);
// 	printf("%lu\n", ft_strlcpy(ret, str2, 1));
// 	printf("%s\n", ret);
// 	printf("\n");
// 	printf("test 5: 1st is real function, 2nd is mine\n");
// 	printf("testing with empty string, 0 size\n");
// 	printf("\n");
// 	printf("%lu\n", strlcpy(ret, str2, 0));
// 	printf("%s\n", ret);
// 	printf("%lu\n", ft_strlcpy(ret, str2, 0));
// 	printf("%s\n", ret);
// 	printf("\n");
// 	printf("test 6: 1st is real function, 2nd is mine\n");
// 	printf("testing with overlap\n");
// 	printf("\n");
// 	printf("%lu\n", strlcpy(str1 + 10, str1, 25));
// 	printf("%s\n", ret);
// 	printf("%lu\n", ft_strlcpy(str1_1 + 10, str1_1, 25));
// 	printf("%s\n", ret);
// }
