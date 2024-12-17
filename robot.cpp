//robot.cpp

#include "robot.h"
int AssemblyLine::getNumrobots(){
    return numberOfRobots;
}

void AssemblyLine::output(){
    std::cout << "Robot " << numberOfRobots << " attaching door to Truck " << i;
}

void AssemblyLine::work(){
    std::cout << "Processing Truck " << i;
    for(int i = 1, i <= totalTrucks, i++){
        output();
        numberOfRobots--;
        if(numberOfRobots == 0){
            std::cout << "Processing Truck " << i;
            numberOfRobots == 4;
        }
    }
}