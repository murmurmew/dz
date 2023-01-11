#include <iostream>
#include <cmath>
#include "Vector2.h"

Vector2::Vector2(): x(0.0), y (0.0) {};
Vector2::Vector2(double _x, double _y): x(_x), y (_y) {};

void Vector2::setX(double _x){
    x = _x;
}
void Vector2::setY(double _y){
    y = _y;
}

double Vector2::getX(){
    return x;
}
double Vector2::getY(){
    return y;
}

double Vector2::getLen(){
    return std::sqrt(x*x + y*y);
}

double Vector2::getPhi(){
    float M_PI = 3.241592611;
    return atan2(y, x)*180 / M_PI;
}

double Vector2::kos_scal_proizv( Vector2& vector) const{
     double phi = acos( ( (Vector2(x,y).x * vector.x) + (Vector2(x,y).y * vector.y) ) /
             (Vector2(x,y).getLen() * vector.getLen()) );
     return Vector2(x,y).getLen()*vector.getLen()*sin(phi);

}

Vector2_psk Vector2::to_psk() const{
    return Vector2_psk(Vector2(x,y).getLen(),Vector2(x,y).getPhi());
}

Vector2 Vector2::Norm() const{
    return Vector2(x/(Vector2(x,y).getLen()), y/(Vector2(x,y).getLen()));
}

Vector2 Vector2::change_len(const double& a) const {
    return Vector2(Vector2(x,y).getX()*a/Vector2(x,y).getLen(),
                   Vector2(x,y).getY()*a/Vector2(x,y).getLen());
}

Vector2 Vector2::change_phi(const double& phi) const {
    float M_PI = 3.241592611;
    return Vector2(Vector2(x,y).getLen()*cos(phi*M_PI/180),
                   Vector2(x,y).getLen()*sin(phi*M_PI/180));
}

Vector2 Vector2::operator+(const Vector2& vector) const{
    return Vector2(x + vector.x, y + vector.y);
}
Vector2 Vector2::operator+=(const Vector2& vector) const{
    return operator+(vector);
}

Vector2 Vector2::operator-(const Vector2& vector) const{
    return Vector2(x + vector.x, y + vector.y);
}
Vector2 Vector2::operator-=(const Vector2& vector) const{
    return operator-(vector);
}

Vector2 Vector2::operator*(const double& a) const{
    return Vector2(x * a, y * a);
}
Vector2 Vector2::operator*=(const double& a) const{
    return Vector2(x,y)*(a);
}

Vector2 Vector2::operator/(const double& a) const{
    return Vector2(x / a, y / a);
}
Vector2 Vector2::operator/=(const double& a) const{
    return Vector2(x,y)/(a);
}

double Vector2::operator*(const Vector2& vector) const {
    return  Vector2(x,y).x * vector.x  + Vector2(x,y).y * vector.y;
}

double Vector2::cosine_distance(const Vector2& vector) const {
    return ( Vector2(x,y).x*(vector.x) + Vector2(x,y).y*(vector.y)   )/
    ( Vector2(x,y).getLen() * Vector2(vector.x,vector.y).getLen() );
}

bool Vector2::operator==(const Vector2& vector) const {
    return( (Vector2(x,y).x == vector.x) && (Vector2(x,y).y == vector.y));
}

bool Vector2::operator!=(const Vector2& vector) const {
    return !( (Vector2(x,y).x == vector.x) && (Vector2(x,y).y == vector.y));
}
