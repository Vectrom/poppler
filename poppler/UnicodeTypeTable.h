//========================================================================
//
// UnicodeTypeTable.h
//
// Copyright 2003 Glyph & Cog, LLC
//
//========================================================================

//========================================================================
//
// Modified under the Poppler project - http://poppler.freedesktop.org
//
// All changes made under the Poppler project to this file are licensed
// under GPL version 2 or later
//
// Copyright (C) 2006 Ed Catmur <ed@catmur.co.uk>
// Copyright (C) 2012 Adrian Johnson <ajohnson@redneon.com>
// Copyright (C) 2016 Khaled Hosny <khaledhosny@eglug.org>
// Copyright (C) 2019 Adriaan de Groot <groot@kde.org>
// Copyright (C) 2019 Albert Astals Cid <aacid@kde.org>
//
// To see a description of the changes please see the Changelog file that
// came with your tarball or type make ChangeLog if you are building from git
//
//========================================================================

#ifndef UNICODETYPETABLE_H
#define UNICODETYPETABLE_H

#include "poppler_export.h"
#include "CharTypes.h"

POPPLER_EXPORT extern bool unicodeTypeL(Unicode c);

POPPLER_EXPORT extern bool unicodeTypeR(Unicode c);

POPPLER_EXPORT extern bool unicodeTypeNum(Unicode c);

POPPLER_EXPORT extern bool unicodeTypeAlphaNum(Unicode c);

POPPLER_EXPORT extern bool unicodeIsAlphabeticPresentationForm(Unicode c);

POPPLER_EXPORT extern Unicode unicodeToUpper(Unicode c);

POPPLER_EXPORT extern Unicode *unicodeNormalizeNFKC(const Unicode *in, int len, int *out_len, int **indices);

POPPLER_EXPORT extern Unicode *unicodeNormalizeNFKC(const Unicode *in, int len, int *out_len, int **indices, bool reverseRTL);

#endif
