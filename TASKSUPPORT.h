#pragma once

#include "Arduino.h"

#define SCHEDULER_SET_FREQUENCY(Frequecy, Unidad) (1000000 / (Frequecy))
#define ACTIVE_THIS_TASK true
#define DESACTIVE_THIS_TASK false

enum TaskPriority_Enum
{
  TASK_PRIORITY_LOW = 1,
  TASK_PRIORITY_MEDIUM = 3,
  TASK_PRIORITY_MEDIUM_HIGH = 4,
  TASK_PRIORITY_HIGH = 5,
  TASK_PRIORITY_REALTIME = 6
};

typedef struct
{
  const char *TaskName;
  void (*TaskFunction)();
  int32_t DesiredPeriod;
  const uint8_t StaticPriority;
  uint16_t DynamicPriority;
  uint16_t TaskAgeCycles;
  uint32_t LastExecuted;
  int32_t TaskLatestDeltaTime;
} Task_Resources_Struct;
