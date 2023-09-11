#pragma once
#include "observer.h"
#include <vector>
#include <algorithm>

class Subject {
private:
    std::vector<Observer*> observers;
public:
    Subject() : observers() {};

    void attach(Observer* o){
        observers.push_back(o);
    };

    void detach(Observer* o){
        observers.erase(std::remove(observers.begin(), observers.end(), o), observers.end());
    };

    void notifyObservers(){
        for (auto& o : observers){
            o->update();
        }
    };
};

