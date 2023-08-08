package Creational_design_pattern.Prototype;

interface Shape extends Cloneable {
    void draw();
    Shape clone();
}

