Getting Started (C++)
=====================

::

  #define CWAPI3D_PLUGIN_NAME  L"HelloWorld"
  #define CWAPI3D_AUTHOR_NAME  L"Cadwork Montreal"
  #define CWAPI3D_AUTHOR_EMAIL L"montreal@cadwork.ca"

  #include <CwAPI3D.h>

  CWAPI3D_PLUGIN bool plugin_x64_init(CwAPI3D::ControllerFactory* aFactory);

  bool plugin_x64_init(CwAPI3D::ControllerFactory* aFactory)
  {
    aFactory->getUtilityController()->printError(L"Hello World!");

    return true;
  }
