/********************************************************************
** program name: cult dating app / leader.cpp
** author: kelly thomson
** date: 12-16-2019
** description: leader class source - child of profile
********************************************************************/
#include "leader.hpp"

#include <iostream>

/*********************************************************************
** function: default constructor
*********************************************************************/
Leader::Leader()
{
}

/*********************************************************************
** function: parameterized constructor
*********************************************************************/
Leader::Leader(string name, int age, string description, int seeking)
{
  this->name = name;
  this->age = age;
  this->description = description;
  for (int i = 0; i < 6; i++)
  {
    traits[i] = "";
  }
  this->seeking = seeking;

}

/*********************************************************************
** function: destructor
*********************************************************************/
Leader::~Leader()
{
}

/********************************************************************
********************************************************************/
void Leader::choose_type()
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
void Leader::choose_name()
{


  cout << "please enter your first name" << endl;
  cout << " * input name:" << endl;

cout << "name before assignment is: " << name << endl;
string input;

  getline(cin, input);

  name = input;

cout << "name after assignment is: " << name << endl;

}

/********************************************************************
********************************************************************/
void Leader::choose_age()
{
  int input = 0;

  cout << "please enter your age" << endl;
  do
  {
    cout << " * input age:" << endl;
    cin >> input;
  } while(input >= 101 || input <= 0);     // check valid age

  age = input;
}

/********************************************************************
********************************************************************/
void Leader::choose_relocate()
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
void Leader::choose_description()
{
  string input = "";

  cout << "please enter a short bio to display on your profile" << endl;
  cout << " * input description:" << endl;
  getline(cin, input);
  description = input;

}

/********************************************************************
********************************************************************/
void Leader::choose_traits()
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
void Leader::choose_seeking()
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
string Leader::get_type()
{
  return type;
}

/********************************************************************
********************************************************************/
string Leader::get_name()
{
  return name;
}

/********************************************************************
********************************************************************/
int Leader::get_age()
{
  return age;
}

/********************************************************************
********************************************************************/
bool Leader::get_relocate()
{
  return relocate;
}

/********************************************************************
********************************************************************/
string Leader::get_description()
{
  return description;
}

/********************************************************************
********************************************************************/
string Leader::get_traits()
{
  for(int i = 0; i < 6; i++)
  {
    return traits[i];
  }
  return 0;
}

/********************************************************************
********************************************************************/
void Leader::print_traits()
{
  for(int i = 0; i < 6; i++)
  {
    cout << " ~ " << traits[i] << endl;
  }
}

/********************************************************************
********************************************************************/
string Leader::get_seeking()
{
  return seeking;
}
