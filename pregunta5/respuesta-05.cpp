
#include <iostream>
using namespace std;

int main()
{	
    int contador = 0;
    int n;
    cin >> n;
    while(n > 1)
    {	
	
	contador++;
        if( n % 2 == 0)
        {
            n = n / 2;
        }
        else
        {
            n = 3 * n + 1;
        }
	cout << n << endl;
    }
        cout << "El numero de pasos es :" << contador << endl;
}
