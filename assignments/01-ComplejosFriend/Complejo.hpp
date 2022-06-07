#pragma once

class Complejo {
private:
    int real, imag;
public:
    Complejo();
    Complejo(int, int);
    int getReal();
    void setReal(int);
    int getImag();
    void setImag(int);
    Complejo suma(Complejo);
    friend Complejo resta(Complejo, Complejo);
    void print();
};