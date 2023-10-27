/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isascii.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: dode-boe <dode-boe@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/03 12:57:26 by dode-boe      #+#    #+#                 */
/*   Updated: 2023/10/27 12:01:26 by dode-boe      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// test

int	ft_isascii(int chk)
{
	if (chk >= 0 && chk <= 127)
		return (1);
	return (0);
}

// int	main(void)
// {
// 	printf("test 1: first result is real function, second is mine\n");
// 	printf("%d\n", isascii('a'));
// 	printf("%d\n", ft_isascii('a'));
// 	printf("test 2: first result is real function, second is mine\n");
// 	printf("%d\n", isascii('\n'));
// 	printf("%d\n", ft_isascii('\n'));
// 	printf("test 3: first result is real function, second is mine\n");
// 	printf("%d\n", isascii('\0'));
// 	printf("%d\n", ft_isascii('\0'));
// 	printf("test 4: first result is real function, second is mine\n");
// 	printf("%d\n", isascii(' '));
// 	printf("%d\n", ft_isascii(' '));
// 	printf("test 5: first result is real function, second is mine\n");
// 	printf("%d\n", isascii('\r'));
// 	printf("%d\n", ft_isascii('\r'));
// 	printf("test 6: first result is real function, second is mine\n");
// 	printf("%d\n", isascii(-1));
// 	printf("%d\n", ft_isascii(-1));
// }
