#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
    
    int key, random;

    cout << "Bir tahmin gir (0 ile 10 arasi): ";

    cin >> key;

    if (key <= 10 && key >= 1) {
        srand(time(NULL));

        random = rand() % 10 + 1;

        if (random == key) {
            cout << "Tahmininiz dogru";
        } else cout << "Tahmininiz yanlis" << endl << random;
    } else cout << "1 ile 10 arasi sayi gir!";
}
