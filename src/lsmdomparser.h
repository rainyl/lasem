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

#ifndef LSM_DOM_PARSER_H
#define LSM_DOM_PARSER_H

#include <lsmdomdocument.h>

G_BEGIN_DECLS

typedef enum {
	LSM_DOM_DOCUMENT_ERROR_INVALID_XML
} LsmDomDocumentError;

LsmDomDocument * 	lsm_dom_document_new_from_memory 	(const char *buffer, gsize size, GError *error);
LsmDomDocument * 	lsm_dom_document_new_from_path 		(const char *path, GError *error);
LsmDomDocument * 	lsm_dom_document_new_from_url 		(const char *url, GError *error);

G_END_DECLS

#endif
