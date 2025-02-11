/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcorlett <rcorlett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 11:34:33 by rcorlett          #+#    #+#             */
/*   Updated: 2025/02/11 11:39:11 by rcorlett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	init_game(t_map *game)
{
	ft_memset(game, 0, sizeof(t_map));
	ft_memset(&game->zeca, 0, sizeof(t_point));
	ft_memset(&game->exit, 0, sizeof(t_point));
	ft_memset(&game->image, 0, sizeof(t_image));
}

t_map	*init(void)
{
	t_map	*game;

	game = malloc(sizeof(t_map));
	if (!game)
		ft_kill(5, game);
	init_game(game);
	game->mlx_ptr = mlx_init();
	return (game);
}
