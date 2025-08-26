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

namespace CwAPI3D
{
  namespace Interfaces
  {
    /// @interface ICwAPI3DTextObjectOptions
    class ICwAPI3DTextObjectOptions
    {
    public:
      virtual ~ICwAPI3DTextObjectOptions() = default;

      virtual void setFontName(string aFontName) = 0;
      virtual string getFontName() const = 0;

      virtual void setText(string aText) = 0;
      virtual string getText() const = 0;

      virtual void setBold(bool aValue) = 0;
      virtual bool getBold() const = 0;

      virtual void setItalic(bool aValue) = 0;
      virtual bool getItalic() const = 0;

      virtual void setHeight(double aHeight) = 0;
      virtual double getHeight() const = 0;

      virtual void setElementType(textElementType aElementType) = 0;
      virtual textElementType getElementType() const = 0;

      virtual void setThickness(double aThickness) = 0;
      virtual double getThickness() const = 0;

      virtual void setColor(int aColorNr) = 0;
      virtual int getColor() const = 0;

      virtual void setHeightRelative(bool aValue) = 0;
      virtual bool getHeightRelative() const = 0;

      virtual void setDrawOnTop(bool aValue) = 0;
      virtual bool getDrawOnTop() const = 0;
    };
  }
}
