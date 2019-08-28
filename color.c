/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   color.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danila <danila@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/26 17:10:22 by danila            #+#    #+#             */
/*   Updated: 2019/08/27 20:14:10 by danila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int    create_color(int iter,int max_iter)
{
    int  rgb[3];
    float  t;

    t = (double)iter / (double)max_iter;
    rgb[0] = (int)(9 *(1 - t) * pow(t, 3) * 255);    
    rgb[1] = (int)(15 * pow((1 - t), 2) * pow(t, 2) * 255);
    rgb[2] = (int)(8 * pow((1 - t), 3) * t * 255);
    return (rgb[0]| (rgb[1] << 8)| (rgb[2] << 16));
}