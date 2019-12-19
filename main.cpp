/*********************************************************************
** program name: cult dating app / main.cpp
** author: kelly thomson
** date: 12-16-2019
** description: main
*********************************************************************/
#include <iostream>
#include <string>

#include "interface.hpp"
#include "admin.hpp"
#include "profile.hpp"
#include "leader.hpp"

using namespace std;

int main()
{

  
  Interface i;
  i.display_menu();


return 0;

}




















/*

Admin a;

bool quit = false;

do
{







  cout << "enter 'a' to add a new profile" << endl;
  cout << "enter 'v' to view current profiles" << endl;
  cout << "enter 'q' to quit" << endl;

  char input = ' ';
  cin >> input;

// currently something in here is an infinite loop....
  switch (input)
  {
    case 'a':
      cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
      cout << "   ADD NEW PROFILE" << endl;
      cout << "   let's get to know you so we can find your match..." << endl;
      cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
      a.create_leader();
      break;

    case 'v':
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
    cout << "   PRINT CURRENT PROFILES   " << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
      a.print_profiles();
      break;

    case 'q' :
      cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
      cout << "   QUIT MENU" << endl;
      cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
      quit = true;
      break;

    default:
      cout << "invalid" << endl;
      break;
  }


} while(!quit);





//~s eventually move contents of this do while into "create profile" type function
// where user will create new profile instance and add all their info

bool game = false;
do
{

  Leader l;


  l.choose_name();
  l.choose_age();
  cout << "TEST print name, age: " << l.get_name() << ", " << l.get_age() << endl;

  l.choose_type();
  cout << "TEST print type: " << l.get_type() << endl << endl;

  l.choose_seeking();
  cout << "TEST print seeking: " << l.get_seeking() << endl;

  l.choose_relocate();
  cout << "TEST print willing to relocate: " << l.get_relocate() << endl;




  l.choose_traits();
  cout << "TEST print traits: " << endl;
  l.print_traits();


  l.choose_description();
  cout << "TEST print description: " << l.get_description() << endl;




//////// test profile view

cout << endl;
cout << endl;
cout << "~~~~~~~~~~~~~~~~~~~~~" << endl;
cout << "  VIEW YOUR PROFILE" << endl;
cout << "~~~~~~~~~~~~~~~~~~~~~" << endl;
cout << "NAME, AGE: " << l.get_name() << ", " << l.get_age() << endl;
cout << "TYPE: " << l.get_type() << endl;
cout << "SEEKING: " << l.get_seeking() << endl;
cout << "WILLING 2 RELOCATE: ";
  if (l.get_relocate() == 1)
  {
    cout << "true" << endl;
  }
  else
  {
    cout << "false" << endl;
  }
cout << "TRAITS: ";
l.print_traits();
cout << "DESCRIPTION: " << l.get_description() << endl;

cout << endl;
cout << endl;



game = true;

} while (!game);
//~e















// image?

[NAME], [AGE] years old

I am a cult [TYPE] looking for [TYPE]s to [PURPOSE].

[DESCRIPTION]





*/
