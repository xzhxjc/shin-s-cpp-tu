#include <iostream>

class animal {
public:
    virtual void makesound(){
        std::cout<<"the dog is barking"<<std::endl;
    }
};

class cat: public animal{
    public:
        void makesound() override{
            std::cout<<"the cat is monming"<<std::endl;
        }
};

class sheep: public animal{
    public:
        void makesound() override{
            std::cout<<"the sheep is mie"<<std::endl;
        }
};

int main(){
    animal* animalptr;
    cat cat1;
    sheep sheep1;
    animalptr=&cat1;
    animalptr->makesound();
    animalptr=&sheep1;
    animalptr->makesound();
    return 0;
}