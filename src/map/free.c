/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcorlett <rcorlett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 11:49:07 by rcorlett          #+#    #+#             */
/*   Updated: 2025/02/11 11:51:34 by rcorlett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_free_array(char **duplicate, size_t height)
{
	size_t	y;

	y = 0;
	if (!duplicate[0])
	{
		free(duplicate);
		return ;
	}
	while (y < height)
	{
		free(duplicate[y]);
		y++;
	}
	free(duplicate);
}

void	ft_free_map(t_map *game)
{
	size_t	y;

	y = 0;
	if (!game->map[0])
	{
		free(game->map);
		return ;
	}
	while (y < game->height)
	{
		free(game->map[y]);
		y++;
	}
	free(game->map);
}

void	destroy_images(t_map *game)
{
	if (game->floor)
		mlx_destroy_image(game->mlx_ptr, game->floor);
	if (game->exit)
		mlx_destroy_image(game->mlx_ptr, game->exit);
	if (game->wall)
		mlx_destroy_image(game->mlx_ptr, game->wall);
	if (game->zeca)
		mlx_destroy_image(game->mlx_ptr, game->zeca);
	if (game->brahma)
		mlx_destroy_image(game->mlx_ptr, game->brahma);
}

int	ft_exit_game(t_map *game)
{
	ft_free_all(game);
	exit(0);
}

void	ft_free_all(t_map *game)
{
	if (!game)
		return ;
	if (game->map)
		ft_free_map(game);
	destroy_images(game);
	if (game->image.img)
		mlx_destroy_image(game->mlx_ptr, game->image.img);
	if (game->win_ptr)
		mlx_destroy_window(game->mlx_ptr, game->win_ptr);
	if (game->mlx_ptr)
	{
		mlx_destroy_display(game->mlx_ptr);
		free(game->mlx_ptr);
	}
	free(game);
	return ;
}
