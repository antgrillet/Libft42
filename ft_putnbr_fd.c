/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrillet <anto73grillet@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 12:59:27 by agrillet          #+#    #+#             */
/*   Updated: 2022/12/14 13:01:29 by agrillet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	size_t	i;
	int		j;

	i = 0;
	j = 0;
	if (n == -2147483648)
		write(fd, "-2147483648", 11);
	if (n < 0)
	{
		write(fd, "-", 1);
		n = n * -1;
	}
	if (n > 9)
	{
		j = (n % 10) + 48;
		n = n / 10;
		ft_putnbr_fd(n, fd);
		write(fd, &j, 1);
	}
	else
	{
		j = n + 48;
		write(fd, &j, 1);
	}
}
/*
int	main(void)
{
	ft_putnbr_fd(-789,1);
}*/