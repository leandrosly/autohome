/* rawSend.ino Example sketch for IRLib2
 *  Illustrates how to send a code Using raw timings which were captured
 *  from the "rawRecv.ino" sample sketch.  Load that sketch and
 *  capture the values. They will print in the serial monitor. Then you
 *  cut and paste that output into the appropriate section below.
 */
#include <IRLibSendBase.h>    //We need the base code
#include <IRLib_HashRaw.h>    //Only use raw sender

IRsendRaw mySender;

void setup() {
  Serial.begin(9600);
  delay(2000); 
  while (!Serial); //delay for Leonardo
  Serial.println("DHT11 Humidity & temperature Sensor\n\n");
}
/* Cut and paste the output from "rawRecv.ino" below here. It will 
 * consist of a #define RAW_DATA_LEN statement and an array definition
 * beginning with "uint16_t rawData[RAW_DATA_LEN]= {…" and concludes
 * with "…,1000};"
 */
#define RAW_DATA_LEN1 100
uint16_t rawDataOn1[RAW_DATA_LEN1]={
	8910, 4614, 498, 1750, 502, 1750, 506, 654, 
	482, 654, 486, 686, 458, 686, 462, 686, 
	462, 1754, 506, 646, 482, 1750, 506, 1758, 
	502, 654, 486, 658, 490, 686, 458, 690, 
	458, 682, 458, 666, 462, 1746, 510, 1750, 
	506, 638, 502, 662, 482, 670, 478, 686, 
	462, 678, 462, 666, 462, 670, 462, 670, 
	462, 678, 462, 678, 462, 1758, 510, 1762, 
	510, 630, 510, 650, 482, 542, 582, 554, 
	582, 554, 582, 562, 582, 562, 582, 570, 
	578, 558, 582, 546, 582, 550, 582, 554, 
	582, 558, 578, 562, 582, 566, 578, 570, 
	582, 538, 582, 1000};

#define RAW_DATA_LEN2 52
uint16_t rawDataOn2[RAW_DATA_LEN2]={
	574, 562, 578, 550, 578, 554, 578, 558, 
	578, 562, 578, 566, 574, 570, 578, 574, 
	578, 558, 578, 554, 574, 558, 574, 562, 
	570, 566, 574, 570, 570, 578, 570, 594, 
	550, 590, 550, 582, 546, 1710, 542, 1718, 
	542, 598, 538, 602, 542, 1734, 530, 1742, 
	530, 1722, 518, 1000};

#define RAW_DATA_LEN3 60
uint16_t rawDataOn3[RAW_DATA_LEN3]={
	462, 678, 462, 682, 458, 694, 458, 686, 
	458, 678, 458, 670, 458, 674, 458, 678, 
	462, 678, 454, 690, 458, 686, 454, 698, 
	458, 678, 454, 674, 458, 674, 458, 678, 
	454, 682, 462, 682, 454, 694, 454, 694, 
	454, 682, 454, 1802, 454, 674, 454, 682, 
	450, 690, 450, 690, 454, 690, 450, 702, 
	454, 666, 454, 1000};

#define RAW_DATA_LEN 10
uint16_t rawDataOn[RAW_DATA_LEN]={8910, 4614, 498, 1750, 502, 1750, 506, 654, 482, 654};


/*
 * Cut-and-paste into the area above.
 */
   
void loop() {

  delay(5000);

//  mySender.send(rawDataOn1,RAW_DATA_LEN1,36);//Pass the buffer,length, optionally frequency
  mySender.send(rawDataOn1,RAW_DATA_LEN1,38);//Pass the buffer,length, optionally frequency
  delay(100);
  mySender.send(rawDataOn2,RAW_DATA_LEN2,38);//Pass the buffer,length, optionally frequency
  delay(100);
  mySender.send(rawDataOn3,RAW_DATA_LEN3,38);//Pass the buffer,length, optionally frequency
  Serial.println(F("AC Switched On"));

  delay(5000);
}