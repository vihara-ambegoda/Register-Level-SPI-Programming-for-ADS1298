#include <SPI.h>

void setup(){
  delay(500);
  Serial.begin(9600);
  int a,b,c;
  digitalWrite(51, HIGH);
  pinMode(51, OUTPUT);
  SPI.begin();
  SPI.setBitOrder(MSBFIRST);
  SPI.setDataMode(SPI_MODE1);
  digitalWrite(51, LOW);
  
  SPI.transfer(0b01000001);
  delayMicroseconds(5);
  SPI.transfer(0b00000000);
  delayMicroseconds(5);
  a = SPI.transfer(0b10100000);  //160
  delayMicroseconds(10);
  Serial.println(a);

  SPI.transfer(0b01000010);
  delayMicroseconds(5);
  SPI.transfer(0b00000000);
  delayMicroseconds(5);
  b = SPI.transfer(0b00100010);  //34
  delayMicroseconds(10);
  Serial.println(b);

  SPI.transfer(0b01000011);
  delayMicroseconds(5);
  SPI.transfer(0b00000000);
  delayMicroseconds(5);
  c = SPI.transfer(0b01000000);  //64
  delayMicroseconds(10);
  Serial.println(c);
  
  SPI.transfer(0x11);
  delayMicroseconds(1);
  digitalWrite(51, HIGH);
  delay(500);
}

void loop()
{

}
