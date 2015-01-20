#include <iostream>
#include <string>

using namespace std;

/* Stocke des informations sur le vent */
class Wind {
public:
    float speed; //Vitesse
    float bursts; //Rafales
};

/* Lieu du relevé */
class Place {
public:
    string country; //Pays
    string region; //Region
    string city; //Ville
    int sensorId; //Numéro unique de la station météo
};

/* Contient les informations d'un relevé */
class WeatherInformations
{
public:
    enum SkyState{ SUN, CLOUD, RAIN }; //état du ciel

    bool isCold(){ if(temperature <= 5) return true; else return false;} //Permet de s'avoir si lors du relevé il a fait froid
    bool isHot(){ if(temperature >= 15) return true; else return false;} //idem pour savoir s'il a fait chaud

    int getSensorId(){ return place.sensorId;} //Renvoie l'identifiant unique de la station météo
    int getID(){ return id;} //Renvoie l'identifiant unique du relevé

    int id; //Identifiant unique du relevé
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
    
    /* Mise en place de donnée de base : acquisition */
    statement.id = 5;
    statement.temperature = 3.0f;
    statement.timestamp = 1421756875;
    statement.pressure = 1f;
    statement.skyState = WeatherInformations::SkyState::CLOUD;
    statement.winds.speed = 11;
    statement.winds.bursts = 20;
    statement.place.country = "France";
    statement.place.region = "Somme";
    statement.place.city = "Abbeville";
    statement.place.sensorId = 9546;
    
}

