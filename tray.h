/************************************************************************
 * This file is part of trayfreq-archlinux.                             *
 *                                                                      *
 * trayfreq-archlinux is free software; you can redistribute it and/or  *
 * modify it under the terms of the GNU General Public Licence as       *
 * published by the Free Software Foundation; either version 3 of the   *
 * Licence, or (at your option) any later version.                      *
 *                                                                      *
 * trayfreq-archlinux is distributed in the hope that it will be useful,*
 * but WITHOUT ANY WARRANTY; without even the implied warranty of       *
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the        *
 * GNU General Public Licence for more details.                         *
 *                                                                      *
 * You should have received a copy of the GNU General Public Licence    *
 * along with trayfreq-archlinux. If not, see                           *
 * <http://www.gnu.org/licenses/>.                                      *
 ************************************************************************/

#ifndef TRAY_H
#define TRAY_H 1

#include <glib.h>

void tray_init();
void tray_set_tooltip(const gchar* msg);
void tray_update_icon_percent();
void tray_show();
void tray_hide();
gboolean tray_visible();
gboolean tray_embedded();

#endif
