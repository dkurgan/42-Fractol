/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danila <danila@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/27 11:18:11 by danila            #+#    #+#             */
/*   Updated: 2019/08/21 12:40:23 by danila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int     key_hooks(int key)
{
    if (key == 53)
        exit(EXIT_SUCCESS);
    return (0);
}

void    usage_menu(t_fractol *fract)
{
    int y = 0;
    mlx_string_put(fract->mlx, fract->win, 15, y+= 20, text_color, "Usage:");
    mlx_string_put(fract->mlx, fract->win, 30, y+= 25, text_color, "Esc - exit");
}


int     main(int argc,char **argv)
{
    t_fractol   *fractol;
    if (argc != 2)
        return (write(1,"Sorry, there is not enough arguments\n", 38));
    if ((fractol = init(argv[1])) == NULL) 
        return (write(1, "Can't allocate memmory\n", 24));
    check_fractol(argv[1], fractol);
    draw_fraсtols(fractol);
    mlx_key_hook(fractol->win, key_hooks, fractol);
    mlx_loop(fractol->mlx);
}