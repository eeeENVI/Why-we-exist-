#include "../../include/OP/Vertex.h"

namespace op
{
    // Constructors
    Vertex::Vertex()
    {
        // default Vertex
        char_value = ' ';
        fgColor = Color(255,255,255);
        bgColor = Color(0,0,0);
        position = Vector2f(0.0f,0.0f);
    }

    Vertex::Vertex(char ch, Color fg, Color bg, Vector2f v)
    {
        char_value = ch;
        fgColor = fg;
        bgColor = bg;
        position = v;
    }

    Vertex::Vertex(char ch)
    {
        char_value = ch;
        fgColor = Color(255,255,255);
        bgColor = Color(0,0,0);
        position = Vector2f(0.0f,0.0f);
    }

    Vertex::Vertex::Vertex(Color fg, Color bg)
    {
        char_value = ' ';
        fgColor = fg;
        bgColor = bg;
        position = Vector2f(0.0f,0.0f);
    }

    Vertex::Vertex(Vector2f v)
    {
        char_value = ' ';
        fgColor = Color(255,255,255);
        bgColor = Color(0,0,0);
        position = v;
    }

    Vertex::Vertex(const Vertex& p)
    {
        char_value = p.char_value;
        fgColor = p.fgColor;
        bgColor = p.bgColor;
        position = p.position;
    }

    // Setters
    void Vertex::setPosition(const Vector2f v)
    {
        this->position = v;
    }

    void Vertex::setPosition(const float x,const float y)
    {
        this->position = Vector2f(x,y);
    }

    void Vertex::movePosition(const Vector2f v)
    {
        this->position += v;
    }

    void Vertex::movePosition(const float x,const float y)
    {
        this->position += Vector2f(x,y);;
    }

    void Vertex::setChar(const char ch)
    {
        this->char_value = ch;
    }

    void Vertex::setFg(const Color c)
    {
        this->fgColor = c;
    }

    void Vertex::setBg(const Color c)
    {
        this->bgColor = c;
    }

    // Getters
    char Vertex::getChar() const
    {
        return char_value;
    }

    Color Vertex::getFg() const
    {
        return fgColor;
    }

    Color Vertex::getBg() const
    {
        return bgColor;
    }

    Vector2f Vertex::getPosition() const
    {
        return position; 
    }
    
    // Operators

    // Check for Vertices characteristics (ignore position)
    bool Vertex::operator==(const Vertex& obj) const
    {
        return (fgColor == obj.fgColor && bgColor == obj.bgColor && char_value == obj.char_value);
    }

    bool Vertex::operator!=(const Vertex& obj) const
    {
        return (fgColor != obj.fgColor || bgColor != obj.bgColor || char_value != obj.char_value);
    }

} // namespace op

