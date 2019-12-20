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
  Admin* a;
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

  do
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

    cout << "make selection: " << endl;
    do
    {
      getline(cin, get_input);
    } while(get_input != "1" && get_input != "2" && get_input != "3");
    temp = atoi(get_input.c_str());

    switch (temp)
    {
      case 1:
        cout << "running as admin" << endl;
        run_as_admin();
        break;

      case 2:
        cout << "running as user" << endl;
        run_as_user();
        break;

      case 3:
        quit = true;
        cout << "quitting game" << endl;
        break;

      default:
        cout << "invalid" << endl;
        break;
    }
  } while (!quit);
}

/********************************************************************
********************************************************************/
void Interface::set_admin()
{
  cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
  cout << " welcome! let's set up your ADMIN account" << endl;
  cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;

  int temp_pass;
  cout << " enter a 5 digit password for your account:" << endl;
  cin >> temp_pass;
  admin->set_password(temp_pass);

  // test
  cout << "ADMIN TESTER STUFF" << endl;
  cout << admin->get_password() << endl;
}

/********************************************************************
********************************************************************/
bool Interface::run_as_admin()
{
  quit = false;
  char temp;
  int pass_attempt;
  string get_input;

  while (quit == false)
  {

  cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
  cout << " *** ADMIN USE ONLY ***" << endl;
  cout << " enter c if you are the current admin" << endl;
  cout << " enter n if you are a new admin" << endl;
  cout << " enter q to quit" << endl;
  cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;

  cin >> temp;
  switch (temp)
  {
    case 'c':
    {
      for (int i = 0; i < 1; i++)
      {
        if (admin->has_password() == false)
        {
          cout << "please create an admin account before proceeding" << endl;
        }
        else
        {
          cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
          cout << " hello, CURRENT ADMIN" << endl;
          cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
      // run admin profile

          do
          {
            cout << "please enter your password to proceed" << endl;
            cout << " password:" << endl;

            cin >> pass_attempt;
          } while (pass_attempt != admin->get_password());

            cout << "CORRECT PASSWORD" << endl; // test

            cout << "--------------------------------------------------------------------" << endl;
            cout << " *** ADMIN USE ONLY ***" << endl;
            cout << " enter v to view all profiles" << endl;
            cout << " enter t to view profiles by type" << endl;
            cout << " enter r to remove existing profile" << endl;
            cout << " enter m to view matches" << endl;
            cout << " enter q to quit" << endl;
            cout << "--------------------------------------------------------------------" << endl;

            cout << "make selection: " << endl;
            cin >> temp;

            switch (temp)
            {
              case 'v':
                cout << "viewing all profiles" << endl;
                break;

              case 't':
                cout << "viewing profiles by type" << endl;
                break;

              case 'r':
                cout << "select profile to remove" << endl;
                break;

              case 'm':
                cout << "view all matches" << endl;
                break;

              case 'q':
                quit = true;
                cout << "quitting game" << endl;
                break;

              default:
                cout << "invalid" << endl;
                break;
            }



        }
      break;
      }
    }

    case 'n':
    {
      set_admin();
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
  bool login = false;
  char temp;
  string name_attempt;
  string pass_attempt;

  while (quit == false)
  {

  cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
  cout << " ~~~ WELCOME TO CULT CATCH ~~~" << endl;
  cout << " enter c if you are a current user" << endl;
  cout << " enter n to create a new user profile" << endl;
  cout << " enter q to quit" << endl;
  cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;


  cin >> temp;
  switch (temp)
  {
    case 'c':
    {
      for (int i = 0; i < 1; i++)
      {

        cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
        cout << " ~~~ HELLO, CULT CATCH USER ~~~" << endl;
        cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;

        do
        {
          cout << "please enter your username and password to log in" << endl;
          cout << " username:" << endl;
            getline(cin, name_attempt);
          cout << " password:" << endl;
            getline(cin, pass_attempt);

            if (admin->check_login(name_attempt, pass_attempt) == true)
            {
              login = true;
            }
            else
            {
              login = false;
            }

        } while (login == false);

        cout << "LOGIN SUCCESSFUL" << endl; // test

        cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
        cout << " ~~~ WELCOME, CULT CATCH USER ~~~" << endl;
        cout << " enter m to view matches" << endl;
        cout << " enter v to view your profile" << endl;
        cout << " enter e to edit your profile" << endl;
        cout << " enter d to delete your profile" << endl;
        cout << " enter q to quit" << endl;
        cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;

      break;
      }
    }

    case 'n':
    {
      admin->add_new_profile();
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
