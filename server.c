/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmilford <bmilford@student.42adel.o>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 17:12:42 by bmilford          #+#    #+#             */
/*   Updated: 2024/05/24 17:16:46 by bmilford         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <signal.h>

void	sig_handler(int sig);

int main()
{
	ft_printf("%d\n",getpid());

	signal(SIGUSR1, sig_handler);
	signal(SIGUSR2, sig_handler);
	while (1)
		pause();
}

void	sig_handler(int sig)
{
	static int	bit = 8;
	static char	byte = 0;

	byte = byte << 1;
	if (sig == SIGUSR1)
		byte += 0;
	else
		byte += 1;
	bit--;
	if (bit == 0)
	{
		ft_putchar_fd(1, byte);
		byte = 0;
		bit = 8;
	}
}
