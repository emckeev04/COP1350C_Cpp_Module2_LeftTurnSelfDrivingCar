/*
** Assignment Title: Left Turn Decesion by a Self-Driving Car
** Author: Eric R. McKeever
** Affiliation: School of Technology, Rasmussen University
** Course Title: COP1350C: C++ Programming
** Instructor: Prof. Evelyn Zayas
** Date: Jan. 14, 2024
*/

#include <iostream>
using namespace std;

int main()
{
    // Declaration of all variables.
    const int green = 1, yellow = 2;
    const int left = 1, right = 2, off = 3;
    const int noTraffic = 2;
    
    int lightColor, oncomingTraffic, turnSignal;
   
    
    // Ask user to enter the current color of the light and store the user's input in lightColor.
    cout << "Welcome passenger! What color is the traffic light? Please enter one of the following numbers:" << endl;
    cout << "1) Green\n2) Yellow\n3) Red\nYour input: ";
    cin >> lightColor;

    // Ask user to enter if there is oncoming traffic preventing a turn and store the user's input in oncomingTraffic.
    cout << "\nIs there currently oncoming traffic? Please enter one of the following numbers:" << endl;
    cout << "1) Yes\n2) No\nYour input: ";
    cin >> oncomingTraffic;

    // Ask user to enter which direction the turn signal in and store the user's input in turnSignal.
    cout <<"\nWhat direction is the turn signal in? Please enter one of the following numbers:" << endl;
    cout << "1) Left\n2) Right\n3) Off\nYour input: ";
    cin >> turnSignal;
    
    if(lightColor == green)
    {
        if(oncomingTraffic == noTraffic)
        {
            // Switch statement to display a unique message depending on the direction of turn signal.
            switch (turnSignal)
            {
            case left: cout << "\nThe signal is already turned to the left, the car will turn now."; break;
                
            case right: cout << "\nSwitching the turn signal from right to left, the car will turn now."; break;
                
            case off: cout << "\nTurning the signal on for a left turn. The car will turn left now."; break;
                
            default: cout << "\nChanging the turn signal to left before the car turns.";
            }
        }
        else
        {
            cout << "\nThe light is green but there is still traffic. The car will wait for the traffic to pass before turning.";
        }
        // End of green traffic light if statement. 
    }
    else if(lightColor == yellow)
    {
        // The if statement determines if the car can turn left cautiously if there is no traffic blocking a turn. 
        if(oncomingTraffic == noTraffic)
            cout << "\nThe car will turn left using caution.";
        else
            cout << "\nIt is unsafe to turn. The car will turn when the light is green with no oncoming traffic.";
        
        // End of yellow traffic light statement.
    }
    else
    {
        // Any other input will be treated as if the traffic light is red and the car will not turn. 
        cout << "\nThe light is currently red an is unsafe to turn.";
    }
    
    return 0;
}
