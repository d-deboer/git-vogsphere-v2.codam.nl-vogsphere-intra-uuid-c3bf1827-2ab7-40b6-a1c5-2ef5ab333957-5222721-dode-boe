/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strmapi.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: dode-boe <dode-boe@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/05 12:36:41 by dode-boe      #+#    #+#                 */
/*   Updated: 2023/10/27 12:20:43 by dode-boe      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// static char ft_mapiapply(unsigned int i, char s);

// int	main(void)
// {
// 	char	str1[] = "DRUNKIFY THIS UPPERCASE";
// 	char	str2[] = "drunkify this lowercase";
// 	char	*ptr;
// 	printf("test 1; applying +32. 1 is string before, 2 is string after\n");
// 	printf("%s\n", str1);
// 	ptr = ft_strmapi(str1, &ft_mapiapply);
// 	printf("%s\n", ptr);
// 	if (ptr)
// 		free(ptr);
// 	printf("test 2; applying -32. 1 is string before, 2 is string after\n");
// 	printf("%s\n", str2);
// 	ptr = ft_strmapi(str2, &ft_mapiapply);
// 	printf("%s\n", ptr);
// 	if (ptr)
// 		free(ptr);
// }

// static char ft_mapiapply(unsigned int i, char s)
// {
// 	if ((s >= 'A' && s <= 'Z') && i % 2 == 0)
// 		return (s + 32);
// 	else if ((s >= 'a' && s <= 'z') && i % 2 == 1)
// 		return (s - 32);
// 	return (s);
// }

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*s2;

	s2 = (char *)malloc(ft_strlen(s) + 1 * sizeof (char));
	if (!s2)
		return (NULL);
	i = 0;
	while (s[i])
	{
		s2[i] = f(i, (char)s[i]);
		i++;
	}
	s2[i] = '\0';
	return (s2);
}
