/********************************************************************
** program name: cult dating app / admin.cpp
** author: kelly thomson
** date: 12-16-2019
** description: admin class source
********************************************************************/
#include "admin.hpp"

/*********************************************************************
** function: parameterized constructor
*********************************************************************/
Admin::Admin()
{
  password = 0;
  for (int i = 0; i < 4; i++)
  {
    profile[i] = NULL;
  }
}

/*********************************************************************
** function: parameterized constructor
*********************************************************************/
Admin::Admin(int p)
{
  password = p;
  for (int i = 0; i < 10; i++)
  {
    profile[i] = NULL;
  }
}

/*********************************************************************
** function: destructor
*********************************************************************/
Admin::~Admin()
{
}

/*********************************************************************
*********************************************************************/
int Admin::get_password()
{
  return password;
}

/*********************************************************************
*********************************************************************/
void Admin::set_password(int p)
{
  password = p;
}

/*********************************************************************
*********************************************************************/
bool Admin::has_password()
{
  if (password == 0)
  {
    return false;
  }
  else
  {
    return true;
  }
}

/********************************************************************
********************************************************************/
void Admin::add_new_profile()
{
  int temp;

  cout << "please choose your cult orientation:" << endl;
  cout << "  enter 1 to identify yourself as a leader" << endl;
  cout << "  enter 2 to identify yourself as a follower" << endl;

  cin >> temp;

  switch (temp)
  {
    case 1:
    {
      add_leader();
      break;
    }
    case 2:
    {
      add_follower();
      break;
    }

    default:
    {
      cout << "invalid" << endl;
      break;
    }
  }
}

/********************************************************************
** adds new leader to profile array at index
********************************************************************/
void Admin::add_leader()
{
  int profile_slot = get_avail_profile_slot();
  if (profile_slot != -1)
  {
    profile[profile_slot] = new Leader;

    profile[profile_slot]->choose_login();

    cout << endl;
    cout << endl;
    cout << " *** create your profile *** " << endl;
    cout << endl;

    profile[profile_slot]->choose_name();
      cout << "test after name" << endl;
    profile[profile_slot]->choose_age();
      cout << "test after age" << endl;
    profile[profile_slot]->choose_seeking();
    profile[profile_slot]->choose_relocate();
    profile[profile_slot]->choose_traits();
    profile[profile_slot]->choose_description();

  }
  else
    cout << "no available room for new profiles" << endl;
}

/********************************************************************
** adds new follower to profile array at index
********************************************************************/
void Admin::add_follower()
{
  int profile_slot = get_avail_profile_slot();
  if (profile_slot != -1)
  {
    profile[profile_slot] = new Follower;

    profile[profile_slot]->choose_login();

    cout << endl;
    cout << endl;
    cout << " *** create your profile *** " << endl;
    cout << endl;

    profile[profile_slot]->choose_name();
      cout << "test after name" << endl;
    profile[profile_slot]->choose_age();
      cout << "test after age" << endl;
    profile[profile_slot]->choose_seeking();
    profile[profile_slot]->choose_relocate();
    profile[profile_slot]->choose_traits();
    profile[profile_slot]->choose_description();

  }
  else
    cout << "no available room for new profiles" << endl;
}

/********************************************************************
** returns a free slot to make a profile object
********************************************************************/
///// need for each type???
int Admin::get_avail_profile_slot()
{
  for (int i = 0; i < 10; i++)
  {
    if (profile[i] == NULL)
    {
      return i;
    }
  }
  return -1;
}

/********************************************************************
********************************************************************/
void Admin::print_profiles()
{
  cout << endl;
  cout << endl;
  cout << " * USER PROFILES * " << endl;
  for (int i =0; i < 10; i++)
  {
    if (profile[i] != NULL)
    {

      //////// test profile view
      cout << endl;
      cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
      cout << "* USER " << i + 1 << " *" << endl;
      cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
      cout << "NAME, AGE: " << profile[i]->get_name() << ", " << profile[i]->get_age() << endl;
      cout << "TYPE: " << profile[i]->get_type() << endl;
      cout << "SEEKING: " << profile[i]->get_seeking() << endl;
      cout << "WILLING 2 RELOCATE: ";
        if (profile[i]->get_relocate() == 1)
        {
          cout << "true" << endl;
        }
        else
        {
          cout << "false" << endl;
        }
      cout << "TRAITS: ";
      profile[i]->print_traits();
      cout << "DESCRIPTION: " << profile[i]->get_description() << endl;

      cout << endl;
      cout << endl;
    }
  }
}


/********************************************************************
********************************************************************/
bool Admin::check_login(string name, string pass)
{
  for (int i = 0; i < 10; i++)
  {
    if (profile[i]->get_username() == name)
    {
      cout << "correct username" << endl;
      if (profile[i]->get_userpass() == pass)
      {
        cout << "correct password" << endl;
        return true;
      }
      else
      {
        return false;
      }
    }
    else
      return false;
  }
}



///// user player.cpp from final to get functs getters & setters
