/*
 * Copyright © 2007-2009 Emmanuel Pacaud
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

#include <gdomimplementation.h>
#include <string.h>

GDomDocument *
gdom_implementation_create_document (const char *qualified_name)
{
	g_return_val_if_fail (qualified_name != NULL, NULL);

	if (strcmp (qualified_name, "svg") == 0)
		return GDOM_DOCUMENT (gsvg_document_new ());
	else if (strcmp (qualified_name, "math") == 0)
		return GDOM_DOCUMENT (gmathml_document_new ());

	return NULL;
}
