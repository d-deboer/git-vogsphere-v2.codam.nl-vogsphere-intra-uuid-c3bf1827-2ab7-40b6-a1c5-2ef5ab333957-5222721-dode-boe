/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putnbr_fd.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: dode-boe <dode-boe@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/07 15:44:06 by dode-boe      #+#    #+#                 */
/*   Updated: 2023/10/27 11:47:45 by dode-boe      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_putnbr_recurs(int n, int fd);

void	ft_putnbr_fd(int n, int fd)
{
	if (n < 0)
	{
		if (n == -2147483648)
		{
			ft_putstr_fd("-2147483648", fd);
			return ;
		}
		ft_putchar_fd('-', fd);
		n = n * -1;
	}
	if (n == 0)
	{
		ft_putchar_fd('0', fd);
		return ;
	}
	ft_putnbr_recurs(n, fd);
}

static void	ft_putnbr_recurs(int n, int fd)
{
	if (n > 0)
	{
		ft_putnbr_recurs((n / 10), fd);
		ft_putchar_fd((n % 10) + '0', fd);
	}
}

// int	main(void)
// {
// 	char	str1[] = "-2147483648";
// 	char	str2[] = "2147483647";
// 	char	str3[] = "10004";
// 	char	str4[] = "0";
// 	char	str5[] = "-8500052";

// 	printf("test 1: 1 is number I'm entering as int, 2 is function\n");
// 	printf("%s\n", str1);
// 	ft_putnbr_fd(-2147483648, 1);
// 	printf("\n");
// 	printf("test 2: 1 is number I'm entering as int, 2 is function\n");
// 	printf("%s\n", str2);
// 	ft_putnbr_fd(2147483647, 1);
// 	printf("\n");
// 	printf("test 3: 1 is number I'm entering as int, 2 is function\n");
// 	printf("%s\n", str3);
// 	ft_putnbr_fd(10004, 1);
// 	printf("\n");
// 	printf("test 4: 1 is number I'm entering as int, 2 is function\n");
// 	printf("%s\n", str4);
// 	ft_putnbr_fd(0, 1);
// 	printf("\n");
// 	printf("test 5: 1 is number I'm entering as int, 2 is function\n");
// 	printf("%s\n", str5);
// 	ft_putnbr_fd(-8500052, 1);
// 	printf("\n");
// 	printf("test 6: 1 is number I'm entering as int, 2 is function\n");
// 	printf("%s\n", "10000");
// 	ft_putnbr_fd(10000, 1);
// 	printf("\n");
// }
