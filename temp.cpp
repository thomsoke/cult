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
