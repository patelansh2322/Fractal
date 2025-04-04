// Copyright 2025 <Ansh Patel>
// Copyright 2025 <Mohammed Ayan>

#include <cmath>
#include <iostream>
#include <SFML/Graphics.hpp>
#include "triangle.hpp"

int main(int argc, char* argv[]) {
    // Command line inputs
    float side = (argc > 1) ? std::stof(argv[1]) : 200;
    int n = (argc > 2) ? std::stoi(argv[2]) : 3;

    // Resize the window based on side length
    int width = sqrt(3)*2*side;
    int height = sqrt(3)*2*side;

    sf::RenderWindow window(sf::VideoMode(width, height), "Fractal");
    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear(sf::Color::White);
        // Call the fractal method
        fractal(window, n, side, sf::Vector2f(width/2, height/2));
        window.display();
    }
    return 0;
}
