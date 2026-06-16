#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <raylib.h>

#define WIDTH 1000
#define HEIGHT 1000
#define FPS 60

typedef struct {
  float dsun, mass;
  float x, y, radius, vx, vy, fx, fy;
} Planet;

Planet Corps[8];

void InitPlanet() {
  for (int i=0; i<9; i++) {
    switch (i) {
      case 0:
        Corps[i].dsun = 0;
        Corps[i].mass = 1.989*powf(10,30);
        Corps[i].radius = (1400000/2);
        Corps[i].x = WIDTH/2;
        Corps[i].y = HEIGHT/2;
        Corps[i].vx = 0;
        Corps[i].vy = 0;
        Corps[i].fx = 0;
        Corps[i].fy = 0;
        break;
      case 1:
        Corps[i].dsun = 57.9*powf(10,6);
        Corps[i].mass = 3.3*powf(10,23);
        Corps[i].radius = (4880/2);
        Corps[i].x = Corps[0].x + Corps[i].dsun;
        Corps[i].y = HEIGHT/2;
        Corps[i].vx = 0;
        Corps[i].vy = 0;
        Corps[i].fx = 0;
        Corps[i].fy = 0;
        break;
      case 2:
        Corps[i].dsun = 108.2*powf(10,6);
        Corps[i].mass = 4.87*powf(10,24);
        Corps[i].radius = (12104/2);
        Corps[i].x = Corps[0].x + Corps[i].dsun;
        Corps[i].y = HEIGHT/2;
        Corps[i].vx = 0;
        Corps[i].vy = 0;
        Corps[i].fx = 0;
        Corps[i].fy = 0;
        break;
      case 3:
        Corps[i].dsun = 149.6*powf(10,6);
        Corps[i].mass = 5.97*powf(10,24);
        Corps[i].radius = (12756/2);
        Corps[i].x = Corps[0].x + Corps[i].dsun;
        Corps[i].y = HEIGHT/2;
        Corps[i].vx = 0;
        Corps[i].vy = 0;
        Corps[i].fx = 0;
        Corps[i].fy = 0;
        break;
      case 4:
        Corps[i].dsun = 227.9*powf(10,6);
        Corps[i].mass = 6.42*powf(10,23);
        Corps[i].radius = (6792/2);
        Corps[i].x =  Corps[0].x + Corps[i].dsun;
        Corps[i].y = HEIGHT/2;
        Corps[i].vx = 0;
        Corps[i].vy = 0;
        Corps[i].fx = 0;
        Corps[i].fy = 0;
        break;
      case 5:
        Corps[i].dsun = 778.5*powf(10,6);
        Corps[i].mass = 1.9*powf(10,27);
        Corps[i].radius = (142984/2);
        Corps[i].x =  Corps[0].x + Corps[i].dsun;
        Corps[i].y = HEIGHT/2;
        Corps[i].vx = 0;
        Corps[i].vy = 0;
        Corps[i].fx = 0;
        Corps[i].fy = 0;
        break;
      case 6:
        Corps[i].dsun = 1430*powf(10,6);
        Corps[i].mass = 5.88*powf(10,28);
        Corps[i].radius = (120536/2);
        Corps[i].x =  Corps[0].x + Corps[i].dsun;
        Corps[i].y = HEIGHT/2;
        Corps[i].vx = 0;
        Corps[i].vy = 0;
        Corps[i].fx = 0;
        Corps[i].fy = 0;
        break;
      case 7:
        Corps[i].dsun = 2870*powf(10,6);
        Corps[i].mass = 8.68*powf(10,25);
        Corps[i].radius = (51118/2);
        Corps[i].x =  Corps[0].x + Corps[i].dsun;
        Corps[i].y = HEIGHT/2;
        Corps[i].vx = 0;
        Corps[i].vy = 0;
        Corps[i].fx = 0;
        Corps[i].fy = 0;
        break;
      case 8:
        Corps[i].dsun = 4490*powf(10,6);
        Corps[i].mass = 1.02*powf(10,26);
        Corps[i].radius = (49528/2);
        Corps[i].x =  Corps[0].x + Corps[i].dsun;
        Corps[i].y = HEIGHT/2;
        Corps[i].vx = 0;
        Corps[i].vy = 0;
        Corps[i].fx = 0;
        Corps[i].fy = 0;
        break;
    }
  }
}

int main() {
  printf("Hello World\n");
}
