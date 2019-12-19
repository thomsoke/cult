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
  for (int i = 0; i < 4; i++)
  {
    profiles[i] = NULL;
  }
}

/*********************************************************************
** function: destructor
*********************************************************************/
Admin::~Admin()
{
}

/********************************************************************
** creates new profile
** passes profile into add_profile function to add to profile array
at first available index
********************************************************************/
void Admin::create_profile()
{
  Leader* return_profile = new Leader;

  cout << endl;
  cout << endl;
  cout << " *** create your profile *** " << endl;
  cout << endl;

  return_profile->choose_name();
cout << "test after name" << endl;
  return_profile->choose_age();
cout << "test after age" << endl;
  return_profile->choose_type();
  return_profile->choose_seeking();
  return_profile->choose_relocate();
  return_profile->choose_traits();
  return_profile->choose_description();

  add_profile(return_profile);

}


/********************************************************************
** adds new profile to profile array at index
********************************************************************/
void Admin::add_profile(Leader* profile)
{
  int profile_slot = get_avail_profile_slot();
  if (profile_slot != -1)
  {
    profiles[profile_slot] = profile;
  }
  else
    cout << "no available room for new profiles" << endl;
}


/********************************************************************
** returns a free slot to make a profile object
********************************************************************/
int Admin::get_avail_profile_slot()
{
  for (int i = 0; i < 5; i++)
  {
    if (profiles[i] == NULL)
    {
      return i;
    }
  }
  return -1;
}


/********************************************************************
** prints all profiles
********************************************************************/
void Admin::print_profiles()
{
  cout << endl;
  cout << endl;
  cout << " * USER PROFILES * " << endl;
  for (int i =0; i < 4; i++)
  {
    if (profiles[i] != NULL)
    {

      //////// test profile view

      cout << endl;
      cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
      cout << "* USER " << i + 1 << " *" << endl;
      cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
      cout << "NAME, AGE: " << profiles[i]->get_name() << ", " << profiles[i]->get_age() << endl;
      cout << "TYPE: " << profiles[i]->get_type() << endl;
      cout << "SEEKING: " << profiles[i]->get_seeking() << endl;
      cout << "WILLING 2 RELOCATE: ";
        if (profiles[i]->get_relocate() == 1)
        {
          cout << "true" << endl;
        }
        else
        {
          cout << "false" << endl;
        }
      cout << "TRAITS: ";
      profiles[i]->print_traits();
      cout << "DESCRIPTION: " << profiles[i]->get_description() << endl;

      cout << endl;
      cout << endl;



    }
  }

}













///// user player.cpp from final to get functs getters & setters
