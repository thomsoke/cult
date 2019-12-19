/********************************************************************
** program name: cult dating app / admin.hpp
** author: kelly thomson
** date: 12-16-2019
** description: admin class header
********************************************************************/
#ifndef ADMIN_HPP
#define ADMIN_HPP

#include <string>
#include <iostream>

#include "profile.hpp"
#include "leader.hpp"

using namespace std;

class Admin
{
  public:
    Admin();
    ~Admin();
    void create_profile();
    void add_profile(Leader* profile);
    int get_avail_profile_slot();
    void print_profiles();

  protected:

  private:
    Leader* profiles[5];



};

#endif
