/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danila <danila@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/27 11:11:46 by danila            #+#    #+#             */
/*   Updated: 2019/08/21 15:18:52 by danila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define FRACTOL_H
#ifdef FRACTOL_H

#define WIN_WIDTH 1080
#define WIN_HEIGHT 720
#define ITERATION 100
#define text_color 0xC73131
 
#include <unistd.h>
#include <limits.h>
#include <stdlib.h>
#include <math.h>
#include "./libft/libft.h"
#include "../minilibx_macos/mlx.h"

typedef struct s_complex
{
    float  x;
    float  y;
    double re;
    double im;
}               t_complex;


typedef struct s_fractol
{
    void    *mlx;
    void    *img;
    void    *win;
    t_complex   z;
    enum { JULIA, MANDELBROT } fract_type;
    int     height;
    int     width;
    int     iteration;
}               t_fractol;

void    check_fractol(char *set, t_fractol *fractol);
void    fractol_init(t_fractol *fractol);
t_fractol    *init(char *tittle);
void    julia_init(t_fractol *fractol);
int    mandelbrot_init(t_fractol *fractol);
int     key_hooks(int key);
void    draw_fraсtols(t_fractol *fractol);
void    usage_menu(t_fractol *fractol);
t_complex init_complex(double re, double im);

#endif