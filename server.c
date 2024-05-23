/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmilford <bmilford@student.42adel.o>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 17:12:42 by bmilford          #+#    #+#             */
/*   Updated: 2024/05/23 21:59:20 by beefie           ###   ########.fr       */
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
	//if (sig == SIGUSR1)
	//	ft_printf("RECIEVED SIGUSR1\n");
	//else
	//	ft_printf("RECIEVED SIGUSR2\n");
	int	size;
	char	*str;

	while (1)
	{
		bit = 7;
		str = 0; 
		while (bit >= 0)
		{
			if (sig == SIGUSR1)
				str << bit == 0;
			else
				str << bit == 1;
			bit--;

		}
		ft_printf(str);
	}
}
