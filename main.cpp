#include <iostream>
#include <string>
using namespace std;

int main()
{
    int massive[10];
    
    for (int i = 0; i < 10; i++){
     cin >> massive[i];
     }

    int max = massive[0]; 
    for (int i = 0; i < 10; i++){
        if(max <= massive[i]) max = massive [i];
    }
 
    cout << "Max element: " << max;
 
    cin.get();
    return 0;
}
