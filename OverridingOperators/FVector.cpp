#include "FVector.h"

FVector::FVector(float X, float Y, float Z)
{
    this->X = X;
    this->Y = Y;
    this->Z = Z;
}

FVector FVector::operator*(int ScalarNum) const
{
    return FVector{X * ScalarNum, Y * ScalarNum, Z * ScalarNum};
}

FVector FVector::operator*(float ScalarNum) const
{
    return FVector{X * ScalarNum, Y * ScalarNum, Z * ScalarNum};
}

FVector FVector::operator-(FVector OtherVector) const
{
    return FVector{X - OtherVector.X, Y - OtherVector.Y, Z - OtherVector.Z};
}
