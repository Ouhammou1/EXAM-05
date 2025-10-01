#ifndef VECT_HPP
#define VECT_HPP

#include <iostream>


class vect
{
private:
    int x ;
    int y ;
public:
    vect();
    vect(int x , int y );
    vect(const vect &other);
    vect& operator=(const vect &other);
    ~vect();

    int getX() const;
    int getY() const ;


    vect operator+(const vect &v) const ;
    vect operator-(const vect &v) const ;
    vect operator*(int scaler) const ;


    vect operator++()  ;
    vect operator--()  ;
    vect operator++(int)  ;
    vect operator--(int )  ;




};



std::ostream& operator<<(std::ostream &os , const vect &v);


#endif