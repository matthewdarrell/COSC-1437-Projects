#include <iostream>
#include <stdio.h>
#include <cmath>
#include "Input_Validators.h"

void calculateVelocity();
void calculateAcceleration();
void calculateVelocityTime();
void calculatePositionTime();
void calculateVelocityPosition();
void calculateAverageVelocity();
void calculateForce();
void calculateWeight();
void calculateMomentum();

void calculateVelocity()
{
  double ds = 0.0, dt = 0.0, v = 0.0;
  string dsUnit = "", dtUnit = "";

  ds = getValidDouble("Please enter the displacement: ");
  dsUnit = getValidString("Please enter the displacement unit: ");
  dt = getValidDouble("Please enter the delta time: ");
  dtUnit = getValidString("Please enter the delta time unit: ");

  v = ds / dt;

  cout << "The velocity is " << ds << "/" << dt << " = " << v << " " << dsUnit << "/" << dtUnit << endl;
}

void calculateAcceleration()
{
  double dv = 0.0, dt = 0.0, a = 0.0;
  string dvUnit = "", dtUnit = "";

  dv = getValidDouble("Please enter the delta velocity: ");
  dvUnit = getValidString("Please enter the delta velocity unit: ");
  dt = getValidDouble("Please enter the delta time: ");
  dtUnit = getValidString("Please enter the delta time unit: ");

  a = dv / dt;

  cout << "The acceleration is " << dv << "/" << dt << " = " << a << " " << dvUnit << "/" << dtUnit << endl;
}

void calculateVelocityTime()
{
  double vi = 0.0, a = 0.0, t = 0.0, v = 0.0;
  string aUnit = "", tUnit = "";

  vi = getValidDouble("Please enter the initial velocity: ");
  a = getValidDouble("Please enter the acceleration: ");
  aUnit = getValidString("Please enter the acceleration unit: ");
  t = getValidDouble("Please enter the time: ");
  tUnit = getValidString("Please enter the time unit: ");

  v = vi + (a * t);

  cout << "The current velocity is " << vi << " + (" << a << " + " << t << ") = " << v << " " << aUnit << "/" << tUnit << endl;
}

void calculatePositionTime()
{
  double si = 0.0, vi = 0.0, t = 0.0, a = 0.0, s = 0.0;
  string sUnit = "";

  si = getValidDouble("Please enter the initial position: ");
  vi = getValidDouble("Please enter the initial velocity: ");
  t = getValidDouble("Please enter the time: ");
  a = getValidDouble("Please enter the acceleration: ");
  sUnit = getValidString("Please enter the expected position unit: ");

  s = si + (vi * t) + (.5 * a * pow(t, 2));

  cout << "The current position is " << si << " + (" << vi << " * " << t << ") + (1/2 * " << a << " * " << t << "^2) = " << s << " " << sUnit << endl;
}

void calculateVelocityPosition()
{
  double vi = 0.0, a = 0.0, s = 0.0, si = 0.0, v = 0.0;
  string vUnit = "";

  vi = getValidDouble("Please enter the initial velocity: ");
  a = getValidDouble("Please enter the acceleration: ");
  s = getValidDouble("Please enter the current position: ");
  si = getValidDouble("Please enter the initial position: ");

  vUnit = getValidString("Please enter the expected velocity squared unit: ");

  v = pow(vi, 2) + (2 * a * (s - si));

  cout << "The current velocity squared is " << vi << "^2 + (2 * " << a << " * (" << s << " - " << si << ")) = " << v << "^2 " << vUnit << endl;
}

void calculateAverageVelocity()
{
  double vi = 0.0, v = 0.0, va = 0.0;
  string vaUnit = "";

  vi = getValidDouble("Please enter the initial velocity: ");
  v = getValidDouble("Please enter the current velocity: ");

  vaUnit = getValidString("Please enter the expected velocity unit: ");

  va = .5 * (v + vi);

  cout << "The average velocity is 1/2 * (" << v << " + " << vi << ")" << va << "" << vaUnit << endl;
}

void calculateForce()
{
  double m = 0.0, a = 0.0, f = 0.0;
  string mUnit = "", aUnit = "";

  m = getValidDouble("Please enter the mass: ");
  mUnit = getValidString("Please enter the mass unit: ");
  a = getValidDouble("Please enter the accelaration: ");
  aUnit = getValidString("Please enter the accelaration unit: ");

  f = m * a;

  cout << "The force is " << m << " * " << a << " = " << f << " " << mUnit << "/" << aUnit << endl;
}

void calculateWeight()
{
  double m = 0.0, g = 0.0, w = 0.0;
  string wUnit = "";

  m = getValidDouble("Please enter the mass: ");
  g = getValidDouble("Please enter the gravitational accelaration: ");

  wUnit = getValidString("Please enter the expected weight unit: ");

  w = m * g;

  cout << "The force is " << m << " * " << g << " = " << w << " " << wUnit << endl;
}

void calculateMomentum()
{
  double m = 0.0, v = 0.0, mo = 0.0;
  string mUnit = "", vUnit = "";

  m = getValidDouble("Please enter the mass: ");
  mUnit = getValidString("Please enter the mass unit: ");
  v = getValidDouble("Please enter the velocity: ");
  vUnit = getValidString("Please enter the velocity unit: ");

  mo = m * v;

  cout << "The force is " << m << " * " << v << " = " << mo << " " << mUnit << "/" << vUnit << endl;
}