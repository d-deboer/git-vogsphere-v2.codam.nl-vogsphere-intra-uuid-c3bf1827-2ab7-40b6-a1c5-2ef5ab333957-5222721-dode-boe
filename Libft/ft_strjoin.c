/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strjoin.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: dode-boe <dode-boe@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/04 17:08:52 by dode-boe      #+#    #+#                 */
/*   Updated: 2023/10/27 11:51:43 by dode-boe      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s;
	int		i;
	int		i2;

	i = 0;
	i2 = 0;
	s = (char *)malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof (char));
	if (s == 0)
		return (NULL);
	while (s1[i])
	{
		s[i] = (char)s1[i];
		i++;
	}
	while (s2[i2])
	{
		s[i] = (char)s2[i2];
		i++;
		i2++;
	}
	s[i] = '\0';
	return (s);
}

// int	main(void)
// {
// 	char	str1[] = "This differs not";
// 	char	str3[] = "";
// 	char	str4[] = "~";
// 	char	*ptr;

// 	printf("joining the following strings\n");
// 	printf("%s\n", str1);
// 	printf("%s\n", str1);
// 	printf("\n");
// 	printf("test begins\n");
// 	ptr = ft_strjoin(str1, str1);
// 	printf("%s\n", ptr);
// 	if (ptr)
// 		free(ptr);
// 	printf("joining the following strings\n");
// 	printf("%s\n", str1);
// 	printf("%s\n", str3);
// 	printf("\n");
// 	printf("test begins\n");
// 	ptr = ft_strjoin(str1, str3);
// 	printf("%s\n", ptr);
// 	if (ptr)
// 		free(ptr);
// 	printf("joining the following strings\n");
// 	printf("%s\n", str3);
// 	printf("%s\n", str4);
// 	printf("\n");
// 	printf("test begins\n");
// 	ptr = ft_strjoin(str3, str4);
// 	printf("%s\n", ptr);
// 	if (ptr)
// 		free(ptr);
// }
