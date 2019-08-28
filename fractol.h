/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danila <danila@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/27 11:11:46 by danila            #+#    #+#             */
/*   Updated: 2019/08/28 14:08:10 by danila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define FRACTOL_H
#ifdef FRACTOL_H

#define WIN_WIDTH 700   
#define WIN_HEIGHT 700
#define ITERATION 50
#define text_color 0x6AA84F
#define INF 4
#define ZOOM 150

#include <unistd.h>
#include <limits.h>
#include <stdlib.h>
#include <math.h>
#include "./libft/libft.h"
#include "../minilibx_macos/mlx.h"

typedef struct s_image
{
    void    *mlx;
    void    *win;
    void    *ptr;
    void    *data;
    int bpp;
    int size_line;
    int endian;
}               t_image;


typedef struct s_complex
{
    float  x;
    float  y;
}               t_complex;


typedef struct s_fractol
{
    t_image  *image;
    t_complex   z;
    t_complex   j;
    int         fract_type;
    double      height;
    double      width;
    double      img_h;
    double      img_w;
    int         zoom;
    int         iteration;
    int         color;
}               t_fractol;

int    check_fractol(char *set, t_fractol *fractol);
void    fractol_init(t_fractol *fractol);
t_image    *win_init(char *tittle);
int    julia_init(t_fractol *fractol);
int    mandelbrot_init(t_fractol *fractol);
int     keys_hook(int key, t_fractol *fractol);
void    draw_fraсtols(t_fractol *fractol);
void    usage_menu(t_fractol *fractol);
void    draw_fractols(t_fractol *fractol);
int    create_color(int iter,int max_iter);
void    fract_sizing(t_fractol *fractol);
int     julia_motion(int x, int y, t_fractol *fractol);
int     burning_ship(t_fractol *fractol);
void    init_util(t_fractol *fractol);
int     mouse_move(int mouse, int x, int y, t_fractol *fractol);
int     mandelbar_init(t_fractol *fractol);
int     celtic_mandelbar(t_fractol *fractol);

#endif