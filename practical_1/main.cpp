#include <SFML/Graphics.hpp>
#include <iostream>

int main() {
    // Create a 200x200 window titled "SFML works!"
    sf::RenderWindow window(sf::VideoMode({200, 200}), "SFML works!");

    // Create a green circle with a radius of 100
    sf::CircleShape shape(100.f);
    shape.setFillColor(sf::Color::Green);

    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            // Close the window when the close button is pressed
            if (event.type == sf::Event::Closed) {
                window.close();
            }
        }

        // Clear the window, draw the shape, and display it
        window.clear();
        window.draw(shape);
        window.display();

        // Take a screenshot of the window and save it as "screenshot.png"
        sf::Texture texture;
        texture.create(window.getSize().x, window.getSize().y);
        texture.update(window);

        if (texture.copyToImage().saveToFile("screenshot.png")) {
            std::cout << "Screenshot saved to screenshot.png" << std::endl;
            // Optional: Exit the loop after saving the screenshot
            window.close(); // Close the window after taking the screenshot
        }
    }

    return 0;
}
