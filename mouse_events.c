/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mouse_events.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danila <danila@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/28 11:39:17 by danila            #+#    #+#             */
/*   Updated: 2019/08/28 14:08:57 by danila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int     keys_hook(int key, t_fractol *fractol)
{
    if (key == 53)
        exit(EXIT_SUCCESS);
    if (key == 124)
        fractol->img_h *= 1.2;
    if (key == 123)
        fractol->img_h *= 0.8;
    if (key == 125)
        fractol->img_w *= 1.2;
    if (key == 126)
        fractol->img_w *= 0.8;
    ft_bzero(fractol->image->data, WIN_WIDTH * WIN_HEIGHT * fractol->image->bpp);
    draw_fractols(fractol);
    mlx_put_image_to_window(fractol->image->mlx, fractol->image->win, fractol->image->ptr, 0, 0); 
    return (1);
}

int     julia_motion(int x, int y, t_fractol *fractol)
{
    fractol->j.x = 4 * ((double) x / WIN_WIDTH - 0.5); 
    fractol->j.y = 4 * ((double) (WIN_HEIGHT - y) / WIN_HEIGHT - 0.5);
    ft_bzero(fractol->image->data, WIN_WIDTH * WIN_HEIGHT * fractol->image->bpp);
    draw_fractols(fractol);
    mlx_put_image_to_window(fractol->image->mlx, fractol->image->win, fractol->image->ptr, 0, 0);
    return (0);
}

int     mouse_move(int mouse, int x, int y, t_fractol *fractol)
{
    if (mouse == 4)
        fractol->zoom *= 0.8;
    if (mouse == 5)
        fractol->zoom *= 1.2;
    fractol->img_h = y;
    fractol->img_w = x;
    ft_bzero(fractol->image->data, WIN_HEIGHT * WIN_WIDTH * fractol->image->bpp);
    draw_fractols(fractol);
    mlx_put_image_to_window(fractol->image->mlx, fractol->image->win, fractol->image->ptr, 0, 0);
    return(1);
}