/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danila <danila@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/27 11:14:16 by danila            #+#    #+#             */
/*   Updated: 2019/08/26 13:01:30 by danila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void    check_fractol(char *set, t_fractol *fractol)
{
    if (ft_strcmp("julia", set))
        fractol->fract_type = JULIA;
    else if (ft_strcmp("mandelbrot", set))
        fractol->fract_type = MANDELBROT;
}

// void    select_fractol(t_fractol *fractol)
// {
//     if (fractol->fract_type == JULIA)
//         fractol->iteration = julia_init(fractol);
//    else if (fractol->frac_type == MANDELBROT)
//         fractol->iteration = mandelbrot_init(fractol); 
// }


t_complex init_complex(double re, double im)
{
    t_complex   complex;
    complex.re = re;
    complex.im = im;
    return (complex);
}