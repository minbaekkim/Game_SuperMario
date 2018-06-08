#pragma once

#define WINCX 800
#define WINCY 600

#define TILECX 64
#define TILECY 64
#define TILEX 32
#define TILEY 18
// 2048 x 1152

#define MAINSTAGE_ORIGIN_X 2816
#define MAINSTAGE_ORIGIN_Y 432
#define MAINSTAGE_REAL_X MAINSTAGE_ORIGIN_X * 3
#define MAINSTAGE_REAL_Y MAINSTAGE_ORIGIN_Y * 3

#define UNDERSTAGE_ORIGIN_X 514
#define UNDERSTAGE_ORIGIN_Y 257
#define UNDERSTAGE_REAL_X UNDERSTAGE_ORIGIN_X * 3
#define UNDERSTAGE_REAL_Y UNDERSTAGE_ORIGIN_Y * 3
//141

#define FINALSTAGE_ORIGIN_X 2562
#define FINALSTAGE_ORIGIN_Y 434
#define FINALSTAGE_REAL_X FINALSTAGE_ORIGIN_X * 3
#define FINALSTAGE_REAL_Y FINALSTAGE_ORIGIN_Y * 3
// 2816 x 432 원본 이미지 크기
// 2816 x 432 사용사이즈

#define NO_EVENT 0
#define DEAD_OBJ 1

#define PI 3.141592f
#define GRAVITY 9.8f

#define MARGIN_Y 100

#define PLAYER_SIZE_X 40.f
#define PLAYER_SIZE_Y 72.f
#define PLAYER_RENDER_X 50.f
#define PLAYER_RENDER_Y 77.f

#define OBSTACLE_SIZE_X 20
#define OBSTACLE_PIPE_SIZE_X 93
#define OBSTACLE_WALL_SIZE_X 47

#define LINE_RENDER_OK false
#define PATH_RENDER_OK false

#define RENDER_MULTIPLE 3.f
#define BOSS_MULTIPLE 5.f
#define EXCEPT_COLOR RGB(51,200,150)
#define UI_MARGIN_Y 104

