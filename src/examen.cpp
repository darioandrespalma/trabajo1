#include <iostream>
#include <unistd.h> // for sleep()
#include <stdio.h>
#include <windows.h>
#include <conio.h>

/*
int main()
{
    std::cout << '-' << std::flush;
    for (;;) 
    {
        sleep(1);
        std::cout << "\b\\" << std::flush;
        sleep(1);
        std::cout << "\b|" << std::flush;
        sleep(1);
        std::cout << "\b/" << std::flush;
        sleep(1);
        std::cout << "\b-" << std::flush;
    }
    system("pause");
}*/

/*
int main()
{
    for (;;) {

        std::cout << "\b\b\b\b\b\b\b\b\b\bLoading   " << std::flush;
        Sleep(100);
        std::cout << "\b\b\b\b\b\b\b\b\b\bLOading   " << std::flush;
        Sleep(100);
        std::cout << "\b\b\b\b\b\b\b\b\b\bLoAding   " << std::flush;
        Sleep(100);
        std::cout << "\b\b\b\b\b\b\b\b\b\bLoaDing   " << std::flush;
        Sleep(100);
        std::cout << "\b\b\b\b\b\b\b\b\b\bLoadIng   " << std::flush;
        Sleep(100);
        std::cout << "\b\b\b\b\b\b\b\b\b\bLoadiNg   " << std::flush;
        Sleep(100);
        std::cout << "\b\b\b\b\b\b\b\b\b\bLoadinG   " << std::flush;
        Sleep(100);
        std::cout << "\b\b\b\b\b\b\b\b\b\bLoading.  " << std::flush;
        Sleep(100);
        std::cout << "\b\b\b\b\b\b\b\b\b\bLoading.." << std::flush;
        Sleep(100);
        std::cout << "\b\b\b\b\b\b\b\b\b\bLoading..." << std::flush;
        Sleep(100);
    }
    system("pause");
}*/
/*
using namespace std;

int progressbar()
{
int segundos=5;
for(int i=0; i<=21; i++)
cout << "\n";
cout << "\t\t\t\t CARGANDO...\n";
for(int i=0; i<=79; i++)
cout << "_";
for(int i=0; i<=79; i++)
{
cout<<char(219);
Sleep(segundos*1000/80);
}
cout<<"\nCompletado!";
return 0;
}

int main(){
progressbar();
cout << "Bienvenido!";

return 0;
}*/

