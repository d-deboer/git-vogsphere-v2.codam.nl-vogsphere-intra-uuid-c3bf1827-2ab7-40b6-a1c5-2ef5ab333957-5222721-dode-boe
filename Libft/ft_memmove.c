/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memmove.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: dode-boe <dode-boe@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/06 12:28:22 by dode-boe      #+#    #+#                 */
/*   Updated: 2023/10/27 12:24:10 by dode-boe      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*from;
	unsigned char	*to;

	from = (unsigned char *)src;
	to = (unsigned char *)dest;
	i = 0;
	if (dest < src)
	{
		while (i < n)
		{
			to[i] = from[i];
			i++;
		}
	}
	if (dest > src)
	{
		while (i < n)
		{
			to[n - 1] = from[n - 1];
			n--;
		}
	}
	return (dest);
}

// int	main(void)
// {
// 	char	str1[] = "Please don't overlap this";
// 	char	str1_1[] = "Please don't overlap this";
// 	char	str2[] = "This is a completely different string";
// 	char	str2_2[] = "This is a completely different string";

// 	printf("test 1: moving this string 2 places forward:\n");
// 	printf("%s\n", str1);
// 	printf("original strings look like this now, 1 is real, 2 is mine:\n");
// 	memmove(str1 + 2, str1, 24);
// 	ft_memmove(str1_1 + 2, str1_1, 24);
// 	printf("%s\n", str1);
// 	printf("%s\n", str1_1);
// 	printf("from new address, it looks like this:\n");
// 	printf("%s\n", str1 + 2);
// 	printf("%s\n", str1_1 + 2);
// 	printf("test 2: moving this string 2 places backwards:\n");
// 	printf("%s\n", str1 + 2);
// 	printf("original strings look like this now, 1 is real, 2 is mine:\n");
// 	memmove(str1 + 2, str1, 24);
// 	ft_memmove(str1_1 + 2, str1_1, 24);
// 	printf("%s\n", str1 + 2);
// 	printf("%s\n", str1_1 + 2);
// 	printf("from new address, it looks like this:\n");
// 	printf("%s\n", str1);
// 	printf("%s\n", str1_1);
// 	printf("test 3: moving this non overlapping
//  string to the previous address:\n");
// 	printf("%s\n", str2);
// 	printf("original strings look like this now, 1 is real, 2 is mine:\n");
// 	memmove(str1, str2, 26);
// 	ft_memmove(str1_1, str2_2, 26);
// 	printf("%s\n", str2);
// 	printf("%s\n", str2_2);
// 	printf("from new address, it looks like this:\n");
// 	printf("%s\n", str1);
// 	printf("%s\n", str1_1);
// }
