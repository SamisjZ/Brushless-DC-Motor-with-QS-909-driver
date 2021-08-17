# Brushless-DC-Motor-with-QS-909-driver

in this Task I will use the QS-909 JYQD driver to controll the Brushless DC Motor

first the wiring witch you can see it in this Image 
![QS-909 Connection](https://user-images.githubusercontent.com/86025722/129650687-67005ad6-2929-4ed8-aa1e-4e19fa66e273.jpg)


and the next image with the arduino uno 
![Brushless DC with QS-909 Circuit](https://user-images.githubusercontent.com/86025722/129650881-69200c2e-244e-40a1-bb55-0771cf5ab66b.png)

connections from QS-909 JYQD to arduino:
1- 5v to 5v

2- EL to pin 11

3- Signal to pin 10

4- Z/F to pin 6

5- VR to pin 5

6- GND to GND

connections from QS-909 JYQD to Brushless Motor;
1- 5v to 5v

2- HA to HA

3- HB to HB

4- HC to HC

5- GND to GND

6- MA to MA

7- MB to MB 

8- MC to MC

and last the  24V Battary graund to P-, positive to P+

finaly lock at the arduino code in this file "QS-909Driver-Code.ino" 


