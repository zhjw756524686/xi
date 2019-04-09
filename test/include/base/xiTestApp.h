//* This file is part of the MOOSE framework
//* https://www.mooseframework.org
//*
//* All rights reserved, see COPYRIGHT for full restrictions
//* https://github.com/idaholab/moose/blob/master/COPYRIGHT
//*
//* Licensed under LGPL 2.1, please see LICENSE for details
//* https://www.gnu.org/licenses/lgpl-2.1.html
#ifndef XITESTAPP_H
#define XITESTAPP_H

#include "MooseApp.h"

class xiTestApp;

template <>
InputParameters validParams<xiTestApp>();

class xiTestApp : public MooseApp
{
public:
  xiTestApp(InputParameters parameters);
  virtual ~xiTestApp();

  static void registerApps();
  static void registerAll(Factory & f, ActionFactory & af, Syntax & s, bool use_test_objs = false);
};

#endif /* XITESTAPP_H */
