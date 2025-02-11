/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcorlett <rcorlett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 11:33:52 by rcorlett          #+#    #+#             */
/*   Updated: 2025/02/11 11:33:55 by rcorlett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	main(int ac, char **av)
{
	int		fd;
	t_map	*game;

	if (ac == 2)
	{
		check_extension(av[1]);
		fd = open(av[1], O_RDONLY);
		if (fd <= 0)
			ft_kill(2, NULL);
		game = init();
		read_map(av[1], game);
		validate_map(game);
		render(game);
	}
	return (0);
}
