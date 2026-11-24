// upscale.cpp — part of ai-upscaler-video.

#include "aiupscalervideo/upscale.h"

#include <cstdio>

namespace aiupscalervideo {

Upscale::Upscale(const std::string& config_path)
    : config_path_(config_path) {}

void Upscale::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Upscale::run() {
    if (verbose_) std::fprintf(stderr, "[ai-upscaler-video] upscale: run\n");
    // core logic lives here
    return true;
}

}  // namespace aiupscalervideo
