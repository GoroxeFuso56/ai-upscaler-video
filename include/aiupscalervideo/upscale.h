// upscale — part of ai-upscaler-video.

#pragma once

#include <string>
#include <vector>

namespace aiupscalervideo {

class Upscale {
public:
    explicit Upscale(const std::string& config_path);

    void configure(const std::string& key, const std::string& value);
    bool run();
    bool verbose() const { return verbose_; }

private:
    std::string config_path_;
    bool verbose_ = false;
};

}  // namespace aiupscalervideo
