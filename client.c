/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmilford <bmilford@student.42adel.o>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 17:12:51 by bmilford          #+#    #+#             */
/*   Updated: 2024/05/27 18:49:08 by bmilford         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <signal.h>

int	main(int argc, char *argv[])
{
	char	*str;
	int		pid;
	int		bit;

	if (argc == 3)
	{
		pid = ft_atoi(argv[1]);
		str = argv[2];
		while (*str)
		{
			bit = 7;
			while (bit >= 0)
			{
				if ((*str >> bit) % 2 == 1)
					kill(pid, SIGUSR2);
				else
					kill(pid, SIGUSR1);
				bit--;
				usleep(100);
			}
			str++;
		}
	}
	else
		ft_printf("ERROR, NOT ENOUGH ARGUEMENTS \n");
}
