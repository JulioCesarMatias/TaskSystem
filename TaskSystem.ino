#include "TASKSYSTEM.h"

void setup() {
  Serial.begin(115200);
  TaskQueueClear();
  TaskQueueAdd(&Task_Resources[TASK_SLOW_LOOP]);
  SetTaskEnabled(TASK_SLOW_LOOP, ACTIVE_THIS_TASK);
  SetTaskEnabled(TASK_MEDIUM_LOOP, ACTIVE_THIS_TASK);
  SetTaskEnabled(TASK_FAST_LOOP, ACTIVE_THIS_TASK);
  SetTaskEnabled(TASK_SYSTEM_LOAD, ACTIVE_THIS_TASK);
}

void loop() {
  TaskSystemRun();
}
