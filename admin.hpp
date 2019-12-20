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
    Admin(int password);
    ~Admin();

    int get_password();
    void set_password(int p);
    bool has_password();
    void add_leader();
    int get_avail_profile_slot();
    void print_profiles();

  protected:

  private:
    int password;
    Profile* profile[10];

};

#endif


// want admin to be able to:
//
// remove profile
// print profiles
// compare profies
// match profiles
// send msg to users
