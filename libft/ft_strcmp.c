/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcorlett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 15:58:49 by rcorlett          #+#    #+#             */
/*   Updated: 2025/02/11 15:58:55 by rcorlett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief Compares characters from two strings
 * 
 * @param s1 Pointer to the first string.
 * @param s2 Pointer to the second string.
 * @return Returns an int less than, equal to, or greater than zero.
 */
int	ft_strcmp(const char *s1, const char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i])
	{
		if (s1[i] - s2[i] == 0)
			i++;
		else
			return ((unsigned char) s1[i] - (unsigned char) s2[i]);
	}
	return ((unsigned char) s1[i] - (unsigned char) s2[i]);
}
