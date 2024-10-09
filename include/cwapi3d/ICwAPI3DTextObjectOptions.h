// Copyright (C) Cadwork. All rights reserved.

#pragma once

#include "CwAPI3DTypes.h"

namespace CwAPI3D
{
  namespace Interfaces
  {
    /// @brief
    class ICwAPI3DTextObjectOptions
    {
    public:
      /// @brief
      virtual ~ICwAPI3DTextObjectOptions() = default;

      /// @brief
      /// @param aFontName
      virtual void setFontName(const string aFontName) = 0;
      /// @brief
      /// @return
      virtual string getFontName() const = 0;

      /// @brief
      /// @param aText
      virtual void setText(const string aText) = 0;
      /// @brief
      /// @return
      virtual string getText() const = 0;

      /// @brief
      /// @param aValue
      virtual void setBold(const bool aValue) = 0;
      /// @brief
      /// @return
      virtual bool getBold() const = 0;

      /// @brief
      /// @param aValue
      virtual void setItalic(const bool aValue) = 0;
      /// @brief
      /// @return
      virtual bool getItalic() const = 0;

      /// @brief
      /// @param aHeight
      virtual void setHeight(const double aHeight) = 0;
      /// @brief
      /// @return
      virtual double getHeight() const = 0;

      /// @brief
      /// @param aElementType
      virtual void setElementType(const textElementType aElementType) = 0;
      /// @brief
      /// @return
      virtual textElementType getElementType() const = 0;

      /// @brief
      /// @param aThickness
      virtual void setThickness(const double aThickness) = 0;
      /// @brief
      /// @return
      virtual double getThickness() const = 0;

      /// @brief
      /// @param aColorNr
      virtual void setColor(const int aColorNr) = 0;
      /// @brief
      /// @return
      virtual int getColor() const = 0;

      /// @brief
      /// @param aValue
      virtual void setHeightRelative(const bool aValue) = 0;
      /// @brief
      /// @return
      virtual bool getHeightRelative() const = 0;
    };
  }
}
