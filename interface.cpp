/********************************************************************
** program name: cult dating app / interface.cpp
** author: kelly thomson
** date: 12-16-2019
** description: interface class source
********************************************************************/
#include "interface.hpp"

#include <iostream>

/*********************************************************************
** function: default constructor
*********************************************************************/
Interface::Interface()
{
  quit = false;
  password = 00000;
  for (int i = 0; i < 1; i++)
  {
    admin[i] = NULL;
  }
}

/*********************************************************************
** function: destructor
*********************************************************************/
Interface::~Interface()
{
}


/*********************************************************************
** main menu
*********************************************************************/
void Interface::display_menu()
{
  string get_input;
  int temp;

  quit = false;

  while (quit == false)
  {
    cout << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
    cout << "------------------------------- MENU -------------------------------" << endl;
    cout << "   1 --- admin menu" << endl;
    cout << "   2 --- user menu" << endl;
    cout << "   3 --- quit" << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;

    do
    {
      cout << "make selection: " << endl;
      getline(cin, get_input);
    } while(get_input != "1" && get_input != "2");
    temp = atoi(get_input.c_str());

    switch (temp)
    {
      case 1:
        cout << "running as admin" << endl;
        run_as_admin();
        break;

      case 2:
        cout << "running as user" << endl;
//        run_as_user();
        break;

      case 3:
        quit = true;
        cout << "quitting game" << endl;
        break;

      default:
        cout << "invalid" << endl;
        break;
    }
  }
}



/********************************************************************
********************************************************************/
void Interface::create_new_admin()
{
  cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
  cout << " welcome! let's set up your ADMIN account" << endl;
  cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;

  Admin* new_admin = new Admin;

  int temp_pass;
  cout << " enter a 5 digit password for your account:" << endl;
  cin >> temp_pass;
  new_admin->set_password(temp_pass);

  add_admin(new_admin);


  //////////////////////////////////////////////
  cout << "ADMIN TESTER STUFF" << endl;
  cout << new_admin->get_is_admin() << endl;
  cout << new_admin->get_password() << endl;

}

/********************************************************************
********************************************************************/
void Interface::add_admin(Admin* new_admin)
{
  int admin_slot = get_avail_admin_slot();
  if (admin_slot != -1)
  {
    admin[admin_slot] = new_admin;
  }
  else
    cout << "no available room for new profiles" << endl;
}

/********************************************************************
********************************************************************/
int Interface::get_avail_admin_slot()
{
  for (int i = 0; i < 1; i++)
  {
    if (admin[i] == NULL)
    {
      return i;
    }
  }
  return -1;
}



/********************************************************************
********************************************************************/
bool Interface::run_as_admin()
{
  quit = false;
  char temp;
//  string get_input;

  while (quit == false)
  {

  cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
  cout << " *** ADMIN USE ONLY ***" << endl;
  cout << " enter c if you have a current admin account" << endl;
  cout << " enter n if you need to create a new admin account" << endl;
  cout << " enter q to quit" << endl;
  cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;

  cin >> temp;
  switch (temp)
  {
    case 'c':
    {
      for (int i = 0; i < 1; i++)
      {
        if (admin[i] == NULL)
        {
          cout << "please create an admin account before proceeding" << endl;
        }
        else
        {
          cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
          cout << " hello, CURRENT ADMIN" << endl;
          cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
          cout << " hello, CURRENT ADMIN" << endl;
      // run admin profile
            cout << "please enter your password to proceed" << endl;
            cout << " password:" << endl;
            int pass_attempt;
            cin >> pass_attempt;

            cout << "--------------------------------------------------------------------" << endl;
            cout << " *** ADMIN USE ONLY ***" << endl;
            cout << " enter * to view all profiles" << endl;
            cout << " enter * to view profiles by type" << endl;
            cout << " enter * to remove existing profile" << endl;
            cout << " enter * to view matches" << endl;
            cout << "--------------------------------------------------------------------" << endl;
        }
      break;
      }
    }

    case 'n':
    {
      create_new_admin();
      return true;
      break;
    }

    case 'q':
    {
      cout << "quitting menu" << endl;
      return false;
      break;
    }

    default:
    {
      cout << "invalid" << endl;
      break;
    }
  }
    quit = true;

  }
return true;

}


/********************************************************************
********************************************************************/

bool Interface::run_as_user()
{
  quit = false;
  char temp;
//  string get_input;

  while (quit == false)
  {

  cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
  cout << " ~~~ WELCOME, CULT CATCH USER ~~~" << endl;
  cout << " enter n to create a new user profile" << endl;
  cout << " enter m to modify an existing user profile" << endl;
  cout << " enter d to delete an existing user profile" << endl;
  cout << " enter v to view an existing profile" << endl;
  cout << " enter q to quit" << endl;
  cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;

  cin >> temp;

  switch (temp)
  {
    case 'n':
    {
      cout << "are you a LEADER or a FOLLOWER?" << endl;
      int temp_type;

      cout << " enter 1 for leader" << endl;
      cout << " enter 2 for follower" << endl;
      cin >> temp_type;

      if (temp_type == 1)
      {

        for (int i = 0; i < 1; i++)
        {
          if (admin[i] == NULL)
          {
            return i;
          }
        }
        return -1;
        new_admin.create_leader();
        new_admin.print_profiles();

      }

      break;
    }

    case 'm':
    {
cout << "test" << endl;
      break;
    }

    case 'd':
    {
cout << "test" << endl;
      break;
    }

    case 'v':
    {
cout << "test" << endl;
      break;
    }

    case 'q':
    {
      cout << "quitting menu" << endl;
      return false;
      break;
    }

    default:
    {
      cout << "invalid" << endl;
      break;
    }
  }
  quit = true;

}
return true;

}
















/********************************************************************
********************************************************************/
void Interface::print_admin_welcome()
{
  cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
  cout << "<3<3<3 welcome to CULT CATCH, a program for connecting people <3<3<3" << endl;
  cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
  cout << "~~~~~~~~~~~~~~~~~~~~~ ** admin access only ** ~~~~~~~~~~~~~~~~~~~~~~" << endl;
  cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
  cout << endl;
}



/********************************************************************
********************************************************************/
void Interface::print_user_welcome()
{
  cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
  cout << "<3<3<3 welcome to CULT CATCH, a program for connecting people <3<3<3" << endl;
  cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
  cout << "using this software, we match potential cult leaders" << endl;
  cout << "and potential cult followers so existing cults can increase" << endl;
  cout << "their numbers, and new cults can be created!" << endl;
  cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
  cout << endl;
}
