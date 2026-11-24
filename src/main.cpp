// main.cpp — entry point. Wires config and subsystems together.

#include "aiupscalervideo/settings.h"
#include "aiupscalervideo/upscale.h"
#include "aiupscalervideo/interpolate.h"
#include "aiupscalervideo/denoise.h"
#include <csignal>
#include <memory>

namespace { std::atomic<bool> g_running{true}; void on_signal(int) { g_running.store(false); } }

int main(int argc, char** argv) {
    std::signal(SIGINT, on_signal);
    std::signal(SIGTERM, on_signal);

    aiupscalervideo::Settings settings = aiupscalervideo::Settings::load_default();
    aiupscalervideo::Upscale upscale(settings.store_path);
    aiupscalervideo::Interpolate interpolate(settings.store_path);
    aiupscalervideo::Denoise denoise(settings.store_path);
    std::fprintf(stderr, "[ai-upscaler-video] ready\n");

    while (g_running.load()) {
        // main loop: pump subsystems
        break;
    }
    return 0;
}
