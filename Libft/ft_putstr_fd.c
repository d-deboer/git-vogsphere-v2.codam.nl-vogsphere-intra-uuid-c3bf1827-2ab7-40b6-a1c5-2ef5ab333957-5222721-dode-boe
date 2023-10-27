/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putstr_fd.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: dode-boe <dode-boe@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/07 15:35:51 by dode-boe      #+#    #+#                 */
/*   Updated: 2023/10/27 11:47:58 by dode-boe      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	while (*s)
	{
		ft_putchar_fd(*s, fd);
		s++;
	}
}

// int	main(void)
// {
// 	char	str1[] = "Wow, I guess I really have to test everything huh";
// 	ft_putstr_fd(str1, 1);
// }
