/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isprint.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: dode-boe <dode-boe@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/03 13:08:58 by dode-boe      #+#    #+#                 */
/*   Updated: 2023/10/27 12:07:39 by dode-boe      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// test

int	ft_isprint(int chk)
{
	if (chk >= 32 && chk <= 126)
		return (16384);
	return (0);
}

// int	main(void)
// {
// 	printf("test 1: first result is real function, second is mine\n");
// 	printf("%d\n", isprint('a'));
// 	printf("%d\n", ft_isprint('a'));
// 	printf("test 2: first result is real function, second is mine\n");
// 	printf("%d\n", isprint('\n'));
// 	printf("%d\n", ft_isprint('\n'));
// 	printf("test 3: first result is real function, second is mine\n");
// 	printf("%d\n", isprint('\0'));
// 	printf("%d\n", ft_isprint('\0'));
// 	printf("test 4: first result is real function, second is mine\n");
// 	printf("%d\n", isprint(' '));
// 	printf("%d\n", ft_isprint(' '));
// 	printf("test 5: first result is real function, second is mine\n");
// 	printf("%d\n", isprint('\r'));
// 	printf("%d\n", ft_isprint('\r'));
// 	printf("test 6: first result is real function, second is mine\n");
// 	printf("%d\n", isprint(5));
// 	printf("%d\n", ft_isprint(5));
// 	printf("test 7: first result is real function, second is mine\n");
// 	printf("%d\n", isprint(9));
// 	printf("%d\n", ft_isprint(9));
// 	printf("test 8: first result is real function, second is mine\n");
// 	printf("%d\n", isprint(127));
// 	printf("%d\n", ft_isprint(127));
// 	printf("test 9: first result is real function, second is mine\n");
// 	printf("%d\n", isprint(10));
// 	printf("%d\n", ft_isprint(10));
// 	printf("test 10: first result is real function, second is mine\n");
// 	printf("%d\n", isprint(92));
// 	printf("%d\n", ft_isprint(92));
// 	printf("test 11: first result is real function, second is mine\n");
// 	printf("%d\n", isprint(28));
// 	printf("%d\n", ft_isprint(28));
// }
