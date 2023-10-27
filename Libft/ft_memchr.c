/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: dode-boe <dode-boe@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/27 10:27:45 by dode-boe      #+#    #+#                 */
/*   Updated: 2023/10/27 12:24:32 by dode-boe      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ptr;
	unsigned char	cmp;

	i = 0;
	ptr = (unsigned char *)s;
	if (c >= 0 && c <= 255)
		cmp = (unsigned char)c;
	else
		return (NULL);
	while (i < n)
	{
		if (ptr[i] == cmp)
			return (&ptr[i]);
		i++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	char	str1[] = "Please split this function ";
// 	char	str2[] = "Itxcanxalsoxworkxlikexthis";
// 	char	str3[] = "";
// 	char	str4[] = "                     ";
// 	int		i;
// 	char	*memptr;
// 	char	*ftptr;
// 	int		*imemptr;
// 	int		*iftptr;

// 	i = 808464432;
// 	printf("test 1: 1st is real function, 2nd is mine\n");
// 	memptr = (char *)memchr(str1, 's', 27);
// 	printf("%p\n", memptr);
// 	ftptr = (char *)ft_memchr(str1, 's', 27);
// 	printf("%p\n", ftptr);
// 	printf("test 2: 1st is real function, 2nd is mine\n");
// 	memptr = (char *)memchr(str2, 'x', 26);
// 	printf("%p\n", memptr);
// 	ftptr = (char *)ft_memchr(str2, 'x', 26);
// 	printf("%p\n", ftptr);
// 	printf("test 3: 1st is real function, 2nd is mine\n");
// 	memptr = (char *)memchr(str3, ' ', 0);
// 	printf("%p\n", memptr);
// 	ftptr = (char *)ft_memchr(str3, ' ', 0);
// 	printf("%p\n", ftptr);
// 	printf("test 4: 1st is real function, 2nd is mine\n");
// 	memptr = (char *)memchr(str4, ' ', 0);
// 	printf("%p\n", memptr);
// 	ftptr = (char *)ft_memchr(str4, ' ', 0);
// 	printf("%p\n", ftptr);
// 	printf("test 5: 1st is real function, 2nd is mine\n");
// 	memptr = (char *)memchr(str1, '\0', 27);
// 	printf("%p\n", memptr);
// 	ftptr = (char *)ft_memchr(str1, '\0', 27);
// 	printf("%p\n", ftptr);
// 	printf("test 6: 1st is real function, 2nd is mine\n");
// 	memptr = (char *)memchr(str1, 'x', 27);
// 	printf("%p\n", memptr);
// 	ftptr = (char *)ft_memchr(str1, 'x', 27);
// 	printf("%p\n", ftptr);
// 	printf("test 7: 1st is real function, 2nd is mine\n");
// 	memptr = (char *)memchr(str1, '\0', 27);
// 	printf("%p\n", memptr);
// 	ftptr = (char *)ft_memchr(str1, '\0', 27);
// 	printf("%p\n", ftptr);
// 	printf("test 8: finding byte 48 in
//  808464432 (it's only made up of byte 48)\n");
// 	imemptr = (int *)memchr(&i, 48, 4);
// 	printf("%p\n", imemptr);
// 	iftptr = (int *)ft_memchr(&i, 48, 4);
// 	printf("%p\n", iftptr);
// }
