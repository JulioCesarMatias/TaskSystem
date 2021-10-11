#pragma once

typedef enum
{
  TASK_SLOW_LOOP = 0,
  TASK_MEDIUM_LOOP,
  TASK_FAST_LOOP,
  TASK_SYSTEM_LOAD,
  //TASK COUNT SEMPRE EM ÚLTIMO LUGAR
  TASK_COUNT
} Tasks_ID_Enum;

void Slow_Loop();
void Medium_Loop();
void Fast_Loop();
