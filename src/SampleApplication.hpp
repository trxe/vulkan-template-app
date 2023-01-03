#include "Application.hpp"
#include "imgui.h"

class SampleApplication : public Application {
public:
    void display() override;
private:
    bool show_demo_window = true;
    bool show_another_window = true;
    ImVec4 clear_color = ImVec4(0.45f, 0.55f, 0.60f, 1.00f);
};