/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isalnum.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: dode-boe <dode-boe@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/03 12:52:47 by dode-boe      #+#    #+#                 */
/*   Updated: 2023/10/27 12:00:46 by dode-boe      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// test

int	ft_isalnum(int chk)
{
	if (ft_isalpha(chk) || ft_isdigit(chk))
		return (8);
	return (0);
}

// int	main(void)
// {
// 	printf("test 1: first result is real function, second is mine\n");
// 	printf("%d\n", isalnum('a'));
// 	printf("%d\n", ft_isalnum('a'));
// 	printf("test 2: first result is real function, second is mine\n");
// 	printf("%d\n", isalnum('B'));
// 	printf("%d\n", ft_isalnum('B'));
// 	printf("test 3: first result is real function, second is mine\n");
// 	printf("%d\n", isalnum('0'));
// 	printf("%d\n", ft_isalnum('0'));
// 	printf("test 4: first result is real function, second is mine\n");
// 	printf("%d\n", isalnum(' '));
// 	printf("%d\n", ft_isalnum(' '));
// 	printf("test 5: first result is real function, second is mine\n");
// 	printf("%d\n", isalnum('\r'));
// 	printf("%d\n", ft_isalnum('\r'));
// 	printf("test 6: first result is real function, second is mine\n");
// 	printf("%d\n", isalnum(-1));
// 	printf("%d\n", ft_isalnum(-1));
// }
