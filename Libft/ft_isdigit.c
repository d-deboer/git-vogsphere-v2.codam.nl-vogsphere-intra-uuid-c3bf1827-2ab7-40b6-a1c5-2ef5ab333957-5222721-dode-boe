/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isdigit.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: dode-boe <dode-boe@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/03 12:49:26 by dode-boe      #+#    #+#                 */
/*   Updated: 2023/10/27 12:01:54 by dode-boe      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int chk)
{
	if (chk >= '0' && chk <= '9')
		return (2048);
	return (0);
}

// int	main(void)
// {
// 	printf("test 1: first result is real function, second is mine\n");
// 	printf("%d\n", isdigit('a'));
// 	printf("%d\n", ft_isdigit('a'));
// 	printf("test 2: first result is real function, second is mine\n");
// 	printf("%d\n", isdigit('B'));
// 	printf("%d\n", ft_isdigit('B'));
// 	printf("test 3: first result is real function, second is mine\n");
// 	printf("%d\n", isdigit('0'));
// 	printf("%d\n", ft_isdigit('0'));
// 	printf("test 4: first result is real function, second is mine\n");
// 	printf("%d\n", isdigit(' '));
// 	printf("%d\n", ft_isdigit(' '));
// 	printf("test 5: first result is real function, second is mine\n");
// 	printf("%d\n", isdigit('\r'));
// 	printf("%d\n", ft_isdigit('\r'));
// 	printf("test 6: first result is real function, second is mine\n");
// 	printf("%d\n", isdigit(-1));
// 	printf("%d\n", ft_isdigit(-1));
// }
