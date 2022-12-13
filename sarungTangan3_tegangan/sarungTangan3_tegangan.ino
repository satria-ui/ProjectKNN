#define hurufA ((val[0] >= 76 and val[0] <= 80) and (val[1] >= 75 and val[1] <= 79) and (val[2] >= 75 and val[2] <= 79) and (val[3] >= 75 and val[3] <= 79) and (val[4]  < 50) and (val[5] >= 66 and val[5] <= 70)) && (                  accel[0] < -7 and accel[1] > -2 and accel[1] <  1 and accel[2] > -3 and accel[2] <  6) // A
#define hurufB ((val[0] >= 62 and val[0] <= 66) and (val[1] >= 63 and val[1] <= 67) and (val[2] >= 61 and val[2] <= 65) and (val[3] >= 63 and val[3] <= 67) and (val[4]  < 90) and (val[5] >= 68 and val[5] <= 73)) && (                  accel[0] < -7 and accel[1] > -2 and accel[1] <  1 and accel[2] > -2 and accel[2] <  6) // B
#define hurufC ((val[0] >= 66 and val[0] <= 70) and (val[1] >= 66 and val[1] <= 70) and (val[2] >= 66 and val[2] <= 70) and (val[3] >= 66 and val[3] <= 70) and (val[4] == 90) and (val[5] >= 66 and val[5] <= 70)) && (                  accel[0] < -7                   and accel[1] < -2 and accel[2] > -4 and accel[2] <  5) // C
#define hurufD ((val[0] >= 73 and val[0] <= 76) and (val[1] >= 73 and val[1] <= 76) and (val[2] >= 72 and val[2] <= 76) and (val[3] >= 63 and val[3] <= 66) and (val[4] == 90) and (val[5] >= 69 and val[5] <= 73)) && (                  accel[0] < -7 and accel[1] > -2 and accel[1] <  1 and accel[2] > -5 and accel[2] <  5) // D
#define hurufE ((val[0] >= 73 and val[0] <= 78) and (val[1] >= 73 and val[1] <= 78) and (val[2] >= 73 and val[2] <= 78) and (val[3] >= 73 and val[3] <= 78) and (val[4] == 90) and (val[5] >= 70 and val[5] <= 74)) && (                  accel[0] < -7 and accel[1] > -2 and accel[1] <  1 and accel[2] > -1 and accel[2] <  6) // E
#define hurufF ((val[0] >= 64 and val[0] <= 68) and (val[1] >= 64 and val[1] <= 68) and (val[2] >= 62 and val[2] <= 66) and (val[3] >= 72 and val[3] <= 76) and (val[4] == 90) and (val[5] >= 68 and val[5] <= 72)) && (                  accel[0] < -7 and accel[1] > -2 and accel[1] <  2 and accel[2] > -4 and accel[2] <  3) // F
#define hurufG ((val[0] >= 76 and val[0] <= 80) and (val[1] >= 75 and val[1] <= 79) and (val[2] >= 74 and val[2] <= 78) and (val[3] >= 65 and val[3] <= 69) and (val[4] == 90) and (val[5] >= 65 and val[5] <= 69)) && (                  accel[0] < -7                   and accel[1] < -2 and accel[2] > -1 and accel[2] <  4) // G
#define hurufH ((val[0] >= 76 and val[0] <= 80) and (val[1] >= 74 and val[1] <= 78) and (val[2] >= 61 and val[2] <= 65) and (val[3] >= 62 and val[3] <= 66) and (val[4] <= 90) and (val[5] >= 68 and val[5] <= 72)) && (accel[0] > -4 and accel[0] <  3                   and accel[1] < -7 and accel[2] > -4 and accel[2] <  0) // H
#define hurufI ((val[0] >= 61 and val[0] <= 65) and (val[1] >= 74 and val[1] <= 78) and (val[2] >= 74 and val[2] <= 78) and (val[3] >= 74 and val[3] <= 78) and (val[4]  < 90) and (val[5] >= 69 and val[5] <= 73)) && (                  accel[0] < -7 and accel[1] > -2 and accel[1] <  1 and accel[2] > -3 and accel[2] <  6) // I
#define hurufJ ((val[0] >= 61 and val[0] <= 65) and (val[1] >= 74 and val[1] <= 78) and (val[2] >= 74 and val[2] <= 78) and (val[3] >= 74 and val[3] <= 78) and (val[4]  < 90) and (val[5] >= 69 and val[5] <= 73)) && (                  accel[0] < -5                   and accel[1] < -5 and accel[2] > -4 and accel[2] <  2) // J
#define hurufK ((val[0] >= 74 and val[0] <= 78) and (val[1] >= 73 and val[1] <= 77) and (val[2] >= 65 and val[2] <= 69) and (val[3] >= 63 and val[3] <= 67) and (val[4] == 90) and (val[5] >= 66 and val[5] <= 70)) && (                  accel[0] < -7                   and accel[1] < -4 and accel[2] > -2 and accel[2] <  3) // K 
#define hurufL ((val[0] >= 74 and val[0] <= 78) and (val[1] >= 74 and val[1] <= 78) and (val[2] >= 74 and val[2] <= 78) and (val[3] >= 63 and val[3] <= 67) and (val[4] == 90) and (val[5] >= 63 and val[5] <= 67)) && (                  accel[0] < -7 and accel[1] > -2 and accel[1] <  1 and accel[2] > -3 and accel[2] <  6) // L
#define hurufM ((val[0] >= 72 and val[0] <= 76) and (val[1] >= 71 and val[1] <= 75) and (val[2] >= 71 and val[2] <= 75) and (val[3] >= 71 and val[3] <= 75) and (val[4]  < 90) and (val[5] >= 69 and val[5] <= 73)) && (                  accel[0] < -7 and accel[1] > -2 and accel[1] <  1 and accel[2] > -3 and accel[2] <  6) // M
#define hurufN ((val[0] >= 72 and val[0] <= 76) and (val[1] >= 71 and val[1] <= 75) and (val[2] >= 71 and val[2] <= 75) and (val[3] >= 71 and val[3] <= 75) and (val[4] == 90) and (val[5] >= 69 and val[5] <= 73)) && (                  accel[0] < -7 and accel[1] > -2 and accel[1] <  1 and accel[2] > -3 and accel[2] <  6) // N
#define hurufO ((val[0] >= 72 and val[0] <= 76) and (val[1] >= 72 and val[1] <= 76) and (val[2] >= 72 and val[2] <= 76) and (val[3] >= 72 and val[3] <= 76) and (val[4] == 90) and (val[5] >= 70 and val[5] <= 74)) && (                  accel[0] < -7                   and accel[1] < -2 and accel[2] > -1 and accel[2] <  6) // O 
#define hurufP ((val[0] >= 74 and val[0] <= 78) and (val[1] >= 73 and val[1] <= 77) and (val[2] >= 65 and val[2] <= 69) and (val[3] >= 63 and val[3] <= 67) and (val[4] == 90) and (val[5] >= 66 and val[5] <= 70)) && (accel[0] >  2                                     and accel[1] < -2 and accel[2] >  6                  ) // P
#define hurufQ ((val[0] >= 76 and val[0] <= 80) and (val[1] >= 75 and val[1] <= 79) and (val[2] >= 74 and val[2] <= 78) and (val[3] >= 65 and val[3] <= 69) and (val[4] == 90) and (val[5] >= 65 and val[5] <= 69)) && (accel[0] >  0 and accel[1] <  4 and accel[1] > -3 and accel[1] <  0 and accel[2] >  7                  ) // Q
#define hurufR ((val[0] >= 74 and val[0] <= 78) and (val[1] >= 74 and val[1] <= 78) and (val[2] >= 67 and val[2] <= 71) and (val[3] >= 61 and val[3] <= 65) and (val[4] == 90) and (val[5] >= 68 and val[5] <= 72)) && (                  accel[0] < -7 and accel[1] > -2 and accel[1] <  1 and accel[2] > -3 and accel[2] <  6) // R
#define hurufS ((val[0] >= 76 and val[0] <= 80) and (val[1] >= 75 and val[1] <= 79) and (val[2] >= 75 and val[2] <= 79) and (val[3] >= 75 and val[3] <= 79) and (val[4]  < 50) and (val[5] >= 72 and val[5] <= 76)) && (                  accel[0] < -7 and accel[1] > -2 and accel[1] <  1 and accel[2] > -3 and accel[2] <  6) // S
#define hurufT ((val[0] >= 76 and val[0] <= 80) and (val[1] >= 75 and val[1] <= 79) and (val[2] >= 75 and val[2] <= 79) and (val[3] >= 72 and val[3] <= 76) and (val[4] == 90) and (val[5] >= 66 and val[5] <= 70)) && (                  accel[0] < -7                   and accel[1] < -2 and accel[2] > -1 and accel[2] <  6) // T
#define hurufU ((val[0] >= 76 and val[0] <= 80) and (val[1] >= 74 and val[1] <= 78) and (val[2] >= 61 and val[2] <= 65) and (val[3] >= 62 and val[3] <= 66) and (val[4]  < 90) and (val[5] >= 68 and val[5] <= 72)) && (                  accel[0] < -7 and accel[1] > -4 and accel[1] <  1 and accel[2] > -3 and accel[2] <  6) // U
#define hurufV ((val[0] >= 76 and val[0] <= 80) and (val[1] >= 74 and val[1] <= 78) and (val[2] >= 61 and val[2] <= 65) and (val[3] >= 62 and val[3] <= 66) and (val[4] == 90) and (val[5] >= 68 and val[5] <= 72)) && (                  accel[0] < -7 and accel[1] > -4 and accel[1] <  1 and accel[2] > -3 and accel[2] <  6) // V
#define hurufW ((val[0] >= 76 and val[0] <= 80) and (val[1] >= 64 and val[1] <= 68) and (val[2] >= 62 and val[2] <= 66) and (val[3] >= 62 and val[3] <= 66) and (val[4] == 90) and (val[5] >= 68 and val[5] <= 72)) && (                  accel[0] < -7 and accel[1] > -2 and accel[1] <  1 and accel[2] > -3 and accel[2] <  6) // W
#define hurufX ((val[0] >= 76 and val[0] <= 80) and (val[1] >= 75 and val[1] <= 79) and (val[2] >= 75 and val[2] <= 79) and (val[3] >= 72 and val[3] <= 73) and (val[4] == 90) and (val[5] >= 72 and val[5] <= 76)) && (                  accel[0] < -7                   and accel[1] < -2 and accel[2] > -1 and accel[2] <  6) // X
#define hurufY ((val[0] >= 62 and val[0] <= 66) and (val[1] >= 73 and val[1] <= 77) and (val[2] >= 73 and val[2] <= 77) and (val[3] >= 74 and val[3] <= 78) and (val[4] <= 90) and (val[5] >= 64 and val[5] <= 68)) && (                  accel[0] < -6 and accel[1] > -3 and accel[1] <  1 and accel[2] > -3 and accel[2] <  7) // Y
#define hurufZ ((val[0] >= 76 and val[0] <= 80) and (val[1] >= 75 and val[1] <= 79) and (val[2] >= 75 and val[2] <= 79) and (val[3] >= 63 and val[3] <= 67) and (val[4] == 90) and (val[5] >= 69 and val[5] <= 73)) && (accel[0] > -1 and accel[0] <  4 and accel[1] > -5 and accel[1] <  1 and accel[2] >  7                  ) // Z

