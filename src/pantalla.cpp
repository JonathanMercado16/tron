#include <iostream>
#include <ftxui/screen/screen.hpp>
#include <thread>
using namespace std;
using namespace ftxui;

int main(int argc, char const *argv[])
{
    Screen pantalla = Screen::Create
    (
        Dimension::Full(),
        Dimension::Full()
    );

    int x = 0;
    while (true)
    {
        x++;
        pantalla.Clear();
        this_thread::sleep_for(0.1s);

        pantalla.PixelAt(x,5).character = "    ___                                .'-----\\ _";
        pantalla.PixelAt(x,6).character = "    \  \                              //      #``.) __";
        pantalla.PixelAt(x,5).character = "     \  \_________                     __--~~--_-\\/ |)";
        pantalla.PixelAt(x,6).character = "      \           ~~-              _-~~         -_``.|)";
        pantalla.PixelAt(x,5).character = "|\_.--~~~~~~~~~~-._  \________   _~   Harley-   |   \\";
        pantalla.PixelAt(x,6).character = "|/   (} _..._/*/   \          ~\~      Davidson |    ``.--~~~~~--__";
        pantalla.PixelAt(x,5).character = "/___-~~~    /=/~-_  ~~~--------~~--------------/    .-~\\ _________~";
        pantalla.PixelAt(x,6).character = "  *     ---/=/    \  \       /{}===_____===_  ||   /  __``.    / \  ";
        pantalla.PixelAt(x,6).character = "      / __/=/_\____\__\     /[]###/===  \###\ ||  /__/    \\ /";
        pantalla.PixelAt(x,6).character = " |   | [ |*|___________~~~~~==/ ##\_____/## \ \|  |  |------*------|";
        pantalla.PixelAt(x,6).character = "      \ ~~___________________/ /_##+++++##*  | |           / \";
        pantalla.PixelAt(x,6).character = "  *     ---\_)________________/___________\_/ /    *   \ /     \ /  ";
        pantalla.PixelAt(x,6).character = "    *           *     \_)____________________/       *    ~~~~~    *";
        pantalla.PixelAt(x,6).character = "     -------                                           -------";

        pantalla.Print();
        cout<<pantalla.ResetPosition();
    }
    
    return 0;
}