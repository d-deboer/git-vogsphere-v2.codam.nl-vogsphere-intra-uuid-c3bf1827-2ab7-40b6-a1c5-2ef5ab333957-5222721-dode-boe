/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strrchr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: dode-boe <dode-boe@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/04 16:45:09 by dode-boe      #+#    #+#                 */
/*   Updated: 2023/10/27 12:24:26 by dode-boe      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	int		temp;
	char	*ret;

	i = 0;
	temp = -1;
	if (c > 127 || c < 0)
		return (NULL);
	while (s[i])
	{
		if (s[i] == c)
			temp = i;
		i++;
	}
	if (s[i] == c)
		temp = i;
	if (temp != -1)
	{
		ret = (char *)&s[temp];
		return (ret);
	}
	return (NULL);
}

// int	main(void)
// {
// 	char	str1[] = "Please split this function ";
// 	char	str2[] = "Itxcanxalsoxworkxlikexthis";
// 	char	str3[] = "";
// 	char	str4[] = "                     ";
// 	printf("test 1: 1st is real function, 2nd is mine\n");
// 	printf("%s\n", strrchr(str1, 's'));
// 	printf("%s\n", ft_strrchr(str1, 's'));
// 	printf("test 2: 1st is real function, 2nd is mine\n");
// 	printf("%s\n", strrchr(str2, 'x'));
// 	printf("%s\n", ft_strrchr(str2, 'x'));
// 	printf("test 3: 1st is real function, 2nd is mine\n");
// 	printf("%s\n", strrchr(str3, ' '));
// 	printf("%s\n", ft_strrchr(str3, ' '));
// 	printf("test 4: 1st is real function, 2nd is mine\n");
// 	printf("%s\n", strrchr(str4, ' '));
// 	printf("%s\n", ft_strrchr(str4, ' '));
// 	printf("test 5: 1st is real function, 2nd is mine\n");
// 	printf("%s\n", strrchr(str1, '\0'));
// 	printf("%s\n", ft_strrchr(str1, '\0'));
// }
