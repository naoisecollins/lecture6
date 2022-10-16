#include "raylib.h"
int main(){
 const int windowWidth{500};
 const int windowHeight{500};
InitWindow(windowWidth,windowHeight,"My Window");
const int width{50};
const int height{80};
int posY{windowHeight-height};
int velocity{0};
const int gravity{1};


Texture2D scarfy =  LoadTexture("resources/scarfy.png");
Rectangle scarfyRec;
scarfyRec.width = scarfy.width/6;
scarfyRec.height = scarfy.height;
scarfyRec.x = 0;
scarfyRec.y = 0; 
Vector2 scarfyPos;
scarfyPos.x = windowWidth/2 - scarfyRec.width/2;
scarfyPos.y = windowHeight - scarfyRec.height;

SetTargetFPS(60);  
	while(!WindowShouldClose()){
	
BeginDrawing();
DrawTextureRec(scarfy,scarfyRec,scarfyPos,WHITE);

DrawRectangle(windowWidth/2,posY,width,height,GREEN);
if(IsKeyPressed(KEY_SPACE))
{
velocity -= 10;

}
velocity += gravity;
posY += velocity;




ClearBackground(WHITE); 
EndDrawing();
}
UnloadTexture(scarfy);

CloseWindow();
}