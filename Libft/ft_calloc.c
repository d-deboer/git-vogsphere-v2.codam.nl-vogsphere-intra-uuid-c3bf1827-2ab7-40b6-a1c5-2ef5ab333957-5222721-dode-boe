/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_calloc.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: dode-boe <dode-boe@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/07 14:50:09 by dode-boe      #+#    #+#                 */
/*   Updated: 2023/10/27 12:23:27 by dode-boe      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_calloc_error(size_t nmemb, size_t size);

// char	*submain(size_t size);

// int	main(void)
// {
// 	char	*ptr;
// 	size_t	i;
// 	size_t	control;

// 	i = 0;
// 	control = 0;
// 	ptr = submain(70);
// 	if (ptr)
// 	{
// 		while (i < 70)
// 		{
// 			if (ptr[i] == 'E')
// 				control++;
// 			i++;
// 		}
// 		free(ptr);
// 	}
// 	if (control == 70)
// 		printf("test succeeded\n");
// 	else
// 		printf("test failed\n");
// }

// char	*submain(size_t size)
// {
// 	char	*ptr;
// 	size_t	i;

// 	i = 0;
// 	ptr = ft_calloc(1, size);
// 	if (!ptr)
// 		return (0);
// 	while (i < size)
// 	{
// 		ptr[i] = 'E';
// 		i++;
// 	}
// 	return (ptr);
// }

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t			i;
	void			*s;

	i = 0;
	if (ft_calloc_error(nmemb, size))
		return (0);
	s = (char *)malloc(nmemb * size);
	if (!s)
		return (NULL);
	ft_bzero(s, nmemb * size);
	return (s);
}

static int	ft_calloc_error(size_t nmemb, size_t size)
{
	if (nmemb * size < 0
		|| (nmemb * size > 4294967295 - 1
			&& (nmemb != 0 && size != 0)))
	{
		return (1);
	}
	return (0);
}
