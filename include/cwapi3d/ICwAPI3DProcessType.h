/** @file
* Copyright (C) 2017 cadwork informatik AG
*
* This file is part of the CwAPI3D module for cadwork 3d.
*
* @ingroup       CwAPI3D
* @since         24.0
* @author        Paquet
* @date          2017-08-09
*/

#pragma once

namespace CwAPI3D
{
  namespace Interfaces
  {
    /**
    * @interface ICwAPI3DProcessType
    * \brief
    */
    class ICwAPI3DProcessType
    {
    public:
      /**
       * \brief Destroys itself
       */
      virtual void destroy() = 0;
      /**
       * \brief Sets the process type to none
       */
      virtual void setNone() = 0;
      /**
       * \brief Tests if the process type is none
       * \return is the process type none
       */
      virtual bool isNone() = 0;
      /**
       * \brief Sets the process type to purlin
       */
      virtual void setPurlin() = 0;
      /**
       * \brief Tests if the process type is purlin
       * \return is the process type purlin
       */
      virtual bool isPurlin() = 0;
      /**
       * \brief Sets the process type to stud
       */
      virtual void setStud() = 0;
      /**
       * \brief Tests if the process type is stud
       * \return is the process type stud
       */
      virtual bool isStud() = 0;
      /**
       * \brief Sets the process type to rafter
       */
      virtual void setRafter() = 0;
      /**
       * \brief Tests if the process type is rafter
       * \return is the process type rafter
       */
      virtual bool isRafter() = 0;
      /**
       * \brief Sets the process type to jack rafter
       */
      virtual void setJackRafter() = 0;
      /**
       * \brief Tests if the process type is jack rafter
       * \return is the process type jack rafter
       */
      virtual bool isJackRafter() = 0;
      /**
       * \brief Sets the process type to hip or valley
       */
      virtual void setHipValley() = 0;
      /**
       * \brief Tests if the process type is hip or valley
       * \return is the process type hip or valley
       */
      virtual bool isHipValley() = 0;
      /**
       * \brief Sets the process type to log
       */
      virtual void setLog() = 0;
      /**
       * \brief Tests if the process type is log
       * \return is the process type log
       */
      virtual bool isLog() = 0;
      /**
       * \brief Sets the process type to truss
       */
      virtual void setTruss() = 0;
      /**
       * \brief Tests if the process type is truss
       * \return is the process type truss
       */
      virtual bool isTruss() = 0;
      /**
       * \brief Sets the process type to tread
       */
      virtual void setTread() = 0;
      /**
       * \brief Tests if the process type is tread
       * \return is the process type tread
       */
      virtual bool isTread() = 0;
      /**
       * \brief Sets the process type to user 1
       */
      virtual void setUser1() = 0;
      /**
       * \brief Tests if the process type is user 1
       * \return is the process type user 1
       */
      virtual bool isUser1() = 0;
      /**
       * \brief Sets the process type to user 2
       */
      virtual void setUser2() = 0;
      /**
       * \brief Tests if the process type is user 2
       * \return is the process type user 2
       */
      virtual bool isUser2() = 0;
      /**
       * \brief Sets the process type to user 3
       */
      virtual void setUser3() = 0;
      /**
       * \brief Tests if the process type is user 3
       * \return is the process type user 3
       */
      virtual bool isUser3() = 0;
      /**
       * \brief Sets the process type to user 4
       */
      virtual void setUser4() = 0;
      /**
       * \brief Tests if the process type is user 4
       * \return is the process type user 4
       */
      virtual bool isUser4() = 0;
      /**
       * \brief Sets the process type to user 5
       */
      virtual void setUser5() = 0;
      /**
       * \brief Tests if the process type is user 5
       * \return is the process type user 5
       */
      virtual bool isUser5() = 0;
      /**
       * \brief Sets the process type to panel 1
       */
      virtual void setPanel1() = 0;
      /**
       * \brief Tests if the process type is panel 1
       * \return is the process type panel 1
       */
      virtual bool isPanel1() = 0;
      /**
       * \brief Sets the process type to panel 2
       */
      virtual void setPanel2() = 0;
      /**
       * \brief Tests if the process type is panel 2
       * \return is the process type panel 2
       */
      virtual bool isPanel2() = 0;
      /**
       * \brief Sets the process type to panel 3
       */
      virtual void setPanel3() = 0;
      /**
       * \brief Tests if the process type is panel 3
       * \return is the process type panel 3
       */
      virtual bool isPanel3() = 0;
      /**
       * \brief Sets the panel type to panel 4
       */
      virtual void setPanel4() = 0;
      /**
       * \brief Tests if the process type is panel 4
       * \return is the process type panel 4
       */
      virtual bool isPanel4() = 0;
      /**
       * \brief Sets the process type to panel 5
       */
      virtual void setPanel5() = 0;
      /**
       * \brief Tests if the process type is panel 5
       * \return is the process type panel 5
       */
      virtual bool isPanel5() = 0;
      /**
       * \brief Sets the process type to rough volume framed wall
       */
      virtual void setRoughVolumeFramedWall() = 0;
      /**
       * \brief Tests if the process type is rough volume framed wall
       * \return is the process type rough volume framed wall
       */
      virtual bool isRoughVolumeFramedWall() = 0;
      /**
       * \brief Sets the process type to solid wood wall
       */
      virtual void setRoughVolumeSolidWoodWall() = 0;
      /**
       * \brief Tests if the process type is rough volume solid wood wall
       * \return is the process type rough volume solid wood wall
       */
      virtual bool isRoughVolumeSolidWoodWall() = 0;
      /**
       * \brief Sets the process type to rough volume log home
       */
      virtual void setRoughVolumeLogHome() = 0;
      /**
       * \brief Tests if the process type is rough volume log home
       * \return is the process type rough volume log home
       */
      virtual bool isRoughVolumeLogHome() = 0;
      /**
       * \brief Gets the Cadwork value
       * \return Cadwork value
       */
      virtual int getCadworkValue() = 0;
      /**
       * \brief Sets the Cadwork value
       * \param aProcessType
       */
      virtual void setCadworkValue(int aProcessType) = 0;
    };
  }
}
