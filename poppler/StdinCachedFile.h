//========================================================================
//
// StdinCachedFile.h
//
// This file is licensed under the GPLv2 or later
//
// Copyright 2010 Hib Eris <hib@hiberis.nl>
// Copyright 2010 Albert Astals Cid <aacid@kde.org>
//
//========================================================================

#ifndef STDINCACHELOADER_H
#define STDINCACHELOADER_H

#include "poppler_export.h"
#include "CachedFile.h"

class POPPLER_EXPORT StdinCacheLoader : public CachedFileLoader
{

public:
    size_t init(GooString *dummy, CachedFile *cachedFile) override;
    int load(const std::vector<ByteRange> &ranges, CachedFileWriter *writer) override;
};

#endif
