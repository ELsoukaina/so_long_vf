/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_mouvement.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-jala <sel-jala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 17:00:07 by sel-jala          #+#    #+#             */
/*   Updated: 2022/09/27 17:00:08 by sel-jala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

void	print_mouvement(t_map *data)
{
	data->move = ft_itoa(data->nb_move);
	data->string = ft_join("Number of movements :", data->move);
	mlx_string_put(data->mlx, data->mlx_win, 20, 20, 0x000000, data->string);
	free(data->move);
	free(data->string);
}
