/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mlx_loop.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-jala <sel-jala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 17:00:27 by sel-jala          #+#    #+#             */
/*   Updated: 2022/09/27 19:19:54 by sel-jala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

void	loop_images(t_map *data)
{
	mlx_loop_hook(data->mlx, &ft_add_image_to_window, data);
	mlx_hook(data->mlx_win, 2, 1L << 0, &ft_key_hook, data);
	mlx_hook(data->mlx_win, 17, 1L << 17, &ft_destroy_image, data);
	mlx_loop(data->mlx);
}
