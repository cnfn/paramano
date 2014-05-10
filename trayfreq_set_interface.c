/************************************************************************
 * This file is part of trayfreq-archlinux.                             *
 *                                                                      *
 * trayfreq-archlinux is free software; you can redistribute it and/or  *
 * modify it under the terms of the GNU General Public License as       *
 * published by the Free Software Foundation; either version 3 of the   *
 * License, or (at your option) any later version.                      *
 *                                                                      *
 * trayfreq-archlinux is distributed in the hope that it will be useful,*
 * but WITHOUT ANY WARRANTY; without even the implied warranty of       *
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the        *
 * GNU General Public License for more details.                         *
 *                                                                      *
 * You should have received a copy of the GNU General Public License    *
 * along with trayfreq-archlinux. If not, see                           *
 * <http://www.gnu.org/licenses/>.                                      *
 ************************************************************************/

#include "trayfreq_set_interface.h"

#include "debug.h"
#include "defaults.h"
#include <stdio.h>
#include <stdlib.h>

void si_gov(char* gov, int core)
{
	char cmd[256];
	if (_DEFAULT_USE_SUDO)
	{
		sprintf(cmd, "sudo trayfreq-set -g %s -c %i",gov,core);
	} else {
		sprintf(cmd, "trayfreq-set -g %s -c %i",gov,core);
	}
	debug("Running '%s'\n",cmd);
	system(cmd);
}

void si_freq(int freq, int core)
{
	char cmd[256];
	if (_DEFAULT_USE_SUDO)
	{
		sprintf(cmd, "sudo trayfreq-set -f %i -c %i",freq,core);
	} else {
		sprintf(cmd, "trayfreq-set -f %i -c %i",freq,core);
	}
	debug("Running '%s'\n",cmd);
	system(cmd);
}
