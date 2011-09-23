/*
 * Copyright © 2011  Google, Inc.
 *
 *  This is part of HarfBuzz, a text shaping library.
 *
 * Permission is hereby granted, without written agreement and without
 * license or royalty fees, to use, copy, modify, and distribute this
 * software and its documentation for any purpose, provided that the
 * above copyright notice and the following two paragraphs appear in
 * all copies of this software.
 *
 * IN NO EVENT SHALL THE COPYRIGHT HOLDER BE LIABLE TO ANY PARTY FOR
 * DIRECT, INDIRECT, SPECIAL, INCIDENTAL, OR CONSEQUENTIAL DAMAGES
 * ARISING OUT OF THE USE OF THIS SOFTWARE AND ITS DOCUMENTATION, EVEN
 * IF THE COPYRIGHT HOLDER HAS BEEN ADVISED OF THE POSSIBILITY OF SUCH
 * DAMAGE.
 *
 * THE COPYRIGHT HOLDER SPECIFICALLY DISCLAIMS ANY WARRANTIES, INCLUDING,
 * BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND
 * FITNESS FOR A PARTICULAR PURPOSE.  THE SOFTWARE PROVIDED HEREUNDER IS
 * ON AN "AS IS" BASIS, AND THE COPYRIGHT HOLDER HAS NO OBLIGATION TO
 * PROVIDE MAINTENANCE, SUPPORT, UPDATES, ENHANCEMENTS, OR MODIFICATIONS.
 *
 * Google Author(s): Behdad Esfahbod
 */

#ifndef GEOMETRY_HH
#define GEOMETRY_HH

typedef double Coord;

template <typename Coord>
struct Vector {
  Vector (Coord dx_, Coord dy_) : dx (dx_), dy (dy_) {};
  Coord dx, dy;
};

template <typename Coord>
struct Point {
  Point (Coord x_, Coord y_) : x (x_), y (y_) {};
  Coord x, y;
};

template <typename Coord, typename Radius>
struct Circle {
  Circle (Point<Coord> c_, double r_) : c (c_), r (r_) {};

  Point<Coord> c;
  Radius r;
};

template <typename Coord>
struct Line {
  Line (Coord a_, Coord b_, Coord c_) : a (a_), b (b_), c (c_) {};

  Coord a, b, c; /* a*x + b*y = c */
};

typedef Vector<Coord> vector_t;
typedef Point<Coord> point_t;
typedef Circle<Coord, double> circle_t;
typedef Line<Coord> line_t;

#endif
