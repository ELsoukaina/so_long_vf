/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mlx_destroy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-jala <sel-jala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 17:00:24 by sel-jala          #+#    #+#             */
/*   Updated: 2022/09/27 17:38:55 by sel-jala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

int	ft_destroy_image(t_map *data)
{
	mlx_destroy_image(data->mlx, data->wall);
	mlx_destroy_image(data->mlx, data->player_down);
	mlx_destroy_image(data->mlx, data->player_left);
	mlx_destroy_image(data->mlx, data->player_right);
	mlx_destroy_image(data->mlx, data->player_up);
	mlx_destroy_image(data->mlx, data->background);
	mlx_destroy_image(data->mlx, data->open_door);
	mlx_destroy_image(data->mlx, data->heart1);
	mlx_destroy_image(data->mlx, data->heart2);
	mlx_destroy_image(data->mlx, data->heart3);
	mlx_destroy_image(data->mlx, data->heart4);
	mlx_destroy_image(data->mlx, data->enemy1);
	mlx_destroy_image(data->mlx, data->enemy2);
	mlx_destroy_image(data->mlx, data->enemy3);
	mlx_destroy_image(data->mlx, data->enemy4);
	mlx_destroy_window(data->mlx, data->mlx_win);
	data->mlx_win = NULL;
	exit(0);
}
