#ifndef TASKSYSTEM_H_
#define TASKSYSTEM_H_
#include "TASKS.h"
extern uint16_t SystemLoadPercent;
void TaskQueueClear(void);
bool TaskQueueAdd(Task_Resources_Struct *TaskPointer);
void SetTaskEnabled(Tasks_ID_Enum TaskID, bool Enabled);
void TaskSystemRun(void);
void SystemLoad();
uint32_t GetTaskDeltaTime(Tasks_ID_Enum TaskId);
#endif
