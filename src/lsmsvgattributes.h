/* lsmmathmlenums.c
 *
 * Copyright © 2007-2008  Emmanuel Pacaud
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301  USA
 *
 * Author:
 * 	Emmanuel Pacaud <emmanuel@gnome.org>
 */

#ifndef LSM_SVG_ATTRIBUTES_H
#define LSM_SVG_ATTRIBUTES_H

#include <lsmattributes.h>
#include <lsmdomview.h>
#include <lsmsvg.h>
#include <lsmsvgenums.h>
#include <lsmsvgtraits.h>
#include <lsmsvglength.h>
#include <lsmsvgmatrix.h>

G_BEGIN_DECLS

typedef struct {
	LsmAttribute base;
	double value;
} LsmSvgDoubleAttribute;

typedef struct {
	LsmAttribute base;
	LsmSvgDashArray *value;
} LsmSvgDashArrayAttribute;

typedef struct {
	LsmAttribute base;
	LsmSvgLength length;
} LsmSvgLengthAttribute;

typedef struct {
	LsmAttribute base;
	LsmSvgPaint paint;
} LsmSvgPaintAttribute;

typedef struct {
	LsmAttribute base;
	char *value;
} LsmSvgStringAttribute;

typedef struct {
	LsmAttribute base;
	LsmSvgColor value;
} LsmSvgColorAttribute;

typedef struct {
	LsmAttribute base;
	LsmBox value;
} LsmSvgViewboxAttribute;

typedef struct {
	LsmAttribute base;
	LsmSvgMatrix matrix;
} LsmSvgTransformAttribute;

typedef struct {
	LsmAttribute base;
	LsmSvgPreserveAspectRatio value;
} LsmSvgPreserveAspectRatioAttribute;

typedef struct {
	LsmAttribute base;
	LsmSvgSpreadMethod value;
} LsmSvgSpreadMethodAtttribute;

typedef struct {
	LsmAttribute base;
	LsmSvgPatternUnits value;
} LsmSvgPatternUnitsAttribute;

G_END_DECLS

#endif
