#pragma once
#include <iostream>

struct  FVector
{
    FVector(float X = 0.f, float Y = 0.f, float Z = 0.f);

    float X;
    float Y;
    float Z;

    FVector operator* (int ScalarNum) const;
    FVector operator* (float ScalarNum) const;
    FVector operator- (FVector OtherVector) const;
    
    friend std::ostream& operator<< (std::ostream& out, const FVector& vector)
    {
        out << "FVector{" << "X = " << vector.X << ", Y = " << vector.Y << ", Z = " << vector.Z << "}" << "\n";
        return out;
    }
    
    friend std::istream& operator>> (std::istream& in, FVector& vector)
    {
        in >> vector.X >> vector.Y >> vector.Z;
        return in;
    }
};

