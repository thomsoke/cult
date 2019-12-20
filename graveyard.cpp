
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
bool Interface::run_as_admin()
{
  quit = false;
  char temp;
//  string get_input;

  do
  {

// stuff

// choose have account or make new
//if have account - get password
// when password correct - run admin menu
// if no account - make new
// return new admin to top of funct menu

cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
cout << " *** ADMIN USE ONLY ***" << endl;
cout << " enter c if you have a current admin account" << endl;
cout << " enter n if you need to create a new admin account" << endl;
cout << " enter q to quit" << endl;
cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;


/*
  do
  {
    cout << "make selection: " << endl;
    getline(cin, get_input);
  } while(get_input != "1" && get_input != "2");
  temp = atoi(get_input.c_str());

*/


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
          // some shit
      }
    break;
    }
  }

  case 'n':
  {
    create_new_admin();
    break;
  }

  case 'q':
  {
    cout << "quitting menu" << endl;
    quit = true;
  }

  default:
  {
    cout << "invalid" << endl;
    break;
  }

}




  quit = true;

} while (!quit);
}



























/********************************************************************
********************************************************************/
{
  cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
  cout << " welcome, NEW ADMIN" << endl;
  cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
    int temp_pass;
    cout << " enter a 5 digit password for your account:" << endl;

    do
    {
      cin >> temp_pass;
    } while (temp_pass >= 99999 && temp_pass <= 00000);

    Admin a(temp_pass);


    cout << a.get_password();
}




/********************************************************************
********************************************************************/
cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
cout << " welcome, NEW ADMIN" << endl;
cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
  int temp_pass;
  cout << " enter a 5 digit password for your account:" << endl;

  do
  {
    cin >> temp_pass;
  } while (temp_pass >= 99999 && temp_pass <= 00000);

  Admin a(temp_pass);


  cout << a.get_password();



//














/********************************************************************
** old main tester stuff
********************************************************************/
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