//  deklarasi  nilai sensor flex dan fsr


#define BLYNK_PRINT Serial
//#define BLYNK_TEMPLATE_ID "TMPLbxaQzmn4"       // ID Blynk template_ID
//#define BLYNK_DEVICE_NAME "sarung tangan cb"   // nama project blynk
//#define BLYNK_AUTH_TOKEN "ImiIM31dPiWLRg_unRBrHtPfFxQ9XTjS"   // ID Blynk Autentifikasi 

#define BLYNK_TEMPLATE_ID "TMPLULygwfeL"
#define BLYNK_DEVICE_NAME "sarung tangan" 
#define BLYNK_AUTH_TOKEN "Q3_32ilr1DgBNEyhr90ArOVn42wBvgOQ"

#include <WiFi.h>             // library wifi 
#include <WiFiClient.h>
#include <BlynkSimpleEsp32.h>
#include "lib_SD.h"
#include "sound.h"

#include <Adafruit_MPU6050.h>
#include <Adafruit_Sensor.h>
#include <Wire.h>

Adafruit_MPU6050 mpu;

char auth[] = BLYNK_AUTH_TOKEN;

char ssid[] = "Amos";           //nama wifi 
char pass[] = "amos0274";       //pasword

BlynkTimer timer;

int dac[6] = { 36, 39, 34, 35, 32, 33 };
int val[6];
int val1[6];
int pembagi = 1;
int flex[6];

