//========================================================================
//
// glibc.h
//
// Emulate various non-portable glibc functions.
//
// This file is licensed under the GPLv2 or later
//
// Copyright (C) 2016, 2017 Adrian Johnson <ajohnson@redneon.com>
// Copyright (C) 2017 Albert Astals Cid <aacid@kde.org>
//
//========================================================================

#ifndef GLIBC_H
#define GLIBC_H

#include "poppler_export.h"
#include "config.h"

#include <ctime>

#ifndef HAVE_GMTIME_R
POPPLER_EXPORT struct tm *gmtime_r(const time_t *timep, struct tm *result);
#endif

#ifndef HAVE_LOCALTIME_R
POPPLER_EXPORT struct tm *localtime_r(const time_t *timep, struct tm *result);
#endif

#ifndef HAVE_TIMEGM
POPPLER_EXPORT time_t timegm(struct tm *tm);
#endif

#ifndef HAVE_STRTOK_R
POPPLER_EXPORT char *strtok_r(char *s, const char *delim, char **save_ptr);
#endif

#endif // GLIBC_H
