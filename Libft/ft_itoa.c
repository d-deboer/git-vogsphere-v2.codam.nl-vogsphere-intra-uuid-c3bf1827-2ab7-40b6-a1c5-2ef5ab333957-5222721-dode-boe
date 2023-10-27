/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_itoa.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: dode-boe <dode-boe@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/03 14:00:39 by dode-boe      #+#    #+#                 */
/*   Updated: 2023/10/27 12:09:37 by dode-boe      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// fix and test

#include "libft.h"

int		ft_deccnt(long n2);
void	ft_filler(char *str, long n, int neg, int len);

char	*ft_itoa(int n)
{
	long	n2;
	int		neg;
	char	*str;

	neg = 0;
	n2 = (long)n;
	if (n2 < 0)
	{
		n2 = -1 * n2;
		neg = 1;
	}
	str = (char *)malloc((ft_deccnt(n2) + 1 + neg) * sizeof (char));
	if (!str)
		return (NULL);
	ft_filler(str, n2, neg, ft_deccnt(n2));
	str[(ft_deccnt(n2) + neg + 1)] = '\0';
	if (neg == 1)
		str[0] = '-';
	return (str);
}

int	ft_deccnt(long n2)
{
	int	len;

	len = 1;
	while (n2 > 9)
	{
		len++;
		n2 = n2 / 10;
	}
	return (len);
}

void	ft_filler(char *str, long n, int neg, int len)
{
	if (len > 0)
	{
		ft_filler(str, (n / 10), neg, (len - 1));
		str[(len + neg - 1)] = (n % 10) + '0';
	}
}

// int	main(void)
// {
// 	char	*ptr;

// 	printf("test 1: printing int min\n");
// 	ptr = ft_itoa(-2147483647 - 1);
// 	printf("%s\n", ptr);
// 	if (ptr)
// 		free(ptr);
// 	printf("\n");
// 	printf("test 2: printing int max\n");
// 	ptr = ft_itoa(2147483647);
// 	printf("%s\n", ptr);
// 	if (ptr)
// 		free(ptr);
// 	printf("\n");
// 	printf("test 3: printing 1000001\n");
// 	ptr = ft_itoa(1000001);
// 	printf("%s\n", ptr);
// 	if (ptr)
// 		free(ptr);
// 	printf("\n");
// 	printf("test 4: printing 0\n");
// 	ptr = ft_itoa(0);
// 	printf("%s\n", ptr);
// 	if (ptr)
// 		free(ptr);
// 	printf("\n");
// 	printf("test 5: printing -18871002\n");
// 	ptr = ft_itoa(-18871002);
// 	printf("%s\n", ptr);
// 	if (ptr)
// 		free(ptr);
// 	printf("\n");
// 	printf("test 6: printing 1\n");
// 	ptr = ft_itoa(1);
// 	printf("%s\n", ptr);
// 	if (ptr)
// 		free(ptr);
// 	printf("\n");
// }
