#include <k8remote.h>
#include <IRremote.h>
int BUTTON_PIN = 12;
int STATUS_PIN = 13;

IRsend irsend;

void setup()
{
  Serial.begin(9600);
  pinMode(BUTTON_PIN, INPUT);
  pinMode(STATUS_PIN, OUTPUT);
}

#define WHITE  0
#define RED 1
#define YELLOW 2
#define GREEN 3
#define CYAN 4
#define BLUE 5
#define MAGENTA 6

#define MAX_MODE (MAGENTA+1)
#define TIME_PER_MODE 600 //milliseconds

int mode;
void loop()
{
  if(mode == GREEN)
  {
    irsend.sendRaw(green, sizeof(green), 38);
    Serial.println("sent green");
  }
  else if(mode == RED)
  {
    irsend.sendRaw(red, sizeof(red), 38);
    Serial.println("sent red");
  }
  else if(mode == BLUE)
  {
    irsend.sendRaw(blue, sizeof(blue), 38);
    Serial.println("sent blue");
  }
  else if(mode == YELLOW)
  {
    irsend.sendRaw(yellow, sizeof(yellow), 38);
    Serial.println("sent yellow");
  }
  else if(mode == CYAN)
  {
    irsend.sendRaw(cyan, sizeof(cyan), 38);
    Serial.println("sent cyan");
  }
  else if(mode == MAGENTA)
  {
    irsend.sendRaw(magenta, sizeof(magenta), 38);
    Serial.println("sent magenta");
  }
  else if(mode == WHITE)
  {
    irsend.sendRaw(white, sizeof(white), 38);
    Serial.println("sent white");
  }
  else
  {
    Serial.println("somehow ended up past the modes currently defined, setting mode back to 0");
    mode = 0;
  }

  mode = (mode+1)% MAX_MODE; //go to next mode
  delay(TIME_PER_MODE); //wait for next mode switch
}
  
