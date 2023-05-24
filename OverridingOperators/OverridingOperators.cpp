#include <iostream>

#include "FVector.h"

int main(int argc, char* argv[])
{
    FVector Vector1{0,4,10};
    std::cout << Vector1;
    
    FVector MultiplyVector = Vector1 * 3;
    std::cout << MultiplyVector;
    
    FVector SubtractVector = MultiplyVector - Vector1;
    std::cout << SubtractVector;
    
    FVector EnteredVector{};
    std::cin >> EnteredVector;
    std::cout << EnteredVector;
    
    return 0;
}
