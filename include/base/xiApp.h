//* This file is part of the MOOSE framework
//* https://www.mooseframework.org
//*
//* All rights reserved, see COPYRIGHT for full restrictions
//* https://github.com/idaholab/moose/blob/master/COPYRIGHT
//*
//* Licensed under LGPL 2.1, please see LICENSE for details
//* https://www.gnu.org/licenses/lgpl-2.1.html
#ifndef XIAPP_H
#define XIAPP_H

#include "MooseApp.h"

class xiApp;

template <>
InputParameters validParams<xiApp>();

class xiApp : public MooseApp
{
public:
  xiApp(InputParameters parameters);
  virtual ~xiApp();

  static void registerApps();
  static void registerAll(Factory & f, ActionFactory & af, Syntax & s);
};

#endif /* XIAPP_H */
