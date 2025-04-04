// Copyright 2025 <Ansh Patel>
// Copyright 2025 <Mohammed Ayan>

#include "triangle.hpp"
#include <cmath>

void fractal(sf::RenderTarget& window, int n, float side, sf::Vector2f center) {
    // Radius of a circumcircle
    float radius = side / sqrt(3);
    // Height of an equilateral triangle
    float height = (sqrt(3)/2)*side;
    // Difference between the height and radius
    float diff = height-radius;
    // Base case
    if (n < 0) {
        return;
    }

    // Get different colors for each depth
    sf::Color outlineColor = sf::Color(150 + n * 20, 100 + n * 20, 255 - n * 50);


    // Draw the triangle
    sf::CircleShape triangle(radius, 3);
    triangle.setOrigin(radius, radius);
    triangle.setPosition(center);
    // Invert the triangle
    triangle.setRotation(180);
    triangle.setFillColor(outlineColor);
    window.draw(triangle);

    // Get the corner positions to place the child triangles
    float leftX = center.x-side/2;
    float leftY = center.y-diff-(side/2)/sqrt(3);
    float rightX = center.x+side/2+side/4;
    float rightY = center.y-diff+height/2-(side/2)/sqrt(3);
    float bottomX = center.x-side/4;
    float bottomY = center.y+radius+height/2-(side/2)/sqrt(3);

    sf::Vector2f leftCorner = {leftX, leftY};
    sf::Vector2f rightCorner = {rightX, rightY};
    sf::Vector2f bottomCorner = {bottomX, bottomY};

    // Recursively draw the child triangles
    fractal(window, n-1, side/2, leftCorner);
    fractal(window, n-1, side/2, rightCorner);
    fractal(window, n-1, side/2, bottomCorner);
}
