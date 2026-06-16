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

void InitPlanet() {
  for (int i=0; i<9; i++) {
    switch (Planet[i]) {
      case 0:
        charges[i].dsun = 0;
        charges[i].mass = 1989*powf(10,27);
        charges[i].radius = (1400000/2);
        charges[i].x = WIDTH/2;
        charges[i].y = HEIGHT/2;
        charges[i].vx = 0;
        charges[i].vy = 0;
        charges[i].fx = 0;
        charges[i].fy = 0;
        break;
      case 1:
        charges[i].dsun = 579*powf(10,5);
        charges[i].mass = 33*powf(10,22);
        charges[i].radius = (4880/2);
        charges[i].x = WIDTH/2;
        charges[i].y = HEIGHT/2;
        charges[i].vx = 0;
        charges[i].vy = 0;
        charges[i].fx = 0;
        charges[i].fy = 0;
        break;
      case 2:
        charges[i].dsun = 0;
        charges[i].mass = 1989*powf(10,27);
        charges[i].radius = (1400000/2);
        charges[i].x = WIDTH/2;
        charges[i].y = HEIGHT/2;
        charges[i].vx = 0;
        charges[i].vy = 0;
        charges[i].fx = 0;
        charges[i].fy = 0;
        break;
      case 3:
        charges[i].dsun = 0;
        charges[i].mass = 1989*powf(10,27);
        charges[i].radius = (1400000/2);
        charges[i].x = WIDTH/2;
        charges[i].y = HEIGHT/2;
        charges[i].vx = 0;
        charges[i].vy = 0;
        charges[i].fx = 0;
        charges[i].fy = 0;
        break;
      case 4:
        charges[i].dsun = 0;
        charges[i].mass = 1989*powf(10,27);
        charges[i].radius = (1400000/2);
        charges[i].x = WIDTH/2;
        charges[i].y = HEIGHT/2;
        charges[i].vx = 0;
        charges[i].vy = 0;
        charges[i].fx = 0;
        charges[i].fy = 0;
        break;
      case 5:
        charges[i].dsun = 0;
        charges[i].mass = 1989*powf(10,27);
        charges[i].radius = (1400000/2);
        charges[i].x = WIDTH/2;
        charges[i].y = HEIGHT/2;
        charges[i].vx = 0;
        charges[i].vy = 0;
        charges[i].fx = 0;
        charges[i].fy = 0;
        break;
      case 6:
        charges[i].dsun = 0;
        charges[i].mass = 1989*powf(10,27);
        charges[i].radius = (1400000/2);
        charges[i].x = WIDTH/2;
        charges[i].y = HEIGHT/2;
        charges[i].vx = 0;
        charges[i].vy = 0;
        charges[i].fx = 0;
        charges[i].fy = 0;
        break;
      case 7:
        charges[i].dsun = 0;
        charges[i].mass = 1989*powf(10,27);
        charges[i].radius = (1400000/2);
        charges[i].x = WIDTH/2;
        charges[i].y = HEIGHT/2;
        charges[i].vx = 0;
        charges[i].vy = 0;
        charges[i].fx = 0;
        charges[i].fy = 0;
        break;
      case 8:
        charges[i].dsun = 0;
        charges[i].mass = 1989*powf(10,27);
        charges[i].radius = (1400000/2);
        charges[i].x = WIDTH/2;
        charges[i].y = HEIGHT/2;
        charges[i].vx = 0;
        charges[i].vy = 0;
        charges[i].fx = 0;
        charges[i].fy = 0;
        break;
    }
  }
}

int main() {
  printf("Hello World\n");
}
