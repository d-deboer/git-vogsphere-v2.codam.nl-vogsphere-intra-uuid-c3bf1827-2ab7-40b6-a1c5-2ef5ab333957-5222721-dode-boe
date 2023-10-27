/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_striteri.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: dode-boe <dode-boe@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/04 17:06:35 by dode-boe      #+#    #+#                 */
/*   Updated: 2023/10/27 11:50:41 by dode-boe      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// static void ft_iteriapply(unsigned int i, char *s);
// static void ft_iteriminusapply(unsigned int i, char *s);

// int	main(void)
// {
// 	char	str1[] = "TYPE THIS IN LOWERCASE";
// 	char	str2[] = "type this in uppercase";

// 	printf("test 1; applying +32. 1 is string before, 2 is string after\n");
// 	printf("%s\n", str1);
// 	ft_striteri(str1, &ft_iteriapply);
// 	printf("%s\n", str1);
// 	printf("test 2; applying -32. 1 is string before, 2 is string after\n");
// 	printf("%s\n", str2);
// 	ft_striteri(str2, &ft_iteriminusapply);
// 	printf("%s\n", str2);
// }

// static void ft_iteriapply(unsigned int i, char *s)
// {
// 	if (s[i] >= 'A' && s[i] <= 'Z')
// 		s[i] = (char)(s[i] + 32);
// }

// static void ft_iteriminusapply(unsigned int i, char *s)
// {
// 	if (s[i] >= 'a' && s[i] <= 'z')
// 		s[i] = (char)(s[i] - 32);
// }

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		f(i, s);
		i++;
	}
}
