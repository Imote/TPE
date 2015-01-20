#include <iostream>
#include <string>

using namespace std;

class Wind {
public:
    float speed;
    float bursts;
};

class Place {
public:
    string country;
    string region;
    string city;
    int sensorId;
};

class WeatherInformations
{
public:
    enum SkyState{ SUN, CLOUD, RAIN };

    bool isCold(){ if(temperature <= 5) return true; else return false;}
    bool isHot(){ if(temperature >= 15) return true; else return false;}

    int getSensorId(){ return place.sensorId; }
    int getID(){ return id; }

    int id;
    float temperature; //La température
    int timestamp; //Moment du relevé
    float pressure; //La pression
    SkyState skyState; //état du ciel
    Wind winds; //Vent
    Place place; //Lieux
};

int main()
{
    WeatherInformations statement;
    
    //Mise en place de donnée de base
    
    
}

