/*
 * 
 * newton method, also called newton-raphson method to iterate taylor expansion to find equation's solution
 * 
 */



#include <iostream>
#include "newton_raphson_class.hpp"
#include <memory>

int main(int argc, char** argv)
{

    std::shared_ptr<Newton_raphson> sptr_newton( new  Newton_raphson(0.00001, 1000)  );




    return 0;
}