float accel[3];
float gyro[3];

int buff = 0;
String hurufnya = "-";
String hurufnyaL = "-";

unsigned long delayBlynk = 0;
unsigned long jeda = 0;
unsigned long jedaAudio = 0;
unsigned long jedaImu = 0;

boolean berubah = false;
#include "data.h"
#include "translate.h"

void bacaflex() {
  float teg[6];
  Serial.print("NILAI TEG. FLEX dan FSR : ");
  for (int i = 0; i <= 5; i++) {
    teg[i] = analogRead(dac[i]);
    Serial.print(teg[i]);
    Serial.print(" ");
    teg[i] /= 4095;
    teg[i] *= 3.3;
    Serial.print(teg[i]);
    Serial.print("V ");
  }
  
  Serial.print("|| olahan : ");
  for (int i = 0; i <= 5; i++) {
    val[i] = map(analogRead(dac[i]), 0, 4095, 0, 90);   //baca 5 sensor flex dan 1 fsr
    Serial.print(val[i]);
    Serial.print(" ");
  }
  
  Serial.print(hurufnyaL);
  Serial.print(" : ");
  Serial.print(hurufnya);

//  Serial.print(" -Gyro : ");
//  Serial.print(gyro[0]);
//  Serial.print(" - ");
//  Serial.print(gyro[1]);
//  Serial.print(" - ");
//  Serial.print(gyro[2]);

  Serial.print(" -Acce : ");
  Serial.print(accel[0]);
  Serial.print(" - ");
  Serial.print(accel[1]);
  Serial.print(" - ");
  Serial.println(accel[2]);
}

