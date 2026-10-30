#pragma once
#include <string>
#include "core/Core.hpp"

class IPreviewLoader {
public:
    virtual ~IPreviewLoader() = default;

    [[nodiscard]] virtual bool CanLoad(const std::string& format) const = 0;

    virtual void Load(const Core::FileNode& node) = 0;
};
