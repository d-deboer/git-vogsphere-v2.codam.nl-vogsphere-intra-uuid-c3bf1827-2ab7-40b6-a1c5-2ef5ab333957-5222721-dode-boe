/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strnstr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: dode-boe <dode-boe@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/05 12:58:09 by dode-boe      #+#    #+#                 */
/*   Updated: 2023/10/27 11:56:18 by dode-boe      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	i2;
	size_t	temp_i;

	i = 0;
	if (little[0] == '\0')
		return ((char *)big);
	while (big[i] && i < len)
	{
		i2 = 0;
		if (big[i] == little[i2])
		{
			temp_i = i;
			while (big[i] == little[i2])
			{
				i++;
				i2++;
				if (little[i2] == '\0')
					return ((char *)&big[temp_i]);
			}
		}
		i++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	char	hay1[] = "Find the needle in the haystack";
// 	char	ndl1[] = "needle";
// 	char	ndl1_2[] = "";
// 	char	hay2[] = "";
// 	char	ndl2[] = "I shouldn't find this";
// 	char	hay3[] = "needl but that's not the real needle, this is the needle";
// 	printf("testing following haystack and needle \n");
// 	printf("%s\n", hay1);
// 	printf("%s\n", ndl1);
// 	printf("test beginning, 1 is real, 2 is mine\n");
// 	printf("%s\n", strnstr(hay1, ndl1, 31));
// 	printf("%s\n", ft_strnstr(hay1, ndl1, 31));
// 	printf("testing following haystack and needle \n");
// 	printf("%s\n", hay1);
// 	printf("%s\n", ndl1_2);
// 	printf("test beginning, 1 is real, 2 is mine\n");
// 	printf("%s\n", strnstr(hay1, ndl1_2, 31));
// 	printf("%s\n", ft_strnstr(hay1, ndl1_2, 31));
// 	printf("testing following haystack and needle \n");
// 	printf("%s\n", hay1);
// 	printf("%s\n", ndl1_2);
// 	printf("test beginning, 1 is real, 2 is mine\n");
// 	printf("%s\n", strnstr(hay1, ndl1_2, 100));
// 	printf("%s\n", ft_strnstr(hay1, ndl1_2, 100));
// 	printf("testing following haystack and needle \n");
// 	printf("%s\n", hay2);
// 	printf("%s\n", ndl2);
// 	printf("test beginning, 1 is real, 2 is mine\n");
// 	printf("%s\n", strnstr(hay2, ndl2, 21));
// 	printf("%s\n", ft_strnstr(hay2, ndl2, 21));
// 	printf("testing following haystack and needle \n");
// 	printf("%s\n", hay3);
// 	printf("%s\n", ndl1);
// 	printf("test beginning, 1 is real, 2 is mine\n");
// 	printf("%s\n", strnstr(hay3, ndl1, ft_strlen(hay3)));
// 	printf("%s\n", ft_strnstr(hay3, ndl1, ft_strlen(hay3)));
// }
