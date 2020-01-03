/*
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
 *
 *  Copyright (C) 2006-2010 XNeur Team
 *
 */

#ifndef _BIND_TABLE_H_
#define _BIND_TABLE_H_

#include <X11/XKBlib.h>

#include "xnconfig.h"

void bind_actions(struct _window* window, struct _xneur_config* config);
void unbind_actions(void);

void bind_user_actions(struct _window* window, struct _xneur_config* config);
void unbind_user_actions(void);

enum _hotkey_action get_action(Display* display, int actions_count, KeySym key_sym, int mask);
int get_user_action(Display* display, int actions_count, KeySym key_sym, int mask);


#endif /* _BIND_TABLE_H_ */
