/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractals.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danila <danila@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/08 21:18:53 by danila            #+#    #+#             */
/*   Updated: 2019/08/28 14:05:25 by danila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int     mandelbrot_init(t_fractol *fractol)
{
    int         iter;
    t_complex   c;

    iter = 0;
    fractol->z.x = 0.0;
    fractol->z.y = 0.0;
    while (iter < ITERATION)
    {
        c = fractol->z;
        fractol->z.x = pow(c.x, 2.0) - pow(c.y, 2.0) + fractol->height;
        fractol->z.y = 2.0f * c.x * c.y + fractol->width;
        iter++;
        if (pow(c.x, 2.0) + pow(c.y, 2.0) > (double)4)
            break ;
    }
    return (iter);
}

int     julia_init(t_fractol *fractol)
{
    int iter;
    t_complex   c;

    iter = 0;
    fractol->z.x = fractol->height;
    fractol->z.y = fractol->width;
    while (iter < ITERATION)
    {
        c = fractol->z;
        fractol->z.x = pow(c.x, 2.0) - pow(c.y, 2.0) + fractol->j.x;
        fractol->z.y = 2.0f * c.x * c.y + fractol->j.y;
        iter++;
        if (pow(c.x, 2.0) + pow(c.y, 2.0) > (double)4)
            break ;
    }
    return (iter);
}

int     burning_ship(t_fractol *fractol)
{
    int iter;
    t_complex   c;

    iter = 0;
    fractol->z.x = 0;
    fractol->z.y = 0;
    while (iter < ITERATION)
    {
        c = fractol->z;
        fractol->z.x = pow(c.x, 2.0) - pow(c.y, 2.0) + fractol->height;
        fractol->z.y = 2.0 * fabs(c.x * c.y) + fractol->width;
        iter++;
        if (pow(c.x, 2.0) + pow(c.y, 2.0) > (double)4)
            break ;
    }
    return (iter);
}

int     mandelbar_init(t_fractol *fractol)
{
    int iter;
    t_complex   c;

    iter = 0;
    fractol->z.x = 0;
    fractol->z.y = 0;
    while (iter < ITERATION)
    {
        c = fractol->z;
        fractol->z.x = pow(c.x, 2.0) - pow(c.y, 2.0) + fractol->height;
        fractol->z.y = -2.0 * c.x * c.y + fractol->width;
        iter++;
        if (pow(c.x, 2.0) + pow(c.y, 2.0) > (double)4)
            break ;
    }
    return (iter);
}

int     celtic_mandelbar(t_fractol *fractol)
{
    int iter;
    t_complex   c;

    iter = 0;
    fractol->z.x = 0;
    fractol->z.y = 0;
    while (iter < ITERATION)
    {
        c = fractol->z;
        fractol->z.x = fabs(pow(c.x, 2.0) - pow(c.y, 2.0)) + fractol->height;
        fractol->z.y = -2.0 * c.x * c.y + fractol->width;
        iter++;
        if (pow(c.x, 2.0) + pow(c.y, 2.0) > (double)4)
            break ;
    }
    return (iter);
}
