/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_toupper.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: dode-boe <dode-boe@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/03 13:34:10 by dode-boe      #+#    #+#                 */
/*   Updated: 2023/10/27 11:58:09 by dode-boe      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

// int	main(void)
// {
// 	unsigned char	a = 'a';
// 	unsigned char	b = 'B';
// 	unsigned char	c = 'c';
// 	char	d = 'd';
// 	unsigned char	e = 245;
// 	printf("test 1: first result is real function, second is mine\n");
// 	printf("%d\n", toupper(a));
// 	printf("%d\n", ft_toupper(a));
// 	printf("test 2: first result is real function, second is mine\n");
// 	printf("%d\n", toupper(b));
// 	printf("%d\n", ft_toupper(b));
// 	printf("test 3: first result is real function, second is mine\n");
// 	printf("%d\n", toupper(c));
// 	printf("%d\n", ft_toupper(c));
// 	printf("test 4: first result is real function, second is mine\n");
// 	printf("%d\n", toupper(d));
// 	printf("%d\n", ft_toupper(d));
// 	printf("test 5: first result is real function, second is mine\n");
// 	printf("%d\n", toupper(e));
// 	printf("%d\n", ft_toupper(e));
// }
