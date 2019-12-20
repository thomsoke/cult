/********************************************************************
** program name: cult dating app / leader.hpp
** author: kelly thomson
** date: 12-16-2019
** description: leader class header - child of profile
********************************************************************/
#ifndef LEADER_HPP
#define LEADER_HPP

#include <iostream>
#include <string>

#include "profile.hpp"

using namespace std;

class Leader : public Profile
{
  public:
    Leader();
    Leader(string name, int age, string description, int seeking);
    ~Leader();

    virtual void choose_login();
    virtual void choose_type();
    virtual void choose_name();
    virtual void choose_age();
    virtual void choose_relocate();
    virtual void choose_description();
    virtual void choose_traits();
    virtual void choose_seeking();

    virtual string get_username();
    virtual string get_userpass();

    virtual string get_type();
    virtual string get_name();
    virtual int get_age();
    virtual bool get_relocate();
    virtual string get_description();
    virtual string get_traits();
    virtual void print_traits();
    virtual string get_seeking();

  protected:

  private:


};

#endif
