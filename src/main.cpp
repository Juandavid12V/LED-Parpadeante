#include <Arduino.h>
#include  <WiFi.h>


const char * ssid = "JUANDAVID";
const char * pass = "123456789";
const char *host = "dweet.io";
const int port = 80;

/**
* @brief Funcion que inicializa el dispositivo
* Puerto serial(velocidad)
* Direcciones de pines de entrada y salida
* Se pueden crear objetos que representan sensores, dispositivos wifi y objetos de librerias externas
*/


void setup() {
  Serial.begin(115200); //configuramos a 115200 bits por segundo
  WiFi.begin(ssid, pass); //Inicializamos el modulo Wifi y que se vincule a la red indicada en el ssid
  while(WiFi.status() != WL_CONNECTED){
    Serial.print(".");
    delay(1000);
  }
  Serial.println(" Conectado!");
  Serial.print("Direccion IP: ");
  Serial.println(WiFi.localIP());

  pinMode(2, OUTPUT); //Configuramos el pin 2 como salida
  digitalWrite(2, HIGH); //Encendemos el LED 
}

void loop() {
  WiFiClient cliente; //Objeto que realiza peticiones a un socket servidor

  delay(500); //Retardo de 500ms
  digitalWrite(2, LOW); //Apagar el Led
  delay(500);
  digitalWrite(2, HIGH); //Encender el LED
}