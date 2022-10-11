/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   heart.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-jala <sel-jala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 17:00:18 by sel-jala          #+#    #+#             */
/*   Updated: 2022/09/27 17:49:50 by sel-jala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

void	ft_heart_img(t_map *data)
{
	data->heart1 = mlx_xpm_file_to_image(data->mlx, \
				"./images_bonus/heart1.xpm", &data->width, &data->height);
	data->heart2 = mlx_xpm_file_to_image(data->mlx, \
				"./images_bonus/heart2.xpm", &data->width, &data->height);
	data->heart3 = mlx_xpm_file_to_image(data->mlx, \
				"./images_bonus/heart3.xpm", &data->width, &data->height);
	data->heart4 = mlx_xpm_file_to_image(data->mlx, \
				"./images_bonus/heart4.xpm", &data->width, &data->height);
}

void	ft_put_img_heart_bonus(t_map *data)
{
	static int	x;

	usleep(300);
	if (data->map[data->i][data->j] == 'C' && x % 4 == 0)
		mlx_put_image_to_window(data->mlx, data->mlx_win, data->heart1, \
			data->w, data->i * IMG_SIZE);
	if (data->map[data->i][data->j] == 'C' && x % 4 == 1)
		mlx_put_image_to_window(data->mlx, data->mlx_win, data->heart2, \
			data->w, data->i * IMG_SIZE);
	if (data->map[data->i][data->j] == 'C' && x % 4 == 2)
		mlx_put_image_to_window(data->mlx, data->mlx_win, data->heart3, \
			data->w, data->i * IMG_SIZE);
	if (data->map[data->i][data->j] == 'C' && x % 4 == 3)
		mlx_put_image_to_window(data->mlx, data->mlx_win, data->heart4, \
			data->w, data->i * IMG_SIZE);
	usleep(300);
	x++;
}
