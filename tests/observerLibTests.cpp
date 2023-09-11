#include "subject.h"
#include "observer.h"
#include <iostream>

class Observer1 : public Observer {
public:
    void update() override {
        std::cout << "Observer1 updated" << std::endl;
    }
};


int main(){
    Subject s;
    Observer1 o1, o2, o3;
    s.attach(&o1);
    s.attach(&o2);
    s.attach(&o3);
    s.notifyObservers();
    s.detach(&o2);
    s.notifyObservers();
    return 0;
}