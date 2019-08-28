/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danila <danila@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/27 11:50:00 by danila            #+#    #+#             */
/*   Updated: 2019/08/28 12:08:55 by danila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

t_image    *win_init(char *tittle)
{
    t_image     *image;
    if ((image = malloc(sizeof(t_image))) == NULL)
        return (NULL);
    image->mlx = mlx_init();            
    image->win = mlx_new_window(image->mlx, WIN_WIDTH, WIN_HEIGHT, tittle);
    image->ptr = mlx_new_image (image->mlx, WIN_WIDTH, WIN_HEIGHT);
    image->data = mlx_get_data_addr(image->ptr, &image->bpp, 
        &image->size_line, &image->endian);
    image->bpp /= 8;
    return (image);
}

void    init_util(t_fractol *fractol)
{
    fractol->j.x = -0.4;
    fractol->j.y = 0.6;
    fractol->img_h = WIN_HEIGHT / 2;
    fractol->img_w = WIN_WIDTH / 2;
    fractol->zoom = ZOOM;
}