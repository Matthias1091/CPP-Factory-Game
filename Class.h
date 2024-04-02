#ifndef CLASS_H
#define CLASS_H

class Button {
public:
    std::string ID;
    std::string onclick_name;
    sf::Vector2f position;
    int positionX;
    int positionY;
    int sizeX;
    int sizeY;
    std::string text;
    int fontsize;
    bool visibility;
    sf::Color backgroundColor;

    Button(const std::string& ID, const std::string& onclick_name, int positionX, int positionY, int sizeX, int sizeY, const std::string& text, int fontsize, bool visibility, const sf::Color& bgColor)
        : ID(ID), onclick_name(onclick_name), positionX(positionX), positionY(positionY), position(sf::Vector2f(positionX, positionY)),
        sizeX(sizeX), sizeY(sizeY), text(text), fontsize(fontsize), visibility(visibility), backgroundColor(bgColor) {
    }

    void draw(sf::RenderWindow& window, const sf::Font& font) const {
        if (!visibility) return;

        sf::RectangleShape rectangle(sf::Vector2f(sizeX, sizeY));
        rectangle.setPosition(positionX, positionY);
        rectangle.setFillColor(backgroundColor);
        window.draw(rectangle);



        sf::Text sfText(text, font, fontsize);
        sfText.setPosition(positionX + 5, positionY + 5);
        sfText.setFillColor(sf::Color::Black);
        window.draw(sfText);
    }

    void setPosition(int x, int y) {
        position = sf::Vector2f(x, y);
        positionX = position.x;
        positionY = position.y;
    }

    sf::Vector2f getPosition() const {
        return position;
    }

    bool isMouseOver(sf::RenderWindow& window) {
        sf::Vector2i mousePos = sf::Mouse::getPosition(window);
        sf::Vector2f buttonPos = sf::Vector2f(positionX, positionY);

        return mousePos.x >= buttonPos.x && mousePos.x <= (buttonPos.x + sizeX) &&
            mousePos.y >= buttonPos.y && mousePos.y <= (buttonPos.y + sizeY);
    }

    void setColor(const sf::Color& color) {
        backgroundColor = color;
    }

    void setVisibility(bool newVisibility) {
        visibility = newVisibility;
    }
};




#endif // CLASS_H