// denoise.cpp — part of ai-upscaler-video.

#include "aiupscalervideo/denoise.h"

#include <cstdio>

namespace aiupscalervideo {

Denoise::Denoise(const std::string& config_path)
    : config_path_(config_path) {}

void Denoise::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Denoise::run() {
    if (verbose_) std::fprintf(stderr, "[ai-upscaler-video] denoise: run\n");
    // core logic lives here
    return true;
}

}  // namespace aiupscalervideo
