/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danila <danila@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/27 11:14:16 by danila            #+#    #+#             */
/*   Updated: 2019/08/28 14:07:09 by danila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int    check_fractol(char *set, t_fractol *fractol)
{
    if (!(ft_strcmp("mandelbrot", set)))
        return(fractol->fract_type = 1);
    if (!(ft_strcmp("julia", set)))
        return(fractol->fract_type = 2);
    if (!(ft_strcmp("burning_ship", set)))
        return(fractol->fract_type = 3);
    if (!(ft_strcmp("mandelbar", set)))
        return(fractol->fract_type = 4);
     if (!(ft_strcmp("celtic_mandelbar", set)))
        return(fractol->fract_type = 5);       
    else
        return (0);
}

void    select_fractol(t_fractol *fractol)
{
    if (fractol->fract_type == 2)
        fractol->iteration = julia_init(fractol);
    if (fractol->fract_type == 1)
        fractol->iteration = mandelbrot_init(fractol);
    if (fractol->fract_type == 3)
        fractol->iteration = burning_ship(fractol);
    if (fractol->fract_type == 4)
        fractol->iteration = mandelbar_init(fractol);
    if (fractol->fract_type == 5)
        fractol->iteration = celtic_mandelbar(fractol);
}

void    ft_img_pixel_put(t_image *image, int x, int y, int color)
{
    if (x >= 0 && x < WIN_WIDTH && y >= 0 && y < WIN_HEIGHT)
		*(int *)(image->data + ((x + (y * WIN_WIDTH)) * image->bpp)) = color;
}

void    fract_sizing(t_fractol *fractol)
{
    fractol->height = (float)(fractol->height - fractol->img_h) / fractol->zoom;
    fractol->width = (float)(fractol->width - fractol->img_w) / fractol->zoom;
}

void    draw_fractols(t_fractol *fractol)
{
    int h;
    int w;

    h = 0;
    while (h < WIN_HEIGHT)
    {
        w = 0;
        while (w < WIN_WIDTH)
        {
            fractol->height = h;
            fractol->width = w;
            fract_sizing(fractol);
            select_fractol(fractol);
            fractol->color = create_color(fractol->iteration,ITERATION);
            ft_img_pixel_put(fractol->image, h, w, fractol->color);
            w++;
        } 
        h++;
    }
}
