/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: dode-boe <dode-boe@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/04 17:45:58 by dode-boe      #+#    #+#                 */
/*   Updated: 2023/10/27 11:53:47 by dode-boe      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	len;
	size_t	dsti;

	i = 0;
	dsti = strlen(dst);
	if (!src)
		return (0);
	if (!*src || dsti > size)
		return (size + strlen(src));
	len = dsti;
	size -= len;
	while (src[i] && i < size - 1)
	{
		dst[len + i] = (char)src[i];
		i++;
	}
	while (i < size)
	{
		dst[len + i] = '\0';
		i++;
	}
	return (dsti + strlen(src));
}

// int	main(void)
// {
// 	char	str1[] = "Please copy this exactly";
// 	char	str1_1[] = "Please copy this exactly";
// 	char	str2[] = "";
// 	char	ret[1000];
// 	char	ret1[1000];

// 	bzero(ret, 1000);
// 	bzero(ret1, 1000);
// 	bzero(str1 - 11, 11);
// 	bzero(str1_1 - 11, 11);

// 	printf("test 1: 1st is real function, 2nd is mine\n");
// 	printf("testing with exact size\n");
// 	printf("\n");
// 	printf("%lu\n", strlcat(ret, str1, 25));
// 	printf("%s\n", ret);
// 	printf("%lu\n", ft_strlcat(ret1, str1, 25));
// 	printf("%s\n", ret1);
// 	printf("\n");
// 	// printf("test 2: 1st is real function, 2nd is mine\n");
// 	// printf("testing with one less size\n");
// 	// printf("\n");
// 	// printf("%lu\n", strlcat(ret, str1, 23));
// 	// printf("%s\n", ret);
// 	// printf("%lu\n", ft_strlcat(ret1, str1, 23));
// 	// printf("%s\n", ret1);
// 	// printf("\n");
// 	printf("test 3: 1st is real function, 2nd is mine\n");
// 	printf("testing with one more size\n");
// 	printf("\n");
// 	printf("%lu\n", strlcat(ret, str1, 26));
// 	printf("%s\n", ret);
// 	printf("%lu\n", ft_strlcat(ret1, str1, 26));
// 	printf("%s\n", ret1);
// 	printf("\n");
// 	printf("test 4: 1st is real function, 2nd is mine\n");
// 	printf("testing with empty string, 1 size\n");
// 	printf("\n");
// 	printf("%lu\n", strlcat(ret, str2, 5));
// 	printf("%s\n", ret);
// 	printf("%lu\n", ft_strlcat(ret1, str2, 5));
// 	printf("%s\n", ret1);
// 	printf("\n");
// 	printf("test 5: 1st is real function, 2nd is mine\n");
// 	printf("testing with empty string, 0 size\n");
// 	printf("\n");
// 	printf("%lu\n", strlcat(ret, str2, 0));
// 	printf("%s\n", ret);
// 	printf("%lu\n", ft_strlcat(ret1, str2, 0));
// 	printf("%s\n", ret1);
// 	printf("\n");
// 	printf("test 6: 1st is real function, 2nd is mine\n");
// 	printf("testing with overlap\n");
// 	printf("\n");
// 	printf("%lu\n", strlcat(str1 - 10, str1, 25));
// 	printf("%s\n", str1_1 - 10);
// 	printf("%lu\n", ft_strlcat(str1_1 - 10, str1_1, 25));
// 	printf("%s\n", str1_1 - 10);
// 	printf("\n");
// 	printf("test 7: 1st is real function, 2nd is mine\n");
// 	printf("testing with overlap\n");
// 	printf("\n");
// 	printf("%lu\n", strlcat(str1, str1, 30));
// 	printf("%s\n", str1);
// 	printf("%lu\n", ft_strlcat(str1_1, str1_1, 30));
// 	printf("%s\n", str1_1);
// }
