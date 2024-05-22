/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmilford <bmilford@student.42adel.o>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 17:12:42 by bmilford          #+#    #+#             */
/*   Updated: 2024/05/22 18:39:35 by bmilford         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft"
#include <signal.h>

int main();
{
	int	myserver;

	myserver == SIGUSR1;
	printf("%d",getpid());

	signal(SIGUSR1, sig_handler);
}

void	sig_handler(int sig)
{
}
