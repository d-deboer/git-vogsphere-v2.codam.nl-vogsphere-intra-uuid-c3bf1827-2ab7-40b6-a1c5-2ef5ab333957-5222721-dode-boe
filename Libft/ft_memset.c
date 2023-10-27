/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memset.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: dode-boe <dode-boe@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/06 12:36:08 by dode-boe      #+#    #+#                 */
/*   Updated: 2023/10/27 11:43:20 by dode-boe      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	c2;
	unsigned char	*s2;

	s2 = (unsigned char *)s;
	i = 0;
	if (c > -1 && c < 256)
		c2 = c;
	else
		return (NULL);
	while (i < n)
	{
		s2[i] = c2;
		i++;
	}
	return (s);
}

// int	main(void)
// {
// 	int	integer = 193629;
// 	void	*ptr;
// 	int	*iptr;
// 	unsigned char	*cptr;
// 	int	i;

// 	ptr = &integer;
// 	iptr = &integer;
// 	cptr = (unsigned char *)ptr;
// 	i = 0;
// 	while (i < 4)
// 	{
// 		printf("%c\n", cptr[i]);
// 		i++;
// 	}
// 	printf("%i\n", *iptr);
// 	ft_memset(ptr, 48, 4);
// 	i = 0;
// 	while (i < 4)
// 	{
// 		printf("%c\n", cptr[i]);
// 		i++;
// 	}
// 	printf("%i\n", *iptr);
// }
