#include "pod.h"
#include "accelerometer.h"

Pod::Pod()
{
  /// TASK 10 (PERSON B) ///////////////////////////////////////////////////////
  
  /// END OF TASK 10B //////////////////////////////////////////////////////////
}

std::string Pod::get_name()
{
  /// TASK 1 (PERSON A) ////////////////////////////////////////////////////////
  return "Tarik";
  /// END OF TASK 1A ///////////////////////////////////////////////////////////
}

double Pod::get_max_speed()
{
  /// TASK 2 (PERSON B) ////////////////////////////////////////////////////////
  return 400;     // I was going to put a negative number but idk if will give error
  /// END OF TASK 2B ///////////////////////////////////////////////////////////
}

/// TASKS 3 (PERSON A) & 4 (PERSON B) //////////////////////////////////////////
double Pod::get_temperature()
{
  return 42;
}
double Pod::get_pressure()
{
  return 24;
}

/// END OF TASKS 3A & 4B ///////////////////////////////////////////////////////
