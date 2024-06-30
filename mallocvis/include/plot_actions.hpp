#pragma once

#include <cstddef>
#include <string>
#include <vector>

#include "alloc_action.hpp"

struct PlotOptions {
  enum PlotFormat {
    Console,
    Svg,
    Obj,
  };

  enum PlotScale {
    Linear,
    Log,
    Sqrt,
  };

  enum PlotIndicate {
    Thread,
    Caller,
  };

  enum PlotLayout {
    Timeline,
    Address,
  };

  PlotFormat format = Svg;
  std::string path = "";

  PlotScale height_scale = Sqrt;
  PlotIndicate z_indicates = Thread;
  // PlotIndicate color_indicates = Caller;
  PlotLayout layout = Timeline;

  bool show_text = true;
  size_t text_max_height = 24;
  double text_height_fraction = 0.4;

  bool filter_cpp = true;
  bool filter_c = true;
  bool filter_cuda = true;

  size_t svg_margin = 420;
  size_t svg_width = 2000;
  size_t svg_height = 1460;
};

void mallocvis_plot_alloc_actions(std::vector<AllocAction> actions);