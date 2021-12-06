#include <iostream>
#include <fstream>
#include <string>
#include <unistd.h>
using namespace std;
 
#define LED0_PATH "/sys/class/leds/beaglebone:green:usr0"
 
int main(int argc, char* argv[]){
   
   std::fstream fs;
   cout << "Starting the LED flash program" << endl;
   cout << "The LED Path is: " << LED0_PATH << endl;     
  
 fs.open (LED0_PATH "/trigger", std::fstream::out);
 fs << "timer";
 fs.close();
 fs.open (LED0_PATH "/delay_on", std::fstream::out);
 fs << "25";
 fs.close();
 fs.open (LED0_PATH "/delay_off", std::fstream::out);
 fs << "25";
 fs.close();
  
   cout << "Finished the LED flash program" << endl;
   return 0;
}
