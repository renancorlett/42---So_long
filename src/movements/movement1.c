/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movement1.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcorlett <rcorlett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 11:46:20 by rcorlett          #+#    #+#             */
/*   Updated: 2025/02/11 12:05:41 by rcorlett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	move_up(t_map *game)
{
	if (game->map[game->zeca_pos.y - 1][game->zeca_pos.x] == 'C')
	{
		game->map[game->zeca_pos.y - 1][game->zeca_pos.x] = 'P';
		game->map[game->zeca_pos.y][game->zeca_pos.x] = '0';
		game->zeca_pos.y--;
		game->collectibles--;
	}
	else if (game->map[game->zeca_pos.y - 1][game->zeca_pos.x] == 'E')
		check_win(game);
	else
	{
		game->map[game->zeca_pos.y - 1][game->zeca_pos.x] = 'P';
		game->map[game->zeca_pos.y][game->zeca_pos.x] = '0';
		game->zeca_pos.y--;
	}
	render_map(game);
}

void	move_down(t_map *game)
{
	if (game->map[game->zeca_pos.y + 1][game->zeca_pos.x] == 'C')
	{
		game->map[game->zeca_pos.y + 1][game->zeca_pos.x] = 'P';
		game->map[game->zeca_pos.y][game->zeca_pos.x] = '0';
		game->zeca_pos.y++;
		game->collectibles--;
	}
	else if (game->map[game->zeca_pos.y + 1][game->zeca_pos.x] == 'E')
		check_win(game);
	else
	{
		game->map[game->zeca_pos.y + 1][game->zeca_pos.x] = 'P';
		game->map[game->zeca_pos.y][game->zeca_pos.x] = '0';
		game->zeca_pos.y++;
	}
	render_map(game);
}

void	move_left(t_map *game)
{
	if (game->map[game->zeca_pos.y][game->zeca_pos.x - 1] == 'C')
	{
		game->map[game->zeca_pos.y][game->zeca_pos.x - 1] = 'P';
		game->map[game->zeca_pos.y][game->zeca_pos.x] = '0';
		game->zeca_pos.x--;
		game->collectibles--;
	}
	else if (game->map[game->zeca_pos.y][game->zeca_pos.x - 1] == 'E')
		check_win(game);
	else
	{
		game->map[game->zeca_pos.y][game->zeca_pos.x - 1] = 'P';
		game->map[game->zeca_pos.y][game->zeca_pos.x] = '0';
		game->zeca_pos.x--;
	}
	render_map(game);
}

void	move_right(t_map *game)
{
	if (game->map[game->zeca_pos.y][game->zeca_pos.x + 1] == 'C')
	{
		game->map[game->zeca_pos.y][game->zeca_pos.x + 1] = 'P';
		game->map[game->zeca_pos.y][game->zeca_pos.x] = '0';
		game->zeca_pos.x++;
		game->collectibles--;
	}
	else if (game->map[game->zeca_pos.y][game->zeca_pos.x + 1] == 'E')
		check_win(game);
	else
	{
		game->map[game->zeca_pos.y][game->zeca_pos.x + 1] = 'P';
		game->map[game->zeca_pos.y][game->zeca_pos.x] = '0';
		game->zeca_pos.x++;
	}
	render_map(game);
}
