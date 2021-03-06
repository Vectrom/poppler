//========================================================================
//
// LocalPDFDocBuilder.h
//
// This file is licensed under the GPLv2 or later
//
// Copyright 2010 Hib Eris <hib@hiberis.nl>
// Copyright 2010, 2018 Albert Astals Cid <aacid@kde.org>
//
//========================================================================

#ifndef LOCALPDFDOCBUILDER_H
#define LOCALPDFDOCBUILDER_H

#include "poppler_export.h"
#include "PDFDocBuilder.h"

//------------------------------------------------------------------------
// LocalPDFDocBuilder
//
// The LocalPDFDocBuilder implements a PDFDocBuilder for local files.
//------------------------------------------------------------------------

class POPPLER_EXPORT LocalPDFDocBuilder : public PDFDocBuilder
{

public:
    PDFDoc *buildPDFDoc(const GooString &uri, GooString *ownerPassword = nullptr, GooString *userPassword = nullptr, void *guiDataA = nullptr) override;
    bool supports(const GooString &uri) override;
};

#endif /* LOCALPDFDOCBUILDER_H */
