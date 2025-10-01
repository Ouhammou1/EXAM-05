#include "vect.hpp"


vect::vect() : x(0)  , y(0)
{
}

vect::~vect()
{
}
vect::vect(int x , int y ): x(x) , y(y)
{

}
vect::vect(const vect &other)
{
    *this = other;
}
vect& vect::operator=(const vect &other)
{
    if(this != &other)
    {
        x = other.x;
        y = other.y;
    }
    return *this;
}   

std::ostream& operator<<(std::ostream &s , const vect &v)
{
    s << "{" << v.getX() << ", " << v.getY() << "}" << std::endl;
    return s;
}

int vect::getX() const
{
    return x;
}
int vect::getY() const 
{
    return y;
}


vect vect::operator+(const vect &v) const 
{
    return vect(this->x + v.getX() , this->y + v.getY());
}
vect vect::operator-(const vect &v) const 
{
    return vect(this->x - v.getX() , this->y - v.getY());

}
vect vect::operator*(int scaler) const 
{
    return vect(this->x * scaler , this->y  * scaler);

}


vect vect::operator++()  
{
    ++this->x;
    ++this->y;
    return *this;
}
vect vect::operator++(int)  
{
    vect tmp = *this;
    ++this->x;
    ++this->y;
    return tmp;
}
vect vect::operator--()  
{
    --this->x;
    --this->y;
    return *this;
}
vect vect::operator--(int )  
{
    vect tmp = *this;
    --this->x;
    --this->y;
    return tmp;
}