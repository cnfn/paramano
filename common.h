/************************************************************************
 * This file is part of Paramano.                                       *
 *                                                                      *
 * Paramano is free software; you can redistribute it and/or            *
 * modify it under the terms of the GNU General Public License as       *
 * published by the Free Software Foundation; either version 3 of the   *
 * License, or (at your option) any later version.                      *
 *                                                                      *
 * Paramano is distributed in the hope that it will be useful,          *
 * but WITHOUT ANY WARRANTY; without even the implied warranty of       *
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the        *
 * GNU General Public License for more details.                         *
 *                                                                      *
 * You should have received a copy of the GNU General Public License    *
 * along with Paramano. If not, see                                     *
 * <http://www.gnu.org/licenses/>.                                      *
 ************************************************************************/

#ifndef COMMON_H
#define COMMON_H

#include <stdarg.h>

int  get_int_value_from_filef(const char* format, ...);
int  vget_int_value_from_filef(const char* format, va_list args);
int  get_int_value_from_file(const char* filename);
void chomp(char *string);
int  get_int(const char* string);

// <ew> Stringification of line number
#define STRING2(x) #x
#define STRING(x) STRING2(x)
#define STR_LINE STRING(__LINE__)
// </ew>

#define info(...)	printf("INFO: "__FILE__":"STR_LINE" --- "__VA_ARGS__)
#define FILE_PATH_SIZE 2048
#endif
