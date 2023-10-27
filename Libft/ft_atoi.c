/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: dode-boe <dode-boe@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/03 13:28:23 by dode-boe      #+#    #+#                 */
/*   Updated: 2023/10/27 12:10:25 by dode-boe      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	i;
	int	num;
	int	neg;

	i = 0;
	num = 0;
	neg = 0;
	if (nptr[i] == '-')
	{
		neg = 1;
		i++;
	}
	else if (nptr[i] == '+' || nptr[i] == ' ')
		i++;
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		if (neg == 1)
			num = (num * 10) - (nptr[i] - '0');
		else
			num = (num * 10) + (nptr[i] - '0');
		i++;
	}
	return (num);
}

// int	main(void)
// {
// 	char	str1[] = "-2147483648";
// 	char	str2[] = "2147483647";
// 	char	str3[] = "0";
// 	char	str4[] = "+500005";
// 	char	str5[] = "-9-093";
// 	char	str6[] = "e";
// 	printf("test 1: first result is real function, second is mine\n");
// 	printf("%d\n", atoi(str1));
// 	printf("%d\n", ft_atoi(str1));
// 	printf("test 2: first result is real function, second is mine\n");
// 	printf("%d\n", atoi(str2));
// 	printf("%d\n", ft_atoi(str2));
// 	printf("test 3: first result is real function, second is mine\n");
// 	printf("%d\n", atoi(str3));
// 	printf("%d\n", ft_atoi(str3));
// 	printf("test 4: first result is real function, second is mine\n");
// 	printf("%d\n", atoi(str4));
// 	printf("%d\n", ft_atoi(str4));
// 	printf("test 5: first result is real function, second is mine\n");
// 	printf("%d\n", atoi(str5));
// 	printf("%d\n", ft_atoi(str5));
// 	printf("test 6: first result is real function, second is mine\n");
// 	printf("%d\n", atoi(str6));
// 	printf("%d\n", ft_atoi(str6));
// }
