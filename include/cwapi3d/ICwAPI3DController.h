#pragma once
#include "ICwAPI3DControllerFactory.h"

class CCwQtString;

class ICwAPI3DController
{
public:
  virtual ~ICwAPI3DController() = default;
  virtual bool executePlugin(CCwQtString aPath) = 0;
  virtual CwAPI3D::Interfaces::ICwAPI3DControllerFactory* getFactoryPointer() = 0;
  virtual bool isAutoDisplayRefresh() = 0;
  virtual void disableAutoDisplayRefresh() = 0;
  virtual void enableAutoDisplayRefresh() = 0;
};
