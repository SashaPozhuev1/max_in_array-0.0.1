#include <iostream>
#include <sstream>
using namespace std;

int main()
{
    string stroka; 
    getline(cin, stroka); 
    int mass[ 10 ];
    
    istringstream stream(stroka);
    bool failure = false;
    for( int i = 0; i < 10; ++i ) {
        if( !(stream >> mass[i])) {
        failure = true;
        break;
        }
    }
        
        
    if( !failure ) {
     int max = mass[0];
     for( int i = 0; i < 10; ++i ) {
      if(max <= mass[i]) max = mass [i];
     }
     cout << "Max element: " << max;
    }
    else 
    {
     cout << "An error has occured while reading numbers from line" << endl;
    }
    
    cin.get();
    return 0;
}
