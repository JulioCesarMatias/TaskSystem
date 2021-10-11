#include "TASKSYSTEM.h"

Task_Resources_Struct Task_Resources[TASK_COUNT] = {

  [TASK_SLOW_LOOP] = {
    .TaskName = "SLOW_LOOP",
    .TaskFunction = Slow_Loop,
    .DesiredPeriod = SCHEDULER_SET_FREQUENCY(10, "Hz"),
    .StaticPriority = TASK_PRIORITY_LOW,
  },

  [TASK_MEDIUM_LOOP] = {
    .TaskName = "MEDIUM_LOOP",
    .TaskFunction = Medium_Loop,
    .DesiredPeriod = SCHEDULER_SET_FREQUENCY(50, "Hz"),
    .StaticPriority = TASK_PRIORITY_HIGH,
  },

  [TASK_FAST_LOOP] = {
    .TaskName = "FAST_LOOP",
    .TaskFunction = Fast_Loop,
    .DesiredPeriod = SCHEDULER_SET_FREQUENCY(500, "Hz"),
    .StaticPriority = TASK_PRIORITY_REALTIME,
  },

  [TASK_SYSTEM_LOAD] = {
    .TaskName = "SYSTEM_LOAD",
    .TaskFunction = SystemLoad,
    .DesiredPeriod = SCHEDULER_SET_FREQUENCY(10, "Hz"),
    .StaticPriority = TASK_PRIORITY_HIGH,
  },

};
