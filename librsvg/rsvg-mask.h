/* -*- Mode: C; indent-tabs-mode: nil; c-basic-offset: 4 -*- */
/* vim: set sw=4 sts=4 expandtab: */
/*
   rsvg-mask.h : Provides Masks

   Copyright (C) 2004 Caleb Moore

   This program is free software; you can redistribute it and/or
   modify it under the terms of the GNU Library General Public License as
   published by the Free Software Foundation; either version 2 of the
   License, or (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Library General Public License for more details.

   You should have received a copy of the GNU Library General Public
   License along with this program; if not, write to the
   Free Software Foundation, Inc., 59 Temple Place - Suite 330,
   Boston, MA 02111-1307, USA.

   Author: Caleb Moore <calebmm@tpg.com.au>
*/

#ifndef RSVG_MASK_H
#define RSVG_MASK_H

#include "rsvg.h"
#include "rsvg-defs.h"
#include "rsvg-css.h"
#include "rsvg-styles.h"
#include "rsvg-shapes.h"
#include <libxml/SAX.h>

G_BEGIN_DECLS 

/* Implemented in rust/src/mask.rs */
G_GNUC_INTERNAL
RsvgNode *rsvg_node_mask_new (const char *element_name, RsvgNode *node);

/* Implemented in rust/src/mask.rs */
G_GNUC_INTERNAL
RsvgLength rsvg_node_mask_get_x (RsvgNode *node);

/* Implemented in rust/src/mask.rs */
G_GNUC_INTERNAL
RsvgLength rsvg_node_mask_get_y (RsvgNode *node);

/* Implemented in rust/src/mask.rs */
G_GNUC_INTERNAL
RsvgLength rsvg_node_mask_get_width (RsvgNode *node);

/* Implemented in rust/src/mask.rs */
G_GNUC_INTERNAL
RsvgLength rsvg_node_mask_get_height (RsvgNode *node);

/* Implemented in rust/src/mask.rs */
G_GNUC_INTERNAL
RsvgCoordUnits rsvg_node_mask_get_units (RsvgNode *node);

/* Implemented in rust/src/mask.rs */
G_GNUC_INTERNAL
RsvgCoordUnits rsvg_node_mask_get_content_units (RsvgNode *node);

/* Implemented in rust/src/clip_path.rs */
G_GNUC_INTERNAL
RsvgNode *rsvg_node_clip_path_new (const char *element_name, RsvgNode *node);

/* Implemented in rust/src/clip_path.rs */
G_GNUC_INTERNAL
RsvgCoordUnits rsvg_node_clip_path_get_units (RsvgNode *node);

G_END_DECLS
#endif
