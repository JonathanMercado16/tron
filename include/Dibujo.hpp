#include <ftxui/dom/elements.hpp>
#include <fstream> //flujos de archivos
#include <string> //control de cadena 

using namespace std;
using namespace ftxui;

class Dibujo
{
private:
    fstream archivo;
    Element contenido;
public:
    Dibujo(string path)
    {
        archivo.open(path);

        Elements elementos;
        string linea;
        while (getline(archivo, linea))
        {
            elementos.emplace_back(text(linea));
        }
        contenido = vbox(elementos) | bold | color(Color::White) | bgcolor(Color::Red);
        archivo.close();
    }
    Element GetElement ()
    {
        return this->contenido;
    }
    ~Dibujo()
    {

    }
};