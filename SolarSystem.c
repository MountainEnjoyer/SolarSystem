#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <raylib.h>

#define WIDTH 1800
#define HEIGHT 1000
#define FPS 60

typedef struct {
  float dsun, mass;
  float x, y, radius, vx, vy, fx, fy;
  Color color;
} Planet;

Planet Corps[8];

void InitPlanet() {
  for (int i=0; i<9; i++) {
    switch (i) {
      case 0:
        Corps[i].dsun = 0;
        Corps[i].mass = 1.989*powf(10,30);
        Corps[i].radius = (1400000/10000);
        Corps[i].x = WIDTH/2;
        Corps[i].y = HEIGHT/2;
        Corps[i].vx = 0;
        Corps[i].vy = 0;
        Corps[i].fx = 0;
        Corps[i].fy = 0;
        Corps[i].color = RED;
        break;
      case 1:
        Corps[i].dsun = 57.9*powf(10,6);
        Corps[i].mass = 3.3*powf(10,23);
        Corps[i].radius = (4880/1000);
        Corps[i].x = (Corps[0].x + Corps[0].radius + (Corps[i].dsun/10000000) + Corps[i].radius);
        Corps[i].y = HEIGHT/2;
        Corps[i].vx = 0;
        Corps[i].vy = 0;
        Corps[i].fx = 0;
        Corps[i].fy = 0;
        Corps[i].color = DARKGRAY;
        break;
      case 2:
        Corps[i].dsun = 108.2*powf(10,6);
        Corps[i].mass = 4.87*powf(10,24);
        Corps[i].radius = (12104/2000);
        Corps[i].x =  (Corps[0].x + Corps[0].radius + (Corps[i].dsun/10000000) + Corps[i].radius);
        Corps[i].y = HEIGHT/2;
        Corps[i].vx = 0;
        Corps[i].vy = 0;
        Corps[i].fx = 0;
        Corps[i].fy = 0;
        Corps[i].color = BEIGE;
        break;
      case 3:
        Corps[i].dsun = 149.6*powf(10,6);
        Corps[i].mass = 5.97*powf(10,24);
        Corps[i].radius = (12756/200);
        Corps[i].x =  (Corps[0].x + Corps[0].radius + (Corps[i].dsun/10000000) + Corps[i].radius);
        Corps[i].y = HEIGHT/2;
        Corps[i].vx = 0;
        Corps[i].vy = 0;
        Corps[i].fx = 0;
        Corps[i].fy = 0;
        Corps[i].color = GREEN;
        break;
      case 4:
        Corps[i].dsun = 227.9*powf(10,6);
        Corps[i].mass = 6.42*powf(10,23);
        Corps[i].radius = (6792/200);
        Corps[i].x =   (Corps[0].x + Corps[0].radius + (Corps[i].dsun/10000000) + Corps[i].radius);
        Corps[i].y = HEIGHT/2;
        Corps[i].vx = 0;
        Corps[i].vy = 0;
        Corps[i].fx = 0;
        Corps[i].fy = 0;
        Corps[i].color = ORANGE;
        break;
      case 5:
        Corps[i].dsun = 778.5*powf(10,6);
        Corps[i].mass = 1.9*powf(10,27);
        Corps[i].radius = (142984/200);
        Corps[i].x =   (Corps[0].x + Corps[0].radius + (Corps[i].dsun/10000000) + Corps[i].radius);
        Corps[i].y = HEIGHT/2;
        Corps[i].vx = 0;
        Corps[i].vy = 0;
        Corps[i].fx = 0;
        Corps[i].fy = 0;
        Corps[i].color = BROWN; 
        break;
      case 6:
        Corps[i].dsun = 1430*powf(10,6);
        Corps[i].mass = 5.88*powf(10,28);
        Corps[i].radius = (120536/200);
        Corps[i].x =   (Corps[0].x + Corps[0].radius + (Corps[i].dsun/10000000) + Corps[i].radius);
        Corps[i].y = HEIGHT/2;
        Corps[i].vx = 0;
        Corps[i].vy = 0;
        Corps[i].fx = 0;
        Corps[i].fy = 0;
        Corps[i].color = GOLD;
        break;
      case 7:
        Corps[i].dsun = 2870*powf(10,6);
        Corps[i].mass = 8.68*powf(10,25);
        Corps[i].radius = (51118/200);
        Corps[i].x =  (Corps[0].x + Corps[0].radius + (Corps[i].dsun/10000000) + Corps[i].radius);
        Corps[i].y = HEIGHT/2;
        Corps[i].vx = 0;
        Corps[i].vy = 0;
        Corps[i].fx = 0;
        Corps[i].fy = 0;
        Corps[i].color = SKYBLUE;
        break;
      case 8:
        Corps[i].dsun = 4490*powf(10,6);
        Corps[i].mass = 1.02*powf(10,26);
        Corps[i].radius = (49528/200);
        Corps[i].x = (Corps[0].x + Corps[0].radius + (Corps[i].dsun/10000000) + Corps[i].radius);
        Corps[i].y = HEIGHT/2;
        Corps[i].vx = 0;
        Corps[i].vy = 0;
        Corps[i].fx = 0;
        Corps[i].fy = 0;
        Corps[i].color = BLUE;
        break;
    }
  }
}

void DrawPlanet() {
  for (int i=0; i<9;i++) {
    DrawCircle(Corps[i].x, Corps[i].y, Corps[i].radius, Corps[i].color);
  }
}

int main() {
  InitWindow(WIDTH, HEIGHT, "Solar System's Forces Simulation");

  SetTargetFPS(FPS);
  InitPlanet();
  while (!WindowShouldClose()) {
    BeginDrawing();
    ClearBackground(BLACK);
    DrawPlanet();
    EndDrawing();
  }
  CloseWindow();
  return 0;
}
