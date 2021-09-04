#include <iostream>

using namespace std;

int main()
{
    int i;
    for (i = 0; i < 100; i++) {
        if (i % 2 == 0 && i % 3 == 0){
          cout<< "Fyz-Baz" << i << endl;
        } else if(i % 2 == 0)  {
          cout<< "Fyz" << i << endl;
        } else if (i % 3 == 0) {
          cout<< "Baz" << i << endl;
        }
    }
}
