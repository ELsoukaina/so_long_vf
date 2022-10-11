/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_error.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-jala <sel-jala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 20:18:29 by sel-jala          #+#    #+#             */
/*   Updated: 2022/06/28 21:03:58 by sel-jala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	ft_check_file(char *filename)
{
	int	len;

	len = ft_strlen(filename);
	if (filename[len - 1] == 'r' && filename[len - 2] == 'e' \
		&& filename[len - 3] == 'b' && filename[len - 4] == '.')
		return (1);
	return (0);
}

void	ft_print_message_error(char *str)
{
	ft_printf("%s", str);
	exit(1);
}

void	ft_free(t_map *data)
{
	free(data);
	exit(1);
}
