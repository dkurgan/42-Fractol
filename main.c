/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danila <danila@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/27 11:18:11 by danila            #+#    #+#             */
/*   Updated: 2019/08/28 14:07:34 by danila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void    usage_menu(t_fractol *fractol)
{
    int y = 0;
    mlx_string_put(fractol->image->mlx, fractol->image->win, 15, y+= 20, text_color, "Usage:");
    mlx_string_put(fractol->image->mlx, fractol->image->win, 30, y+= 25, text_color, "Esc - exit");
}


int     main(int argc,char **argv)
{
    t_fractol   *fractol;
    if (argc != 2)
        return (write(1,"Sorry, there is not enough arguments\n", 38));
    if ((fractol = (t_fractol *)malloc(sizeof(t_fractol))) == NULL) 
        return (write(1, "Can't allocate memmory\n", 24));
    fractol->image = win_init(argv[1]);
   if (!(check_fractol(argv[1], fractol)))
return(write(1, "Available only next fractals: mandelbrot/julia/burning_ship/mandelbar/celtic_mandelbar\n", 88));
    init_util(fractol);
    draw_fractols(fractol);
    mlx_put_image_to_window(fractol->image->mlx, fractol->image->win, fractol->image->ptr, 0, 0);
    usage_menu(fractol);
    mlx_hook(fractol->image->win, 6, 6, julia_motion, fractol);
    mlx_hook(fractol->image->win, 4, 0, mouse_move, fractol);
    mlx_key_hook(fractol->image->win, keys_hook, fractol);
    mlx_loop(fractol->image->mlx);
}