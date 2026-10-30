#pragma once

#include "gui/AppState.hpp"
#include <string>
#include <vector>

struct nk_context;

void draw_spine_panel(nk_context *ctx, float content_height, int window_width);
