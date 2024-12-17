//robot.h

#ifndef ROBOT_H
#define ROBOT_H
#include <string>
#include <iostream>
#include <stdexcept>

class AssemblyLine {
private:
    int numberOfRobots;
    int totalTrucks;
public:
    getNumrobots(int numberOfRobots);
    getNumtrucks(int totalTrucks);

    void output();


}
#endif // ROBOT_H