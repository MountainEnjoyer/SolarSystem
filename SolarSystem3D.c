#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <raylib.h>

#define WIDTH 1800
#define HEIGHT 900
#define FPS 60

typedef struct {
  float dsun, mass;
  Vector3 pos;
  float radius, vx, vy, fx, fy;
  Color color;
} Planet;

Planet Corps[8];

void InitPlanet() {
  for (int i=0; i<9; i++) {
    switch (i) {
      case 0:
        Corps[i].dsun = 0;
        Corps[i].mass = 1.989*powf(10,30);
        Corps[i].radius = (1400000/2000);
        Corps[i].pos = (Vector3) {0.0f,0.0f,0.0f};
        Corps[i].vx = 0;
        Corps[i].vy = 0;
        Corps[i].fx = 0;
        Corps[i].fy = 0;
        Corps[i].color = RED;
        break;
      case 1:
        Corps[i].dsun = 57.9*powf(10,6);
        Corps[i].mass = 3.3*powf(10,23);
        Corps[i].radius = (4880/2000);
        Corps[i].pos = (Vector3) {(Corps[0].pos.x + Corps[0].radius + (Corps[i].dsun/500000) + Corps[i].radius), 0, 0};
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
        Corps[i].pos = (Vector3) {(Corps[0].pos.x + Corps[0].radius + (Corps[i].dsun/500000) + Corps[i].radius), 0, 0};
        Corps[i].vx = 0;
        Corps[i].vy = 0;
        Corps[i].fx = 0;
        Corps[i].fy = 0;
        Corps[i].color = BEIGE;
        break;
      case 3:
        Corps[i].dsun = 149.6*powf(10,6);
        Corps[i].mass = 5.97*powf(10,24);
        Corps[i].radius = (12756/2000);
        Corps[i].pos = (Vector3) {(Corps[0].pos.x + Corps[0].radius + (Corps[i].dsun/500000) + Corps[i].radius), 0, 0};
        Corps[i].vx = 0;
        Corps[i].vy = 0;
        Corps[i].fx = 0;
        Corps[i].fy = 0;
        Corps[i].color = GREEN;
        break;
      case 4:
        Corps[i].dsun = 227.9*powf(10,6);
        Corps[i].mass = 6.42*powf(10,23);
        Corps[i].radius = (6792/2000);
        Corps[i].pos = (Vector3) {(Corps[0].pos.x + Corps[0].radius + (Corps[i].dsun/500000) + Corps[i].radius), 0, 0};
        Corps[i].vx = 0;
        Corps[i].vy = 0;
        Corps[i].fx = 0;
        Corps[i].fy = 0;
        Corps[i].color = ORANGE;
        break;
      case 5:
        Corps[i].dsun = 778.5*powf(10,6);
        Corps[i].mass = 1.9*powf(10,27);
        Corps[i].radius = (142984/2000);
        Corps[i].pos = (Vector3) {(Corps[0].pos.x + Corps[0].radius + (Corps[i].dsun/500000) + Corps[i].radius), 0, 0};
        Corps[i].vx = 0;
        Corps[i].vy = 0;
        Corps[i].fx = 0;
        Corps[i].fy = 0;
        Corps[i].color = BROWN; 
        break;
      case 6:
        Corps[i].dsun = 1430*powf(10,6);
        Corps[i].mass = 5.88*powf(10,28);
        Corps[i].radius = (120536/2000);
        Corps[i].pos = (Vector3) {(Corps[0].pos.x + Corps[0].radius + (Corps[i].dsun/500000) + Corps[i].radius), 0, 0};
        Corps[i].vx = 0;
        Corps[i].vy = 0;
        Corps[i].fx = 0;
        Corps[i].fy = 0;
        Corps[i].color = GOLD;
        break;
      case 7:
        Corps[i].dsun = 2870*powf(10,6);
        Corps[i].mass = 8.68*powf(10,25);
        Corps[i].radius = (51118/2000);
        Corps[i].pos = (Vector3) {(Corps[0].pos.x + Corps[0].radius + (Corps[i].dsun/500000) + Corps[i].radius), 0, 0};
        Corps[i].vx = 0;
        Corps[i].vy = 0;
        Corps[i].fx = 0;
        Corps[i].fy = 0;
        Corps[i].color = SKYBLUE;
        break;
      case 8:
        Corps[i].dsun = 4490*powf(10,6);
        Corps[i].mass = 1.02*powf(10,26);
        Corps[i].radius = (49528/2000);
        Corps[i].pos = (Vector3) {(Corps[0].pos.x + Corps[0].radius + (Corps[i].dsun/500000) + Corps[i].radius), 0, 0};
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
    DrawSphere(Corps[i].pos, Corps[i].radius, Corps[i].color);
  }
}

int main() {
  InitWindow(WIDTH, HEIGHT, "Solar System's Forces Simulation");
  SetTargetFPS(FPS);

  Camera3D camera = {0};
  camera.position = (Vector3){5000.0f, 1000.0f,1000.0f};
  camera.target = (Vector3){0.0f,0.0f,0.0f};
  camera.up = (Vector3){0.0f,1.0f,0.0f};
  camera.fovy = 45.0f;
  camera.projection = CAMERA_PERSPECTIVE;
  DisableCursor();

  InitPlanet();
  while (!WindowShouldClose()) {
    UpdateCamera(&camera, CAMERA_FREE);
    
    BeginDrawing();
      ClearBackground(BLACK);
      BeginMode3D(camera);

        DrawPlanet();
    
      EndMode3D();
    EndDrawing();
  }
  
  CloseWindow();
  return 0;
}
