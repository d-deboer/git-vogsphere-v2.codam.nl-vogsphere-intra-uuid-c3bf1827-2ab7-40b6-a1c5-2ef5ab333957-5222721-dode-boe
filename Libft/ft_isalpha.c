/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isalpha.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: dode-boe <dode-boe@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/03 12:44:22 by dode-boe      #+#    #+#                 */
/*   Updated: 2023/10/27 12:01:10 by dode-boe      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// test

int	ft_isalpha(int chk)
{
	if ((chk >= 'a' && chk <= 'z') || (chk >= 'A' && chk <= 'Z'))
		return (1024);
	return (0);
}

// int	main(void)
// {
// 	printf("test 1: first result is real function, second is mine\n");
// 	printf("%d\n", isalpha('a'));
// 	printf("%d\n", ft_isalpha('a'));
// 	printf("test 2: first result is real function, second is mine\n");
// 	printf("%d\n", isalpha('\n'));
// 	printf("%d\n", ft_isalpha('\n'));
// 	printf("test 3: first result is real function, second is mine\n");
// 	printf("%d\n", isalpha('\0'));
// 	printf("%d\n", ft_isalpha('\0'));
// 	printf("test 4: first result is real function, second is mine\n");
// 	printf("%d\n", isalpha(' '));
// 	printf("%d\n", ft_isalpha(' '));
// 	printf("test 5: first result is real function, second is mine\n");
// 	printf("%d\n", isalpha('\r'));
// 	printf("%d\n", ft_isalpha('\r'));
// 	printf("test 6: first result is real function, second is mine\n");
// 	printf("%d\n", isalpha(-1));
// 	printf("%d\n", ft_isalpha(-1));
// }
