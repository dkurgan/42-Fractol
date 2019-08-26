/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danila <danila@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/27 11:50:00 by danila            #+#    #+#             */
/*   Updated: 2019/08/21 15:20:58 by danila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

t_fractol    *init(char *tittle)
{
    t_fractol *fractol;
    if ((fractol = malloc(sizeof(t_fractol))) == NULL)
        return (NULL);
    fractol->mlx = mlx_init();            
    fractol->win = mlx_new_window(fractol->mlx, WIN_WIDTH, WIN_HEIGHT, tittle);
    fractol->img = mlx_new_image (fractol->mlx, WIN_WIDTH, WIN_HEIGHT);
    return (fractol);
}

// void    fractol_init(t_fractol *fractol)
// {
//     // if (fractol->fract_type == JULIA)
//     //    julia_init(fractol);
//     // if (fractol->fract_type == MANDELBROT)
//     //    mandelbrot_init(fractol); 
        
// }