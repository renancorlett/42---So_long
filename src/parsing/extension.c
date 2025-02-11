/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   extension.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcorlett <rcorlett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 11:43:51 by rcorlett          #+#    #+#             */
/*   Updated: 2025/02/11 11:43:53 by rcorlett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	check_extension(char *file)
{
	if (ft_strcmp((file + (ft_strlen(file) - 4)), ".ber") != 0)
		ft_kill (1, NULL);
}
