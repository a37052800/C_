#include <iostream>
using namespace std;
int main()
{
    cout<<endl;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 7 - i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < i * 2 - 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = 3; i < 8; i++)
    {
        for (int j = 0; j < 7 - i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < i * 2 - 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = 0; i < 4; i++)
    {
        cout << "     ***" << endl;
    }
}

/*////////////
      *
     ***
    *****
   *******
    *****
   *******
  *********
 ***********
*************
     ***
     ***
     ***
     ***
*/////////////