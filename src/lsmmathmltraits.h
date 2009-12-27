/*
 * Copyright © 2009 Emmanuel Pacaud
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

#ifndef LSM_MATHML_TRAITS_H
#define LSM_MATHML_TRAITS_H

#include <lsmmathmlenums.h>
#include <lsmtraits.h>

G_BEGIN_DECLS

extern const LsmTraitClass lsm_mathml_boolean_trait_class;
extern const LsmTraitClass lsm_mathml_unsigned_trait_class;
extern const LsmTraitClass lsm_mathml_double_trait_class;
extern const LsmTraitClass lsm_mathml_string_trait_class;

typedef struct {
	double value;
	LsmMathmlUnit unit;
} LsmMathmlLength;

GType lsm_mathml_space_get_type (void);

#define LSM_TYPE_MATHML_SPACE (lsm_mathml_space_get_type())

extern const LsmTraitClass lsm_mathml_length_trait_class;

double 	lsm_mathml_length_normalize 	(const LsmMathmlLength *length, double default_value, double font_size);

G_END_DECLS

#endif