void koneksi(){
  Blynk.begin(auth, ssid, pass);
  while(!Blynk.connected()){
     if (millis() - jedaImu >= 100) {
      sensors_event_t a, g, temp;
      mpu.getEvent(&a, &g, &temp);
      accel[0] = a.acceleration.x;
      accel[1] = a.acceleration.y;
      accel[2] = a.acceleration.z;
  
      gyro[0] = g.gyro.x;
      gyro[1] = g.gyro.y;
      gyro[2] = g.gyro.z;
      
      jedaImu = millis();
    }
    
    if (millis() - delayBlynk >= 50) {
      ubah();
      bacaflex();
      delayBlynk = millis();
    }
  }
  Serial.println("READY");
  Blynk.virtualWrite(V1, "PENERJEMAH");
  Blynk.virtualWrite(V0, "ISYARAT");
  Blynk.virtualWrite(V2, " - ");
  Blynk.setProperty(V3, "onLabel", " - ");
  Blynk.setProperty(V3, "offLabel", " - ");
}

void setup() {
  Serial.begin(115200);
  for (int i = 0; i <= 5; i++) {
    pinMode(dac[i], INPUT);
    Serial.println(dac[i]);
  }
  sdCard_setup();               // setup module SDcard
  audio_setup();

  if (!mpu.begin()) {
    Serial.println("Failed to find MPU6050 chip");    // data pembacaan sensor gyro
    while (1) {
      delay(10);
    }
  }
  mpu.setAccelerometerRange(MPU6050_RANGE_8_G);
  Serial.print("Accelerometer range set to: ");
  switch (mpu.getAccelerometerRange()) {
    case MPU6050_RANGE_2_G:
      Serial.println("+-2G");
      break;
    case MPU6050_RANGE_4_G:
      Serial.println("+-4G");
      break;
    case MPU6050_RANGE_8_G:
      Serial.println("+-8G");
      break;
    case MPU6050_RANGE_16_G:
      Serial.println("+-16G");
      break;
  }
  mpu.setGyroRange(MPU6050_RANGE_500_DEG);
  Serial.print("Gyro range set to: ");
  switch (mpu.getGyroRange()) {
    case MPU6050_RANGE_250_DEG:
      Serial.println("+- 250 deg/s");
      break;
    case MPU6050_RANGE_500_DEG:
      Serial.println("+- 500 deg/s");
      break;
    case MPU6050_RANGE_1000_DEG:
      Serial.println("+- 1000 deg/s");
      break;
    case MPU6050_RANGE_2000_DEG:
      Serial.println("+- 2000 deg/s");
      break;
  }

  mpu.setFilterBandwidth(MPU6050_BAND_21_HZ);
  Serial.print("Filter bandwidth set to: ");
  switch (mpu.getFilterBandwidth()) {
    case MPU6050_BAND_260_HZ:
      Serial.println("260 Hz");
      break;
    case MPU6050_BAND_184_HZ:
      Serial.println("184 Hz");
      break;
    case MPU6050_BAND_94_HZ:
      Serial.println("94 Hz");
      break;
    case MPU6050_BAND_44_HZ:
      Serial.println("44 Hz");
      break;
    case MPU6050_BAND_21_HZ:
      Serial.println("21 Hz");
      break;
    case MPU6050_BAND_10_HZ:
      Serial.println("10 Hz");
      break;
    case MPU6050_BAND_5_HZ:
      Serial.println("5 Hz");
      break;
  }
  koneksi();
}

void loop() {
  audio.loop();         // suara huruf alafabet
  Blynk.run();

  String datanya = "";
  while (Serial.available()) {
    datanya = Serial.readStringUntil('\n');
    datanya.toUpperCase();
    Serial.println(datanya);
    datanya.trim();
    String datanya1 = "/HURUF MP3/" + datanya + ".mp3";
    int panjang = datanya1.length() + 1;
    char filenya[panjang];
    datanya1.toCharArray(filenya, panjang);
    audio.connecttoFS(SD, filenya);
  }

  if (millis() - jedaImu >= 100) {
    sensors_event_t a, g, temp;
    mpu.getEvent(&a, &g, &temp);
    accel[0] = a.acceleration.x;
    accel[1] = a.acceleration.y;
    accel[2] = a.acceleration.z;

    gyro[0] = g.gyro.x;
    gyro[1] = g.gyro.y;
    gyro[2] = g.gyro.z;
    
    jedaImu = millis();
  }
  
  if (millis() - delayBlynk >= 50) {
    ubah();
    bacaflex();
    delayBlynk = millis();
  }
}
