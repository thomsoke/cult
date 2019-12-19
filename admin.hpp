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

    bool get_is_admin();
    void set_is_admin(bool a);
    int get_password();
    void set_password(int p);


    void create_leader();
    void add_leader(Leader* profile);
//    void create_follower();
//    void add_leader(Follower* profile);
    int get_avail_profile_slot();
    void print_profiles();

  protected:

  private:
    bool is_admin;
    int password;
    Leader* profiles[5];
  // Follower* profiles[5];



};

#endif


// want admin to be able to:
//
// remove profile
// print profiles
// compare profies
// match profiles
// send msg to users
//
//
