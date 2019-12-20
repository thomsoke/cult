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
#include "admin.hpp"

using namespace std;

class Interface
{
  public:
    Interface();
    ~Interface();
    void display_menu();
    bool run_as_admin();
    bool run_as_user();
    void print_admin_welcome();
    void print_user_welcome();
    void set_admin();

  protected:
    bool quit;
    int password;
    Admin* admin;

  private:

};

#endif
