/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_tolower.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: dode-boe <dode-boe@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/03 13:36:23 by dode-boe      #+#    #+#                 */
/*   Updated: 2023/10/27 11:57:38 by dode-boe      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
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
// 	printf("%d\n", tolower(a));
// 	printf("%d\n", ft_tolower(a));
// 	printf("test 2: first result is real function, second is mine\n");
// 	printf("%d\n", tolower(b));
// 	printf("%d\n", ft_tolower(b));
// 	printf("test 3: first result is real function, second is mine\n");
// 	printf("%d\n", tolower(c));
// 	printf("%d\n", ft_tolower(c));
// 	printf("test 4: first result is real function, second is mine\n");
// 	printf("%d\n", tolower(d));
// 	printf("%d\n", ft_tolower(d));
// 	printf("test 5: first result is real function, second is mine\n");
// 	printf("%d\n", tolower(e));
// 	printf("%d\n", ft_tolower(e));
// }
