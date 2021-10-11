#include "TASKSYSTEM.h"

void Slow_Loop() {
  Serial.print("Slow Loop");
  Serial.print("   DeltaTime:");
  Serial.println(GetTaskDeltaTime(TASK_SLOW_LOOP));
}

void Medium_Loop() {
  Serial.print("Medium Loop");
  Serial.print("   DeltaTime:");
  Serial.println(GetTaskDeltaTime(TASK_MEDIUM_LOOP));
}

void Fast_Loop() {
  Serial.print("Fast Loop");
  Serial.print("   DeltaTime:");
  Serial.println(GetTaskDeltaTime(TASK_FAST_LOOP));
}
