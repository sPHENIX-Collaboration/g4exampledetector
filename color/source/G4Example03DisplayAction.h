// Tell emacs that this is a C++ source
//  -*- C++ -*-.
#ifndef G4EXAMPLE03DISPLAYACTION_H
#define G4EXAMPLE03DISPLAYACTION_H

#include <g4main/PHG4DisplayAction.h>

#include <string>  // for string

class G4Colour;
class G4VisAttributes;
class G4LogicalVolume;
class G4VPhysicalVolume;
class PHParameters;

class G4Example03DisplayAction : public PHG4DisplayAction
{
 public:
  G4Example03DisplayAction(const std::string &name, PHParameters *parameters);

  virtual ~G4Example03DisplayAction();

  void ApplyDisplayAction(G4VPhysicalVolume *physvol);
  void SetMyVolume(G4LogicalVolume *vol) { m_MyVolume = vol; }
  void SetColor(const double red, const double green, const double blue, const double alpha = 1.);

 private:
  PHParameters *m_Params;
  G4LogicalVolume *m_MyVolume;
  G4VisAttributes *m_VisAtt;
  G4Colour *m_Colour;
};

#endif  // G4DETECTORS_PHG4BLOCKDISPLAYACTION_H
