#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
  string chirp;
  string burp;

  do
  {

    cout<<"Please enter your Chirp:"<<endl;
    getline(cin,chirp);
    cout<<"PLease enter your Burp"<<endl;
    getline(cin, burp);

    if( chirp.length() > 100 )
    {
      cout<<"Sorry, Chirps must be under 100 characters.\n";
      cout<<"Yours was "<<chirp.length()-100<<" too long!\n";
      cout<<burp<<endl;
    }
  }while( chirp.length() > 100 );

  return 0;
}
