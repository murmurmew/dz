 #include <iostream>
#include "Vector2.h"
#include "Vector2_psk.h"

int main (){

    Vector2 a(1.0, 2.0);
    std::cout << "vector a: " << std::endl;
    std::cout << "x = " << a.getX() << ' ' << "y = " << a.getY() << std::endl;
    std::cout << "len = " << a.getLen() << ' ' << "phi = " << a.getPhi() << std::endl;
    std::cout<<"-----------" << std::endl;

    Vector2 b(2.0, 3.0);
    std::cout << "vector b: " << std::endl;
    std::cout << "x = " << b.getX() << ' ' << "y = " << b.getY() << std::endl;
    std::cout << "len = " << b.getLen() << ' ' << "phi = " << b.getPhi() << std::endl;
    std::cout<<"-----------" << std::endl;


    std::cout << "vector result of 'a + b' : " << std::endl;
    std::cout << "x = " << (a+b).getX() << ' ' << "y = " << (a+b).getY() << std::endl;
    std::cout << "len = " << (a+b).getLen() << ' ' << "phi = " << (a+b).getPhi() << std::endl;
    std::cout<<"-----------" << std::endl;

    std::cout <<  "result of 'a * b' = " << a*b << std::endl;
    std::cout<<"-----------" << std::endl;


    std::cout << "vector a_in_psk: " << std::endl;
    std::cout << "r = " << a.to_psk().r << ' ' << "phi = " << a.to_psk().phi << std::endl;
    std::cout<<"-----------" << std::endl;


    std::cout << "result of 'a * 5' = " << std::endl;
    std::cout << "x = " << (a*5).x << ' ' << "y = " << (a*5).y << std::endl;
    std::cout << "len = " << (a*5).getLen() << ' ' << "phi = " << (a*5).getPhi() << std::endl;
    std::cout<<"-----------" << std::endl;


    std::cout << "vector  result of 'a / 5'  : " << std::endl;
    std::cout << "x = " << (a/5).getX() << ' ' << "y = " << (a/5).getY() << std::endl;
    std::cout << "len = " << (a/5).getLen() << ' ' << "phi = " << (a/5).getPhi() << std::endl;
    std::cout<<"-----------" << std::endl;

    std::cout << "kos_scal_proizv a and b = " << a.kos_scal_proizv(b) << std::endl;
    std::cout<<"-----------" << std::endl;

    std::cout << "ed. vector a : " << "x " << a.Norm().x << ' ' << "y "<< a.Norm().y << std::endl;
    std::cout<<"-----------" << std::endl;

    std::cout << "a eq b ? - " << (a==b) << std::endl;
    std::cout << "a not eq b ? - " << (a!=b) << std::endl;
    std::cout << "a eq a ? - " << (a==a) << std::endl;
    std::cout<<"-----------" << std::endl;

    std::cout << "cosine_distance between a and b = " << a.cosine_distance(b) << std::endl;
    std::cout<<"-----------" << std::endl;

    std::cout << "result of 'change len a to 10' = " << std::endl;
    std::cout << "x = " << (a.change_len(10)).x << ' ' << "y = " << (a.change_len(10)).y << std::endl;
    std::cout << "len = " << (a.change_len(10)).getLen() << ' ' << "phi = " << (a.change_len(10)).getPhi() << std::endl;
    std::cout<<"-----------" << std::endl;

    std::cout << "result of 'change phi a to 60' = " << std::endl;
    std::cout << "x = " << (a.change_phi(60)).x << ' ' << "y = " << (a.change_phi(60)).y << std::endl;
    std::cout << "len = " << (a.change_phi(60)).getLen() << ' ' << "phi = " << (a.change_phi(60)).getPhi() << std::endl;
    std::cout<<"-----------" << std::endl;

    return 0;
}
