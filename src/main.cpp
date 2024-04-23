#include <iostream> //flujos entradas y salida
#include <ftxui/screen/screen.hpp>
#include <ftxui/dom/elements.hpp>
#include <thread> //hilos de procesos
#include <fstream> //flujos de archivos
#include <string> //control de cadena 
#include <Dibujo.hpp>

using namespace std;
using namespace ftxui;

int main(int argc, char const *argv[])
{
    Dibujo moto("./assets/images/moto.txt");
    Dibujo bloque("./assets/images/bloque.txt");
//----------------------------------------------------------------------------------------------------
    int fotograma = 0;
    while (true)
    {
        this_thread::sleep_for(0.1s);
        fotograma++;
        Element personaje = spinner(21,fotograma) | bold | color(Color::White) | bgcolor(Color::Red);
        Element dibujo = hbox ({personaje,moto.GetElement(),bloque.GetElement()}); 

        Screen pantalla = Screen::Create(Dimension::Full());
        Render (pantalla,dibujo);
        pantalla.Print();
        cout<<pantalla.ResetPosition();
    }

return EXIT_SUCCESS;
}