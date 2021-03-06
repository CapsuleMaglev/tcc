#include "globals_scenes.h"

#ifndef CLASS_HEADER_INTERFACE
#define CLASS_HEADER_INTERFACE
#include "interface.h"
#endif

void InterfaceScene4::Show()
{
  ImGui::Text("This is a text specific of Scene 4");
  ImGui::SliderFloat3("A", (float *)&g_Scene4->a, -3.0f, 3.0f);
  ImGui::SliderFloat3("B", (float *)&g_Scene4->b, -3.0f, 3.0f);
  ImGui::SliderFloat3("C", (float *)&g_Scene4->c, -3.0f, 3.0f);
  ImGui::SliderFloat3("D", (float *)&g_Scene4->d, -3.0f, 3.0f);

  ImGui::PlotVar("Current T", g_Scene4->t);
  ImGui::PlotVar("Current X", g_Scene4->x);
  ImGui::PlotVar("Current Y", g_Scene4->y);
  ImGui::PlotVar("Current Z", g_Scene4->z);
}