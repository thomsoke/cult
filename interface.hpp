/********************************************************************
** program name: cult dating app / interface.hpp
** author: kelly thomson
** date: 12-16-2019
** description: interface class header
********************************************************************/
#ifndef INTERFACE_HPP
#define INTERFACE_HPP

#include <string>
#include <iostream>

#include "profile.hpp"

using namespace std;

class Interface
{
  public:
    Interface();
    ~Interface();
    void run_as_admin();
    void run_as_user();

  protected:

  private:


};

#endif
