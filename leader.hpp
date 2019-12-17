/********************************************************************
** program name: cult dating app / leader.hpp
** author: kelly thomson
** date: 12-16-2019
** description: leader class header - child of profile
********************************************************************/
#ifndef LEADER_HPP
#define LEADER_HPP

#include <iostream>

#include "profile.hpp"

using namespace std;

class Leader : public Profile
{
  public:
    Leader();
    Leader(string name, int age, string description, int seeking);
    ~Leader();
    virtual void choose_type();
    virtual void choose_name();
    virtual void choose_age();
    virtual void choose_relocate();
    virtual void choose_description();
    virtual void choose_traits();
    virtual void choose_seeking();


    string get_type();
    string get_name();
    int get_age();
    bool get_relocate();
    string get_description();
    string get_traits();
    void print_traits();
    string get_seeking();



  protected:

  private:




};

#endif






/********************************************************************
********************************************************************/
/*
  public:
    MinotaurSpace(string description);
    virtual bool do_menu(Player* player);

  protected:
    int player_health;
    int minotaur_health;
    int player_roll;
    int minotaur_roll;
    bool dead;

  private:

};


#endif
*/
