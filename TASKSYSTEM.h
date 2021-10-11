/*
   Este arquivo faz parte da JCFLIGHT.

   JCFLIGHT é um software livre: você pode redistribuí-lo e/ou modificar
   sob os termos da GNU General Public License conforme publicada por
   a Free Software Foundation, seja a versão 3 da Licença, ou
   (à sua escolha) qualquer versão posterior.

  JCFLIGHT é distribuído na esperança de ser útil,
  mas SEM QUALQUER GARANTIA; sem mesmo a garantia implícita de
  COMERCIALIZAÇÃO ou ADEQUAÇÃO A UM DETERMINADO FIM. Veja o
  GNU General Public License para mais detalhes.

   Você deve ter recebido uma cópia da Licença Pública Geral GNU
  junto com a JCFLIGHT. Caso contrário, consulte <http://www.gnu.org/licenses/>.
*/

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
