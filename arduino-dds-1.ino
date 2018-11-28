#include<SPI.h>
#include"gelombang.h" //ini kumpulan register buat bikin waveformnya
const int set1=0xf0; //ini buat konstanta awal buat set1
const int set2=0xf1; //ini buat konstanta awal buat set1

/*
  pin buat spi :
  MOSI  : pin 11
  MISO  : pin 12
  SCK   : pin 13
*/
const int pinBuatBaca=6;
const int pinBuatNulis=7;
const byte BACA =0b11111100;//perintah untuk membaca
const byte TULIS=0b00000010;//perintah untuk menulis
void setup()
{
  //bagians settup
  SPI.begin(); //memang harus pake ini
  pinMode(pinBuatBaca, INPUT);
  pinMode(pinBuatNulis, OUTPUT);
}

void loop()
{

}

void tulisRegister(byte alamatRegister, byte nilaiRegister){
  //fungsi buat nulis ke registernya
  alamatRegister=alamatRegister<<2;
  byte dataUntukDikirim=alamatRegister|TULIS;
  // untuk mengirim data pinPemilih harus bernilai low
  digitalWrite(pinBuatNulis, LOW);
  SPI.transfer(dataUntukDikirim); // lokasi alamatRegister
  SPI.transfer(nilaiRegister);//nilai kepada registernya

  //selesai buat menulis ke register
  digitalWrite(pinBuatNulis, HIGH);


}
