#include "sendings.hpp"


//----------------------------------------------------------------------------------
//----------------------------------------------------------------------------------
Sendings::Sendings()
{
    quantity = 1;
}


//----------------------------------------------------------------------------------
Sendings::~Sendings()
{

}


//----------------------------------------------------------------------------------
void Sendings::setQuantity(int Q)
{
    quantity = Q;
}


//----------------------------------------------------------------------------------
int Sendings::getQuantity()
{
    return quantity;
}


//----------------------------------------------------------------------------------
string Sendings::print()
{
    //cout << "Calss: SENDINGS" << endl;
    return "Class: SENDINGS";
}


//----------------------------------------------------------------------------------
//----------------------------------------------------------------------------------
Package::Package()
{
    quantity = 1;
    weight = 0.5;
}


//----------------------------------------------------------------------------------
Package::Package(int Q, double W, string C)
{
    quantity = Q;
    weight = W;
    city = C;
}


//----------------------------------------------------------------------------------
Package::~Package()
{

}


//----------------------------------------------------------------------------------
void Package::setWeight(int W)
{
    weight = W;
}


//----------------------------------------------------------------------------------
void Package::setCity(string C)
{
    city = C;
}


//----------------------------------------------------------------------------------
double Package::getTarriff()
{
    return tarriff;
}


//----------------------------------------------------------------------------------
double Package::getWeight()
{
    return weight;
}


//----------------------------------------------------------------------------------
string Package::getCity()
{
    return city;
}


//----------------------------------------------------------------------------------
double Package::calculatePrice()
{
    double result;
    bool isCityInList = false;
    for (int i = 0; i < 6; i++)
    {
        if (getCity() == citiesEng[i] || getCity() == citiesUkr[i])
        {
            isCityInList = true;
        }
    }

    if (isCityInList)
    {
        result = quantity * weight * tarriff;
    }
    else
    {
        result = quantity * weight * tarriff * otherCitiesTax;
    }

    return result;
}


//----------------------------------------------------------------------------------
string Package::print()
{
    //cout << "Calss: PACKAGE" << endl;
    return "Class: PACKAGE";
}


//----------------------------------------------------------------------------------
//----------------------------------------------------------------------------------
Value::Value()
{
    quantity = 1;
    weight = 0.5;
    value = 0;
}


//----------------------------------------------------------------------------------
Value::Value(int Q, double W, double V, string C)
{
    quantity = Q;
    weight = W;
    value = V;
    city = C;
}


//----------------------------------------------------------------------------------
Value::~Value()
{

}


////----------------------------------------------------------------------------------
//void Value::setWeight(int W)
//{
//    weight = W;
//}


//----------------------------------------------------------------------------------
void Value::setValue(int V)
{
    value = V;
}


////----------------------------------------------------------------------------------
//void Value::setCity(string C)
//{
//    city = C;
//}


////----------------------------------------------------------------------------------
//double Value::getTarriff()
//{
//    return tarriff;
//}


////----------------------------------------------------------------------------------
//double Value::getWeight()
//{
//    return weight;
//}


//----------------------------------------------------------------------------------
double Value::getValue()
{
    return value;
}


////----------------------------------------------------------------------------------
//string Value::getCity()
//{
//    return city;
//}


//----------------------------------------------------------------------------------
double Value::calculatePrice()
{
    double result;
    bool isCityInList = false;
    for (int i = 0; i < 6; i++)
    {
        if (getCity() == citiesEng[i] || getCity() == citiesUkr[i])
        {
            isCityInList = true;
        }
    }

    if (isCityInList)
    {
        result = quantity * weight * tarriff + (value / 50);
    }
    else
    {
        result = quantity * weight * tarriff * otherCitiesTax + (value / 50);
    }

    return result;
}


//----------------------------------------------------------------------------------
string Value::print()
{
    //cout << "Calss: VALUE" << endl;
    return "Class: VALUE";
}


//----------------------------------------------------------------------------------
//----------------------------------------------------------------------------------
Transfer::Transfer()
{
    quantity = 1;
}


//----------------------------------------------------------------------------------
Transfer::Transfer(int Q)
{
    quantity = Q;
}


//----------------------------------------------------------------------------------
Transfer::~Transfer()
{

}


//----------------------------------------------------------------------------------
double Transfer::getTarriff()
{
     return tarriff;
}


//----------------------------------------------------------------------------------
double Transfer::calculatePrice()
{
    return quantity * tarriff;
}


//----------------------------------------------------------------------------------
string Transfer::print()
{
    //cout << "Calss: TRANSFER" << endl;
    return "Class: TRANSFER";
}