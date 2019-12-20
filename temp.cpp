bool Interface::run_as_admin()
{
  quit = false;
  char temp;
  int pass_attempt;
//  string get_input;

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
