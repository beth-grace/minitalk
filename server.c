/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmilford <bmilford@student.42adel.o>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 17:12:42 by bmilford          #+#    #+#             */
/*   Updated: 2024/05/27 18:02:25 by bmilford         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <signal.h>


#include <stdio.h>

void	sig_handler(int sig);

int main()
{
	ft_printf("%d\n", getpid());

	signal(SIGUSR1, sig_handler);
	signal(SIGUSR2, sig_handler);
	while (1)
		pause();
}

void	sig_handler(int sig)
{
	static int	bit = 7;
	static char	byte = 0;

	if (sig == SIGUSR1)
		byte += 0;
	if (sig == SIGUSR2)
		byte += 1;
	if (bit == 0)
	{
		ft_printf("%c", (int)byte);
		byte = 0;
		bit = 7;
	}
	else
	{
		bit--;
		byte = byte << 1;
	}
}
