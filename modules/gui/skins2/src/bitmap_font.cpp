/*****************************************************************************
 * bitmap_font.cpp
 *****************************************************************************
 * Copyright (C) 2004 VideoLAN
 * $Id$
 *
 * Authors: Cyril Deguet     <asmax@via.ecp.fr>
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
 * Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111, USA.
 *****************************************************************************/

#include "bitmap_font.hpp"
#include "generic_bitmap.hpp"


BitmapFont::BitmapFont( intf_thread_t *pIntf, const GenericBitmap &rBitmap ):
    GenericFont( pIntf ), m_rBitmap( rBitmap )
{
}


GenericBitmap *BitmapFont::drawString( const UString &rString,
                                       uint32_t color, int maxWidth ) const
{
    return NULL;
}

