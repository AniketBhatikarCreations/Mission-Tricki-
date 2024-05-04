#include <Servo.h>

//defining legs
Servo LK1;
Servo LK2;
Servo RK1;
Servo RK2;
Servo LH1;
Servo LH2;
Servo RH1;
Servo RH2;

// void stance() {
//   LH1.write(140);
//   LK1.write(120);
//   RH1.write(40);
//   RK1.write(60);
//   LH2.write(80);
//   LK2.write(60);
//   RH2.write(60);
//   RK2.write(80);
// }

// void sit() {
//   LH1.write(140);
//   LK1.write(180);
//   RH1.write(40);
//   RK1.write(80);
//   LH2.write(80);
//   LK2.write(40);
//   RH2.write(60);
//   RK2.write(100);
// }

// void forward() {
//   //One step movement
//   for (int i = 40; i <= 80; i++) {  // front right lift
//     RH1.write(i);
//     RK1.write(i);
//     delay(10);
//   }

//   delay(1000);

//   RK1.write(40);  //front right leg down

//   delay(1000);

//   for (int j = 80; j >= 40; j--) {  //left back leg lift
//     LH2.write(j);
//     LK2.write(j);
//     delay(10);
//   }

//   delay(1000);

//   LK2.write(100);  //left back leg down

//   delay(1000);


//   for (int k = 80; k <= 120; k++) {  // left front leg lift (assuming lower angle moves leg forward)
//     LH1.write(k);
//     LK1.write(k);
//     delay(10);
//   }

//   delay(1000);

//   LK1.write(140);  //left front leg down

//   delay(1000);

//   for (int l = 60; l <= 100; l++) {  // right back leg lift
//     RH2.write(l);
//     RK2.write(l);
//     delay(10);
//   }

//   delay(1000);

//   RH2.write(80);  //right back leg down

//   delay(1000);
// }

void setup() {
  //legs setup
  LK1.attach(3);
  LH1.attach(4);
  RH1.attach(5);
  RK1.attach(6);
  LK2.attach(7);
  LH2.attach(8);
  RH2.attach(9);
  RK2.attach(10);

  LH1.write(140);
  LK1.write(120);
  RH1.write(40);
  RK1.write(60);
  LH2.write(80);
  LK2.write(60);
  RH2.write(60);
  RK2.write(80);

  delay(2000);

}


void loop() {
    //One step movement
  for (int i = 40; i <= 80; i++) {  // front right lift
    RH1.write(i);
    RK1.write(i);
    delay(4);
  }

  delay(30);

  RK1.write(20);  //front right leg down

  delay(30);

  for (int j = 80; j >= 40; j--) {  //left back leg lift
    LH2.write(j);
    LK2.write(j);
    delay(4);
  }

  delay(30);

  LK2.write(120);  //left back leg down

  delay(30);


  for (int k = 80; k <= 120; k++) {  // left front leg lift (assuming lower angle moves leg forward)
    LH1.write(k);
    LK1.write(k);
    delay(4);
  }

  delay(30);

  LK1.write(140);  //left front leg down

  delay(30);

  for (int l = 60; l <= 100; l++) {  // right back leg lift
    RH2.write(l);
    RK2.write(l);
    delay(4);
  }

  delay(30);

  RK2.write(50);  //right back leg down

  delay(30);
}
