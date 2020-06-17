#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>
#include <cstdlib>

using namespace std;
using namespace sf;

int main()
{
    // Create the main window
    RenderWindow window(VideoMode(800, 600), "Nuestro primer juego");
    // Load a sprite to display

     Texture MenuPrincipal;
     Texture Escenario;
     Texture Fallen_angel1;

    if (!MenuPrincipal.loadFromFile("img/Menu_Principal.png"))
        return EXIT_FAILURE;
     Sprite Menu_principal(MenuPrincipal);

    if (!Fallen_angel1.loadFromFile("img/0_Fallen_Angels_Running_000.png"))
        return EXIT_FAILURE;
       Sprite sprite2(Fallen_angel1);
    sprite2.setOrigin(450,450);
    sprite2.setPosition(400,300);
    sprite2.setScale(Vector2f(0.2f, 0.2f));

  if (!Escenario.loadFromFile("img/nivel1.png"))
       return EXIT_FAILURE;


    // Create a graphical text to display
 /*   Font font;
    if (!font.loadFromFile("arial.ttf"))
        return EXIT_FAILURE;
    Text text("LALALALALA PONY", font, 50);

    // Load a music to play
    Music music;
if (!music.openFromFile("nice_music.ogg"))
        return EXIT_FAILURE;
    // Play the music
    music.play();

*/
    // Start the game loop
    while (window.isOpen())
    {
        // Process events
        Event event;
        while (window.pollEvent(event))
        {
            // Close window: exit
            if (event.type == Event::Closed){
                window.close();
                }



        }
        // Clear screen
        window.clear();
        // Draw the sprite
     //   window.draw(sprite1);
        window.draw(Menu_principal);
        if (Keyboard::isKeyPressed(Keyboard::Space)){
            window.clear();
                    window.draw(sprite2);

                }



       // Draw the string
//        window.draw(text);
        // Update the window
        window.display();



    }
    return EXIT_SUCCESS;
}

/*IDEA DEL JUEGO:
        entra al menu principal
        luego apareceran los 3 personajes principales que tendra q elegir a uno
        luego se pondra el escenario del primer nivel con el personaje elegido y el primer adversario
        el mazo mezclara las cartas y tendra 4 cartas alazar
        AQUI: se ve la vida de los personajes, el mana, el escudo, las cartas , los personajes se mueven un poquito los hombros
        y el boton de terminar turno.
        dependiendo de la carta que toque es lo q pasara
        si toca atacar :
            el personaje usara la funcion atacar
            que se movera hacia el rival: Si el el golpe es certero(osea que si le pega, depende de la evasion):
                el enemigo tendra la animacion de dolor, y perdera escudo o vida. dependiendo que tiene.
*/
