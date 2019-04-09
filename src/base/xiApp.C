#include "xiApp.h"
#include "Moose.h"
#include "AppFactory.h"
#include "ModulesApp.h"
#include "MooseSyntax.h"

template <>
InputParameters
validParams<xiApp>()
{
  InputParameters params = validParams<MooseApp>();
  return params;
}

xiApp::xiApp(InputParameters parameters) : MooseApp(parameters)
{
  xiApp::registerAll(_factory, _action_factory, _syntax);
}

xiApp::~xiApp() {}

void
xiApp::registerAll(Factory & f, ActionFactory & af, Syntax & s)
{
  ModulesApp::registerAll(f, af, s);
  Registry::registerObjectsTo(f, {"xiApp"});
  Registry::registerActionsTo(af, {"xiApp"});

  /* register custom execute flags, action syntax, etc. here */
}

void
xiApp::registerApps()
{
  registerApp(xiApp);
}

/***************************************************************************************************
 *********************** Dynamic Library Entry Points - DO NOT MODIFY ******************************
 **************************************************************************************************/
extern "C" void
xiApp__registerAll(Factory & f, ActionFactory & af, Syntax & s)
{
  xiApp::registerAll(f, af, s);
}
extern "C" void
xiApp__registerApps()
{
  xiApp::registerApps();
}
