/** @file 
* Copyright (C) 2023 cadwork informatik AG
* 
* This file is part of the CwAPI3D module for cadwork 3d.
* 
* @ingroup       CwAPI3D
* @since         30.0
* @author        Brunner
* @date          2023-10-31
*/


#pragma once
#include "CwAPI3DTypes.h"

namespace CwAPI3D::Interfaces
{
  class ICwAPI3DTextObjectOptions
  {
  public:
    virtual ~ICwAPI3DTextObjectOptions() = default;

    virtual void setFontName(const string aFontName) = 0;
    virtual string getFontName() const = 0;

    virtual void setText(const string aText) = 0;
    virtual string getText() const = 0;

    virtual void setBold(const bool aValue) = 0;
    virtual bool getBold() const = 0;

    virtual void setItalic(const bool aValue) = 0;
    virtual bool getItalic() const = 0;

    virtual void setHeight(const double aHeight) = 0;
    virtual double getHeight() const = 0;

    virtual void setElementType(const textElementType aElementType) = 0;
    virtual textElementType getElementType() const = 0;

    virtual void setThickness(const double aThickness) = 0;
    virtual double getThickness() const = 0;

    virtual void setColor(const int aColorNr) = 0;
    virtual int getColor() const = 0;

    virtual void setHeightRelative(const bool aValue) = 0;
    virtual bool getHeightRelative() const = 0;
  };
}
