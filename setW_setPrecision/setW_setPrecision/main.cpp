#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

// This function collects the LOTOJA rider's first name as well as the times in minutes between the checkpoints. It then displays the distance, time completed, speed between the checkpoints and the overall speed from start to finish (in mph).

const int END_DISTANCE = 207;
const int minToHour = 60;

int main()

{
    string riderName;
    int distanceCP1 = 44, distanceCP2 = 43, distanceCP3 = 41, distanceCP4 = 37, distanceCP5 = 42;

    int timeCP1, timeCP2, timeCP3, timeCP4, timeCP5, finalTimeMinutes;
    float speed1, speed2, speed3, speed4, speed5;
    float avgSpeed;
    
    cout << "Please enter the rider's first name: ";
    cin >> riderName;
    
    cout << endl << "Enter the time (in minutes) at Check Point 1: ";
    cin >> timeCP1;
    
    cout << endl << "Enter the time (in minutes) at Check Point 2: ";
    cin >> timeCP2;
    timeCP2 = timeCP2-timeCP1;
    
    cout << endl << "Enter the time (in minutes) at Check Point 3: ";
    cin >> timeCP3;
    timeCP3 = timeCP3-timeCP2-timeCP1;
    
    cout << endl << "Enter the time (in minutes) at Check Point 4: ";
    cin >> timeCP4;
    timeCP4 = timeCP4-timeCP3-timeCP2-timeCP1;
    
    cout << endl << "Enter the time (in minutes) at the Finish Line: ";
    cin >> timeCP5;
    finalTimeMinutes = timeCP5;
    timeCP5 = timeCP5-timeCP4-timeCP3-timeCP2-timeCP1;
    
    cout << endl << endl << "LOTOTJA results for " << riderName << endl << endl;
    cout << setw(12) << "Location" << setw(16) << "Distance" << setw(8) << "Time" << setw(11) << "Speed" << endl;
    
    cout << setfill('-') << setw(50) << "-" << endl;
    
    //Interval 1
    speed1 = static_cast<float>(minToHour)/timeCP1*distanceCP1;
    
    cout << setw(21) << left << setfill('.') << "Interval 1" << setw(4) << right << setfill(' ') << distanceCP1 << setw(10) << right << setfill(' ') << timeCP1 << setw(13) << right << setfill(' ') << setprecision(3) << fixed << speed1 << endl;
    
    
    //Interval 2
    speed2 = static_cast<float>(minToHour)/timeCP2*distanceCP2;
    
    cout << setw(21) << left << setfill('.') << "Interval 2" << setw(4) << right << setfill(' ') << distanceCP2 << setw(10) << right << setfill(' ') << timeCP2 << setw(13) << right << setfill(' ') << setprecision(3) << fixed << speed2 << endl;
    
    //Interval 3
    speed3 = static_cast<float>(minToHour)/timeCP3*distanceCP3;
    
    cout << setw(21) << left << setfill('.') << "Interval 3" << setw(4) << right << setfill(' ') << distanceCP3 << setw(10) << right << setfill(' ') << timeCP3 << setw(13) << right << setfill(' ') << setprecision(3) << fixed << speed3 << endl;
    
    //Interval 4
    speed4 = static_cast<float>(minToHour)/timeCP4*distanceCP4;
    
    cout << setw(21) << left << setfill('.') << "Interval 4" << setw(4) << right << setfill(' ') << distanceCP4 << setw(10) << right << setfill(' ') << timeCP4 << setw(13) << right << setfill(' ') << setprecision(3) << fixed << speed4 << endl;
    
    //Interval 5
    speed5 = static_cast<float>(minToHour)/timeCP5*distanceCP5;
    
    cout << setw(21) << left << setfill('.') << "Interval 5" << setw(4) << right << setfill(' ') << distanceCP5 << setw(10) << right << setfill(' ') << timeCP5 << setw(13) << right << setfill(' ') << setprecision(3) << fixed << speed5 << endl;
    
    //Average Speed
    avgSpeed = static_cast<float>(minToHour)/finalTimeMinutes;
    avgSpeed = avgSpeed*END_DISTANCE;
    cout << endl << "The average speed for the entire course was "<< avgSpeed << endl;
    
    cout << setfill('-') << setw(50) << "-" << endl << endl;
    
    
    return 0;
}

