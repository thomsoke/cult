/********************************************************************
** program name: cult dating app / profile.hpp
** author: kelly thomson
** date: 12-16-2019
** description: profile class header - abstract parent
********************************************************************/
#ifndef PROFILE_HPP
#define PROFILE_HPP

#include <iostream>
#include <string>

using namespace std;

class Profile
{
  public:
    virtual void choose_type() = 0;
    virtual void choose_name() = 0;
    virtual void choose_age() = 0;
    virtual void choose_relocate() = 0;
    virtual void choose_description() = 0;
    virtual void choose_traits() = 0;
    virtual void choose_seeking() = 0;

  protected:
    string type;
    string name;
    int age;
    bool relocate;
    string description;
    string traits[6];
    string seeking;



  private:



};

#endif
