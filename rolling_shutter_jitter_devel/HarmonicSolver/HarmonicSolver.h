#ifndef HarmonicSolver_h
#define HarmonicSolver_h
/**
 * @file
 * $Revision: 1.6 $
 * $Date: 2010/04/09 21:11:43 $
 *
 *   Unless noted otherwise, the portions of Isis written by the USGS are
 *   public domain. See individual third-party library and package descriptions
 *   for intellectual property information, user agreements, and related
 *   information.
 *
 *   Although Isis has been used by the USGS, no warranty, expressed or
 *   implied, is made by the USGS as to the accuracy and functioning of such
 *   software and related material nor shall the fact of distribution
 *   constitute any such warranty, and no responsibility is assumed by the
 *   USGS in connection therewith.
 *
 *   For additional information, launch
 *   $ISISROOT/doc//documents/Disclaimers/Disclaimers.html
 *   in a browser or see the Privacy &amp; Disclaimers page on the Isis website,
 *   http://isis.astrogeology.usgs.gov, and the USGS privacy and disclaimers on
 *   http://www.usgs.gov/privacy.html.
 */

#include <QString>
#include <QPair>

#include "CSVReader.h"


namespace Isis {

  class HarmonicSolver {

    public: 
      HarmonicSolver(const QString &file);
      
      QPair <double, double> solveXYJitter(const double time);
      
      
  private:
    CSVReader m_file;
    
  };
}


#endif

