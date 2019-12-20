/********************************************************************
** program name: cult dating app / follower.hcpp
** author: kelly thomson
** date: 12-16-2019
** description: follower class source - child of profile
********************************************************************/
#include "follower.hpp"

#include <iostream>

Follower::Follower()
{
  type = "follower";
  for (int i = 0; i < 6; i++)
  {
    traits[i] = "";
  }
}

/*********************************************************************
** function: destructor
*********************************************************************/
Follower::~Follower()
{
}


/********************************************************************
********************************************************************/
void Follower::choose_login()
{
  string name;
  string pass;

  cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
  cout << "please choose your login information" << endl;
  cout << "--------------------------------------------------------------------" << endl;

  cout << "please enter a username" << endl;
  cout << " * input username:" << endl;
  getline(cin, name);
  username = name;
  cout << "username after assignment is: " << username << endl;   // test
  cout << endl;

  cout << "please enter a password" << endl;
  cout << " * input password:" << endl;
  getline(cin, pass);
  userpass = pass;
  cout << "password after assignment is: " << userpass << endl;   // test
  cout << endl;

}


/********************************************************************
********************************************************************/
void Follower::choose_type()
{
  int input = 0;

  cout << "please choose your cult orientation:" << endl;
  cout << "  enter 1 to identify yourself as a leader" << endl;
  cout << "  enter 2 to identify yourself as a follower" << endl;

  cin >> input;

  if (input == 1)
  {
    cout << "you are a cult leader" << endl;
    type = "leader";
  }
  else
  {
    cout << "you are a cult follower" << endl;
    type = "follower";
  }
}

/********************************************************************
********************************************************************/
void Follower::choose_name()
{
  string input;

  cout << "please enter your first name" << endl;
  cout << " * input name:" << endl;

  getline(cin, input);
  name = input;
    cout << "name after assignment is: " << name << endl;   // test
}

/********************************************************************
********************************************************************/
void Follower::choose_age()
{
  int input = 0;

  cout << "please enter your age" << endl;
  do
  {
    cout << " * input age:" << endl;
    cin >> input;
  } while (input >= 101 || input <= 0);     // check valid age

  age = input;
}

/********************************************************************
********************************************************************/
void Follower::choose_relocate()
{
  char input;

  cout << "are you willing to relocate?" << endl;
  cout << "enter 'y' or 'n'" << endl;
  cout << " * input selection:" << endl;

  cin >> input;

  switch (input)
  {
    case 'y':
      relocate = true;
      break;

    case 'n':
      relocate = false;
      break;

    default:
      cout << "invalid input" << endl;
      break;

    }
}

/********************************************************************
********************************************************************/
void Follower::choose_description()
{
  string input = "";

  cout << "please enter a short bio to display on your profile" << endl;
  cout << " * input description:" << endl;
  getline(cin, input);
  description = input;

}

/********************************************************************
********************************************************************/
void Follower::choose_traits()
{
  string input = "";

  cout << "now let's get a little more information to help match you" << endl;
  cout << "think of 5 traits that best describe you and your personality" << endl;
  cout << " * input traits:" << endl;

  for(int i = 0; i < 6; i++)
  {
    getline(cin, input);
    traits[i] = input;
  }

}

/********************************************************************
********************************************************************/
void Follower::choose_seeking()
{
  int input = 0;

  cout << "what are you seeking?" << endl;
  cout << " enter 1 if you are looking for followers" << endl;
  cout << " enter 2 if you are looking for a leader" << endl;
  cout << " enter 3 if you are undecided" << endl;
  cout << " * input selection:" << endl;

  cin >> input;

  switch (input)
  {
    case 1:
      seeking = "followers";
      break;

    case 2:
      seeking = "a leader";
      break;

    case 3:
      seeking = "undecided";
      break;

    default:
      cout << "invalid input" << endl;
      break;

  }
}

/********************************************************************
********************************************************************/
string Follower::get_username()
{
  return username;
}

/********************************************************************
********************************************************************/
string Follower::get_userpass()
{
  return userpass;
}

/********************************************************************
********************************************************************/
string Follower::get_type()
{
  return type;
}

/********************************************************************
********************************************************************/
string Follower::get_name()
{
  return name;
}

/********************************************************************
********************************************************************/
int Follower::get_age()
{
  return age;
}

/********************************************************************
********************************************************************/
bool Follower::get_relocate()
{
  return relocate;
}

/********************************************************************
********************************************************************/
string Follower::get_description()
{
  return description;
}

/********************************************************************
********************************************************************/
string Follower::get_traits()
{
  for(int i = 0; i < 6; i++)
  {
    return traits[i];
  }
  return 0;
}

/********************************************************************
********************************************************************/
void Follower::print_traits()
{
  for(int i = 0; i < 6; i++)
  {
    cout << " ~ " << traits[i] << endl;
  }
}

/********************************************************************
********************************************************************/
string Follower::get_seeking()
{
  return seeking;
}
