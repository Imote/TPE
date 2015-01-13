#include <iostream>

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

    bool isCold();
    bool isHot();

    int getSensorId();
    int getID();

    int Id;
    float temperature; //La température
    int timestamp; //Moment du relevé
    float pressure; //La pression
    SkyState skyState;
    Wind winds;
    Place place;
};

int main()
{

}

