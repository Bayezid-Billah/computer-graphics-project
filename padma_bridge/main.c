#include <Windows.h>
#include <GL/glut.h>
#include<math.h>
#include<stdio.h>
using namespace std;

void train(){

    glBegin(GL_QUADS);
    glColor3ub(100,100,100);
    glVertex2f(230-73+300,285);
    glVertex2f(271-73+300,285);
    glVertex2f(271-73+300,287);
    glVertex2f(230-73+300,287);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,85,105);
    glVertex2f(240-74+300,286);
    glVertex2f(245-74+300,286);
    glVertex2f(245-74+300,289.5);
    glVertex2f(240-74+300,289.5);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,85,105);
    glVertex2f(240-73+11+300,286);
    glVertex2f(245-73+11+300,286);
    glVertex2f(245-73+11+300,289.5);
    glVertex2f(240-73+11+300,289.5);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,85,105);
    glVertex2f(220-73+300,258);// train
    glVertex2f(230-73+300,258);
    glVertex2f(230-73+300,287);
    glVertex2f(220-73+300,283);
    glEnd();
}

int main(){


}
