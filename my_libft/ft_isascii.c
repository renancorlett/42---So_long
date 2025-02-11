/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmiguelo <mmiguelo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 19:52:45 by mmiguelo          #+#    #+#             */
/*   Updated: 2024/10/15 19:52:45 by mmiguelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Checks if a given character is an ASCII character.
 * 
 * @param c The character to be checked.
 * @return Returns a non-zero value if true and zero if false.
 */
int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

/* int	main(void)
{
	int	c;
	int	c2;

	c = 5;
	c2 = 128;
	printf("is ascii:");
	printf("\n%d\n", ft_isascii(c));
	printf("is not ascii:");
	printf("\n%d\n", ft_isascii(c2));
	return (0);
} */